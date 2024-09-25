#pragma once
#include "common.hpp"

#define SYM_TBL_MAGIC      '\x0MYS'
#define SYM_TBL_SEG_I      ".symtbl"
#define SYM_TBL_SEG        SYM_TBL_SEG_I"$list"
#define SYM_TBL_SEG_BEGIN  SYM_TBL_SEG_I"$a"
#define SYM_TBL_SEG_END    SYM_TBL_SEG_I"$z"
#define SYM_TBL_DISCARD    ".symdsc"

// Symbol table details.
//
#pragma pack(push, 1)
namespace sdk
{
	// Offsets:
	// <TYPE>.<FIELD>
	// <TYPE>.$        => Properties
	//
	struct offset_entry
	{
		uint32_t bit_offset; // Reused as size for $.
		uint16_t bit_size;
		uint8_t  exists;

		// Small hack so that this can replace symbol_table_entry as is.
		//
		void get( offset_entry& out ) const { out = *this; }
		uint32_t get_bit_offset() const { return bit_offset; }
		bool get_exists() const { return exists != 0; }
	};
	
	// Publics:
	// $<NAME>$<HINT_IMG>
	//
	struct public_entry
	{
		uint64_t virtual_address;
		uint32_t offset;
		int32_t  sys_idx;
		uint8_t  exists;

		void get( public_entry& out ) const { out = *this; }
		uint64_t get_virtual_address() const { return virtual_address; }
		bool get_exists() const { return exists != 0; }
	};
	
	// Magic import types.
	//
	struct symbol_table_header
	{
		uint32_t magic = SYM_TBL_MAGIC;
		const volatile void* address;
		size_t encryption_key;
		char identifier[];
	};

	// Wrapper for the encryption.
	//
	FORCE_INLINE inline constexpr size_t magic_lcg_next( size_t p )
	{
		return 0x5851F42D4C957F2D * p + 0x14057B7EF767814F;
	}
	template<typename T>
	FORCE_INLINE inline constexpr T magic_encode_decode( T in_out, size_t key )
	{
		constexpr size_t size =  sizeof( T );
		constexpr size_t sizeq = ( sizeof( T ) + 7 ) / 8;
		if constexpr ( size == 1 ) {
			uint8_t value = std::bit_cast< uint8_t >( in_out ) ^ uint8_t( key );
			return std::bit_cast< T >( value );
		} else if constexpr ( size == 2 ) {
			uint16_t value = std::bit_cast< uint16_t >( in_out ) ^ uint16_t( key );
			return std::bit_cast< T >( value );
		} else if constexpr ( size == 4 ) {
			uint32_t value = std::bit_cast< uint32_t >( in_out ) ^ uint32_t( key );
			return std::bit_cast< T >( value );
		} else if constexpr ( size == 8 ) {
			uint64_t value = std::bit_cast< uint64_t >( in_out ) ^ uint64_t( key );
			return std::bit_cast< T >( value );
		} else {
			std::array<uint64_t, sizeq> qwords = { 0 };
			std::array<uint8_t, size> bytes = std::bit_cast< std::array<uint8_t, size> >( in_out );
			for ( size_t i = 0; i != size; i++ ) {
				qwords[ i >> 3 ] |= uint64_t( bytes[ i ] ) << ( ( i << 3 ) & 63 );
			}
			for ( uint64_t& q : qwords ) {
				q ^= key;
				key = magic_lcg_next( key );
			}
			for ( size_t i = 0; i != size; i++ ) {
				bytes[ i ] = uint8_t( qwords[ i >> 3 ] >> ( ( i << 3 ) & 63 ) );
			}
			return std::bit_cast< T >( bytes );
		}
	}
};
#pragma pack(pop)