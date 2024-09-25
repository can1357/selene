#pragma once
#include <flash/rule.hpp>

namespace flash
{
	// Alignment filter.
	//
	struct aligned final : rule
	{
		// Constructed by an alignment boundary.
		//
		uint32_t mask;
		aligned( uint32_t boundary ) : rule( rule::forward_accel | rule::backwards_accel, 0 ), mask( boundary - 1 ) {}

		// Implement the interface.
		//
		int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward = true ) override
		{
			uint32_t rva_i = forward ? rva_0 : rva_1;
			return ( rva_i & mask ) ? -1 : 0;
		}
		search_result accelerated_search( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward ) override
		{
			if ( forward )
			{
				uint32_t next = ( rva_0 + mask ) & ~mask;
				if ( ( next - rva_0 ) < rva_1 )
					return { next, 0 };
			}
			else
			{
				uint32_t prev = rva_1 & ~mask;
				if ( prev >= rva_0 )
					return { prev, 0 };
			}
			return {};
		}
		std::string to_string() const override {
			return xstd::fmt::str( "Aligned{0x%x}", mask+1 );
		}
	};
	// Reference filter.
	//
	struct refs_rva final : rule
	{
		// Constructed by the target RVA.
		//
		uint32_t rva;
		refs_rva( uint32_t rva ) : rule( 0, 0 ), rva( rva ) {}

		// Implement the interface.
		//
		int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward = true ) override
		{
			uint32_t rva_i = forward ? rva_0 : rva_1;
			int32_t rel = ( int32_t ) rva - ( int32_t ) rva_i;

			if ( rva_i >= 6 ) {

				// op rel8
				//
				if ( *( int8_t* ) &img->data[ rva_i - 1 ] == rel ) {
					return 0;
				}
				// op rel32
				//
				if ( *( int32_t* ) &img->data[ rva_i - 4 ] == rel ) {
					return 0;
				}
				// op rel32 sfx
				//
				if ( *( int32_t* ) &img->data[ rva_i - 5 ] == rel ) {
					return 0;
				}
			}
			return -1;
		}
		std::string to_string() const override {
			return xstd::fmt::str( "Refs{0x%x}", rva );
		}
	};
	struct refs_pattern final : rule
	{
		// Constructed by the target RVA.
		//
		std::shared_ptr<rule> other_rule;
		refs_pattern( std::shared_ptr<rule> r ) : rule( 0, 0 ), other_rule( std::move( r ) ) {}

		// Implement the interface.
		//
		int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward = true ) override
		{
			uint32_t rva_i = forward ? rva_0 : rva_1;
			auto rel = scn->find_prev( img, rva_i, 1 );
			if ( rel ) {
				auto ins = scn->decode( img, *rel );
				if ( ins ) {
					*rel += ins->length() + ( ins->has_relbr() ? ins->relbr_value() : ins->mem_disp_value( 0 ) );
				} else {
					rel.reset();
				}
			}
			if ( !rel ) return -1;

			auto scn_2 = img->get_section( *rel );
			if ( scn_2 ) {
				if ( other_rule->match( img, scn_2, *rel, scn_2->rva_limit ) >= 0 ) {
					return 0;
				}
			}

			return -1;
		}
		std::string to_string() const override {
			return xstd::fmt::str( "Refs{%s}", other_rule->to_string() );
		}
	};
};