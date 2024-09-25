#pragma once
#include "event_graph.hpp"
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <xstd/hashable.hpp>
#include <xstd/text.hpp>
#include <xstd/algorithm.hpp>
#include <xstd/statistics.hpp>
#include <xstd/graph.hpp>
#include <xstd/color.hpp>
#include <xstd/file_view.hpp>
#include <pdblib/pdb.hpp>

namespace xt
{
	// Some quick aliases.
	//
	template<typename T>
	using uset = std::unordered_set<T, xstd::hasher<>>;
	template<typename K, typename V>
	using umap = std::unordered_map<K, V, xstd::hasher<>>;
	template<typename K, typename V>
	using umultimap = std::unordered_multimap<K, V, xstd::hasher<>>;

	struct cluster
	{
		// Name of the cluster.
		//
		std::string name;

		// Clusters that reference us.
		//
		umultimap<cluster*, const event_edge*> src;

		// Set of nodes.
		//
		std::vector<event_node_id> nodes;

		// Clusters we reference.
		//
		umultimap<cluster*, const event_edge*> dst;

		// String converison.
		//
		std::string to_string() const { return name; }
	};

	struct analysis_context
	{
		const event_graph& source;

		std::vector<cluster> clusters;
		umap<event_node_id, cluster*> cluster_map;

		cluster* get_cluster( const event_node_id& id ) { return cluster_map.at( id ); }
		const cluster* get_cluster( const event_node_id& id ) const { return xstd::make_mutable( this )->get_cluster( id ); }

		// Draws a DOT representation of the clusters.
		//
		xstd::digraph<const cluster*> draw_cluster_flow()
		{
			xstd::digraph<const cluster*> cluster_flow;

			auto label_edge = [ & ] ( const event_edge* edge )
			{
				return xstd::fmt::offset( edge->sp_delta );
			};
			for ( auto& cluster : clusters )
			{
				for ( auto& dst : cluster.dst )
				{
					cluster_flow.edge( &cluster, dst.first )
						.attribute( "label", label_edge( dst.second ) )
						.attribute( "color", dst.second->sp_delta > 0 ? "blue" : "red" );
				}
				if ( cluster.dst.empty() )
					cluster_flow.node( &cluster ).attribute( "color", "green" );
				if ( cluster.src.empty() )
					cluster_flow.node( &cluster ).attribute( "shape", "box" );
			}
			return cluster_flow;
		}

		// Draws a DOT representation of the graph.
		//
		struct node_wrapper
		{
			fn_address_namer namer;
			const event_node* ref;
			bool operator==( const node_wrapper& o ) const { return o.ref == ref; }
			bool operator!=( const node_wrapper& o ) const { return o.ref == ref; }
			std::string to_string() const { return xstd::make_hash( *ref ).to_string(); }
		};
		xstd::digraph<node_wrapper> draw_event_flow( bool clustered, fn_address_namer namer = name_address )
		{
			// Decide on graph attributes.
			//
			xstd::digraph<node_wrapper> graph;
			if ( !clustered )
			{
				graph
					.attribute( "rankdir", "TB" )
					.attribute( "clusterrank", "none" )
					.node_attribute( "shape", "box" )
					.node_attribute( "height", "0.2" );
			}

			// Add the clusters and the nodes.
			//
			for ( auto& cluster : clusters )
			{
				auto& cl = graph.subgraph().cluster();
				for ( auto& node : cluster.nodes )
				{
					auto& n = cl.node( node_wrapper{ namer, &source.nodes.at( node ) } );

					std::string label = n.value.ref->to_string( namer );
					if ( !n.value.ref->args.empty() )
					{
						size_t min_inst_id = std::string::npos;
						for ( auto& group : n.value.ref->args )
							for ( auto& [e, id] : group )
								min_inst_id = std::min( min_inst_id, id );

						std::vector<std::string> arg_pack;
						arg_pack.resize( n.value.ref->args.size() );
						for ( size_t i = 0; i != arg_pack.size(); i++ )
						{
							auto it_match = std::find_if( n.value.ref->args[i].begin(), n.value.ref->args[i].end(), [ & ] ( auto& entry ) { return entry.second == min_inst_id; } );
							if ( it_match == n.value.ref->args[ i ].end() )
							{
								arg_pack[ i ] = "null";
								continue;
							}

							if ( auto* u = std::get_if<uint64_t>( &it_match->first ) )
								arg_pack[ i ] = namer( *u );
							else
								arg_pack[ i ] = std::get<std::string>( it_match->first );
						}

						label += xstd::fmt::as_string( arg_pack );
					}
					n.attribute( "label", label );
				}

				if ( !clustered )
				{
					if ( cluster.dst.empty() )
					{
						for ( auto& node : cluster.nodes )
							cl.node( node_wrapper{ namer, &source.nodes.at( node ) } ).attribute( "color", "green" );
					}
					if ( cluster.src.empty() )
					{
						for ( auto& node : cluster.nodes )
							cl.node( node_wrapper{ namer, &source.nodes.at( node ) } ).attribute( "color", "purple" );
					}
				}
				else
				{
					cl.attribute( "label", cluster.name );
					if ( cluster.dst.empty() )
						cl.attribute( "color", "green" );
					if ( cluster.src.empty() )
						cl.attribute( "color", "purple" );
				}

				for ( auto& node : cluster.nodes )
					if ( node.type == xt::evt_node_error )
						cl.node( node_wrapper{ namer, &source.nodes.at( node ) } ).attribute( "color", "red" );
			}

			// Add the edges.
			//
			//std::vector<double> times;
			//for ( auto& [uid, node] : source.nodes )
			//	for ( auto& [edge, dts] : node.edges )
			//		times.emplace_back( dts.avg_time_spent().count() );
			//xstd::sort( times );
			auto label_edge = [ & ] ( auto& edge, auto& node, auto& dts ) -> std::string
			{
				if ( !clustered )
					return xstd::fmt::str( "%.2f%% (%llu times)", ( 100.0f * dts.counter ) / node.counter, dts.counter );
				return xstd::fmt::str( "D=%s | %.2f%% (%llu times)", xstd::fmt::hex( edge.sp_delta ), ( 100.0f * dts.counter ) / node.counter, dts.counter );
			};
			for ( auto& [uid, node] : source.nodes )
			{
				for ( auto& [edge, dts] : node.edges )
				{
					graph.edge( node_wrapper{ namer, &node }, node_wrapper{ namer, &source.nodes.at( edge.dst ) } )
						.attribute( "label", label_edge( edge, node, dts ) )/*
						.attribute( "color", xstd::rgb_t( xstd::hsv_t{ float( 1 - xstd::percentile_of( times, dts.avg_time_spent().count() ) ) * 2.094f, 1.0f, 0.4f } ).to_string() )*/;
				}
			}

			// If not clustered, remove redundant edges.
			//
			if ( !clustered )
			{
				graph.edges.erase( std::unique( graph.edges.begin(), graph.edges.end(), [ ] ( auto&& e1, auto&& e2 )
				{
					return std::tie( e1.src, e1.dst ) == std::tie( e2.src, e2.dst );
				} ), graph.edges.end() );
			}
			return graph;
		}

		// Creates the node clusters.
		//
		void cluster_nodes()
		{
			// Group all nodes where D = 0 together.
			//
			auto groups = xstd::group_by( source.nodes, [ & ] ( auto&& it, auto&& append )
			{
				for ( auto& [edge, counter] : it->second.edges )
					if ( edge.sp_delta == 0 )
						append( source.nodes.find( edge.dst ) );
			} );

			// Generate the clusters from the grouped iterators.
			//
			clusters.reserve( groups.size() );
			for ( auto& group : groups )
			{
				// Create a cluster and fill the node list.
				//
				auto& cluster = clusters.emplace_back();
				cluster.name = "#" + std::to_string( clusters.size() );
				for ( auto& it : group )
				{
					cluster_map.emplace( it->first, &cluster );
					cluster.nodes.emplace_back( it->first );
				}
			}

			// Map cluster references and determine the local size.
			//
			for ( size_t n = 0; n != groups.size(); n++ )
			{
				auto* src = &clusters[ n ];
				auto& group = groups[ n ];
				for ( auto& it : group )
				{
					for ( auto& [edge, ctr] : it->second.edges )
					{
						if ( edge.sp_delta != 0 )
						{
							auto* dst = get_cluster( edge.dst );
							src->dst.emplace( dst, &edge );
							dst->src.emplace( src, &edge );
						}
					}
				}
			}
		}
	};

	// Renders the dot files to represent the given event graph.
	//
	inline std::string render_dot( const event_graph& graph, fn_address_namer namer = name_address ) {
		analysis_context ctx{ graph };
		ctx.cluster_nodes();
		return ctx.draw_event_flow( false, namer ).to_string();
	}

	// Thread-local PDB namer.
	//
	struct pdb_entry
	{
		std::string_view name;
		xstd::numeric_range<xstd::any_ptr> range;
		std::filesystem::path path;
		xstd::file::view<> view = {};
		std::map<uint64_t, std::string> name_map;

		pdb_entry( std::string_view name, uint64_t base, size_t size, const std::filesystem::path& path ) : name( name ), range( base, base + size ), path( path ) {}

		std::string name_address( xstd::any_ptr ptr )
		{
			std::error_code ec;
			if ( name_map.empty() && !path.empty() && std::filesystem::is_regular_file( path, ec ) )
			{
				view = *xstd::file::map_view( path );
				pdb::instance inst( msf::stream( view.data(), view.size(), path ) );
				path.clear();

				for ( auto& [pub_name, pub] : inst.public_map )
				{
					for ( auto& adr : pub.addresses )
					{
						auto [sym_rva, sec] = inst.dbi.translate( adr );
						name_map.emplace( sym_rva, pub_name );
					}
				}
			}
			auto rva = ptr - range.first;
			auto it = name_map.upper_bound( rva );
			if ( it == name_map.begin() )
				return std::string{ name } + " " + xstd::fmt::offset( rva );
			--it;
			if ( it->first == rva )
				return it->second;
			else
				return std::string{ it->second } + " " + xstd::fmt::offset( rva - it->first );
		}
	};
	inline thread_local std::vector<std::shared_ptr<pdb_entry>> pdb_list;
	inline std::string pdb_namer( xstd::any_ptr p ) {
		for ( auto& e : pdb_list )
			if ( e->range.contains( p ) )
				return e->name_address( p );
		return xstd::fmt::as_string( ( uint64_t ) p );
	}
};