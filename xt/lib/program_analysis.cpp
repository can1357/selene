#if 0
#include "../includes/xt/program_analysis.hpp"
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <xstd/hashable.hpp>
#include <xstd/text.hpp>
#include <xstd/algorithm.hpp>
#include <xstd/statistics.hpp>
#include <xstd/graph.hpp>
#include <xstd/color.hpp>
#include <xstd/file.hpp>

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


		// Graphs.
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


		struct node_wrapper
		{
			const event_node* ref;
			bool operator==( const node_wrapper& o ) const { return o.ref == ref; }
			bool operator!=( const node_wrapper& o ) const { return o.ref == ref; }
			std::string to_string() const { return xstd::make_hash( *ref ).to_string(); }
		};
		xstd::digraph<node_wrapper> draw_event_flow( bool clustered )
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
					auto& n = cl.node( node_wrapper{ &source.nodes.at( node ) } );

					std::string label = n.value.ref->to_string();
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
							auto it_match = std::find_if( n.value.ref->args[ i ].begin(), n.value.ref->args[ i ].end(), [ & ] ( auto& entry ) { return entry.second == min_inst_id; } );
							if ( it_match == n.value.ref->args[ i ].end() )
							{
								arg_pack[ i ] = "null";
								continue;
							}

							if ( auto* u = std::get_if<uint64_t>( &it_match->first ) )
								arg_pack[ i ] = name_address( *u );
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
							cl.node( node_wrapper{ &source.nodes.at( node ) } ).attribute( "color", "green" );
					}
					if ( cluster.src.empty() )
					{
						for ( auto& node : cluster.nodes )
							cl.node( node_wrapper{ &source.nodes.at( node ) } ).attribute( "color", "purple" );
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
						cl.node( node_wrapper{ &source.nodes.at( node ) } ).attribute( "color", "red" );
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
					graph.edge( node_wrapper{ &node }, node_wrapper{ &source.nodes.at( edge.dst ) } )
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


		/*
		using path = std::vector<std::pair<const cluster*, const event_edge*>>;
		using stack = std::map<int32_t, const cluster*, std::greater<int32_t>>;
		using history = uset<std::pair<const event_edge*, int32_t>>;

#define PF_DEBUG 1
		std::vector<std::pair<path, int32_t>> pathfind( stack st, path p, int32_t sp, history hs = {} ) const
		{
			auto* at = p.back().first;
			if ( at->dst.empty() )
			{
				if ( sp >= 0 )
				{
					return { { std::move( p ), sp } };
				}
				else
				{
#if PF_DEBUG
					xstd::log( "<#%llu> %s | not viable #-1\n",
								at - clusters.data() + 1, xstd::fmt::offset( sp ) );
#endif
					return {};
				}
			}


			std::vector<std::pair<path, int32_t>> results = {};
			for ( auto& [c, edge] : at->dst )
			{
#if PF_DEBUG
				xstd::log( "Path finding: \n" );
				xstd::log( "%s [", xstd::fmt::offset( sp ) );
				for ( auto& [a, b] : p )
				{
					xstd::log( "#%llu, ",
								a - clusters.data() + 1 );

				}
				if ( auto px = p.rbegin()->second )
					xstd::log( "%s]\n", xstd::fmt::as_string( px->dst.type ) );
				else
					xstd::log( "]\n" );
				xstd::log( "{" );
				for ( auto& [sp, a] : st )
					xstd::log( "#%llu, ",
								a - clusters.data() + 1 );
				xstd::log( "}\n" );

#endif
				std::pair<const cluster*, const event_edge*> entry = { c, edge };

				auto edge_id = 0;
				if ( hs.contains( { edge, edge_id } ) )
				{
#if PF_DEBUG
					xstd::log( "<#%llu> %s | not viable #0\n",
								entry.first - clusters.data() + 1, xstd::fmt::offset( edge->sp_delta ) );
#endif
					continue;
				}

				// Pushing entry:
				//
				if( edge->sp_delta < 0 )
				{
					// Viable only if the ToS matches.
					//
					if ( st.empty() != edge->path_hints.empty() )
					{
#if PF_DEBUG
						xstd::log( "<#%llu> %s | not viable #1\n",
									entry.first - clusters.data() + 1, xstd::fmt::offset( edge->sp_delta ) );
#endif
						continue;
					}
					if ( !st.empty() && !st.rbegin()->second->nodes.contains( edge->path_hints.back() ) )
					{
#if PF_DEBUG
						xstd::log( "<#%llu> %s | not viable #2\n",
									entry.first - clusters.data() + 1, xstd::fmt::offset( edge->sp_delta ) );
#endif
						continue;
					}

					stack st_copy = st;
					auto [vit, _] = st_copy.insert_or_assign( sp, at );
					st_copy.erase( std::next( vit ), st_copy.end() );

					path p_copy = p;
					p_copy.emplace_back( entry );

					history hs_copy = hs;
					hs_copy.emplace( edge, edge_id );

					auto found = pathfind(
						std::move( st_copy ),
						std::move( p_copy ),
						sp + edge->sp_delta,
						hs_copy
					);
					results.insert(
						results.end(),
						std::make_move_iterator( found.begin() ),
						std::make_move_iterator( found.end() )
					);
				}
				// Popping entry:
				//
				else
				{
					// Viable only if the popped entries match.
					//
					xstd::range vr{ st.lower_bound( sp + edge->sp_delta ), st.end() };
					if ( edge->path_hints.size() != vr.size() )
					{
#if PF_DEBUG
						xstd::log( "<#%llu> %s | not viable #3 [%llu vs %llu]\n",
									entry.first - clusters.data() + 1, xstd::fmt::offset( edge->sp_delta ),
									edge->path_hints.size(), vr.size()
						);
#endif
						continue;
					}

					bool invalid = false;
					auto oit = edge->path_hints.begin();
					for ( auto it = vr.begin(); it != vr.end(); ++it, ++oit )
					{
						if ( !it->second->nodes.contains( *oit ) )
						{
							invalid = true;

#if PF_DEBUG
							xstd::log( "<#%llu> %s | not viable #4 (#%llu != #%llu)\n",
										entry.first - clusters.data() + 1, xstd::fmt::offset( edge->sp_delta ),
										it->second - clusters.data() + 1,
										get_cluster( *oit ) - clusters.data() + 1
							);
#endif
							break;
						}
					}
					if ( invalid )
					{
						continue;
					}

					stack st_copy = st;
					st.erase( vr.begin(), vr.end() );
					std::swap( st, st_copy );

					path p_copy = p;
					p_copy.emplace_back( entry );

					history hs_copy = hs;
					hs_copy.emplace( edge, edge_id );

					auto found = pathfind(
						std::move( st_copy ),
						std::move( p_copy ),
						sp + edge->sp_delta,
						hs_copy
					);
					results.insert(
						results.end(),
						std::make_move_iterator( found.begin() ),
						std::make_move_iterator( found.end() )
					);
				}
			}
			return results;
		};

		std::vector<std::pair<path, int32_t>> pathfind( const cluster* cl )
		{
			fassert( cl->src.empty() );
			std::vector<std::pair<path, int32_t>> results = {};
			for ( auto& [dst, edge] : cl->dst )
			{
				auto found = pathfind( { { 0, cl } }, { { cl, edge },  { dst, nullptr } }, edge->sp_delta );
				results.insert(
					results.end(),
					std::make_move_iterator( found.begin() ),
					std::make_move_iterator( found.end() )
				);
			}
			return results;
		}
		*/
	};







	program_analysis generate_analysis( const event_graph& graph, std::filesystem::path src )
	{
		analysis_context ctx{ graph };

		// Group same-level nodes together in clusters.
		//
		ctx.cluster_nodes();

		//xstd::inspect( ctx.draw_cluster_flow() );

		/*for ( auto& cluster : ctx.clusters )
		{
			xstd::log( "Cluster %s [%s]:\n", cluster, cluster.nodes.front().to_string() );
			for ( auto& dst : cluster.dst )
			{
				if ( dst.second->sp_delta < 0 )
					xstd::log( " => Callout to %s from %s (0x%x)\n", ctx.get_cluster( dst.second->dst )->to_string(), dst.second->path_hints.empty() ? "UNK" : ctx.get_cluster( dst.second->path_hints.front().first )->name, -dst.second->sp_delta );
				else
					xstd::log( " => Return to %s (0x%x)\n", ctx.get_cluster( dst.second->dst )->to_string(), dst.second->sp_delta );
			}

			for ( auto& c2 : ctx.clusters )
			{
				for ( auto& [cl1, nedge] : c2.dst )
				{
					if ( nedge->sp_delta <= 0 )
						continue;

					for ( auto& [h, d] : nedge->path_hints )
					{
						if ( xstd::contains( cluster.nodes, h ) )
							xstd::log( "--- Popped by %s, ret to %s (0x%x)\n", c2, cl1->to_string(), d );
					}
				}
			}
		}*/
		xstd::file::write_string( src.replace_extension( "dot" ), ctx.draw_event_flow( false ).to_string() );
		//xstd::inspect( ctx.draw_cluster_flow() );

		for ( auto& [src, cl] : ctx.cluster_map )
			xstd::log( "'%s' is in Cluster #%llu\n", src.to_string(), cl - ctx.clusters.data() + 1 );

		system( xstd::fmt::str(
			R"(dot "%s" -Tsvg -o "%s")",
			src,
			std::filesystem::path( src ).replace_extension( "svg" )
		).c_str() );

		// Path finding test.
		//
		//auto res = ctx.pathfind( &ctx.clusters[ 2 - 1 ] );
		//xstd::sort( res, [ ] ( auto& pr1, auto& pr2 )
		//{
		//	return pr1.first.size() >= pr2.first.size();
		//} );
		//
		//xstd::log( "Paths found:\n" );
		//for ( auto& [entry, sp] : res )
		//{
		//	xstd::log( "%s [", xstd::fmt::offset( sp ) );
		//	for ( auto& [a, e] : entry )
		//		xstd::log( "#%llu, ", a - ctx.clusters.data() + 1 );
		//	xstd::log( "]\n" );
		//}
		//
		//
		//auto label_edge = [ ] ( const event_edge& edge, float percentage, size_t count )
		//{
		//	return "d= " + xstd::fmt::hex( edge.sp_delta ) + ", p=" + xstd::fmt::str( "%.2f%% (%llu times)", 100.0f * percentage, count );
		//};


		//auto bigresmmem = {
		//	2, 6, 9, 11, 19, 21, 30, 35, 33, 44, 4, 32, 51, 53, 8, 58, 33, 59, 39, 16, 43, 62, 63, 50, 77, 37, 79, 7, 80, 81, 22, 7, 80, 48, 70, 23, 86, 42, 91, 92, 94, 104, 69, 105, 18, 105, 198, 31, 7, 80, 210, 211, 189, 212, 84, 22, 7,
		//};

		/*for ( auto& [a, e] : res.front().first )
		{

			xstd::log( "subgraph cluster_%llu {\n", a - ctx.clusters.data() + 1 );

			for ( auto& uid : a->nodes )
			{
				auto its = xstd::find_if( res.front().first, [ & ] ( auto& pair )
				{
					return pair.first->nodes.contains( uid );
				} );
				if ( !its )
					continue;

				auto& node = graph.nodes.at( uid );

				xstd::log( "\t\"%s\";\n", node.to_string() );
			}

			for ( auto& uid : a->nodes )
			{
				auto its = xstd::find_if( res.front().first, [ & ] ( auto& pair )
				{
					return pair.first->nodes.contains( uid );
				} );
				if ( !its )
					continue;

				auto& node = graph.nodes.at( uid );

				for ( auto& [edge, dts] : node.edges )
				{
					auto itd = xstd::find_if( res.front().first, [ & ] ( auto& pair )
					{
						return pair.first->nodes.contains( edge.dst );
					} );
					if ( !itd )
						continue;

					xstd::log( "\"%s\"->\"%s\" [label=\"%s\"];\n",
								node.to_string(),
								graph.nodes.at( edge.dst ).to_string(),
								label_edge( edge, dts.counter / float( node.counter ), dts.counter ) );
				}
			}

			xstd::log( "}\n" );
		}*/


		//// Create the subroutines.
		////
		//for ( auto& [uid, node] : graph.nodes )
		//{
		//	if ( !analysis.child_set.contains( uid ) )
		//	{
		//		auto& sub = analysis.subroutines.emplace_back( std::make_shared<subroutine>() );
		//		sub->control_flow.emplace_back( node, true );
		//		analysis.node_mappings[ uid ] = { sub, 0 };
		//	}
		//}

		// what if its recursive? will have a ref but will be from a child...
		// Skip callbacks
		// #GP = subroutine?? :Lul:

		return {};
	}
};
#endif