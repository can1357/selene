#pragma once
#include <stdint.h>
#include <iterator>
#include <xstd/narrow_cast.hpp>
#include <xstd/bitwise.hpp>
#include <vector>
#include <array>

// Declares multi stream file format used to store PDBs internally by Microsoft.
//
namespace msf
{
	// Define integer aliases used by these types.
	//
    using page_number_t =     uint16_t; // Randomly used instead of universal
    using stream_number_t =   uint16_t; // great design.
    
    using u_page_number_t =   uint32_t; // Universal
    using u_stream_number_t = uint32_t;

    using byte_size_t =       int32_t;
    using offset_t =          int32_t;

    // Basic paging constants.
    //
    static constexpr u_page_number_t nil_page =  0xFFFFFFFF;
    static constexpr page_number_t   lnil_page = 0xFFFF;

    // Defines the modern MSF header, BIGMSF_HDR.
    //
	struct header_v7
	{
        // Declare the magic identifier.
        //
        using magic_t = std::array<char, 0x20>;
        static constexpr magic_t static_magic_value = { "Microsoft C/C++ MSF 7.00\r\n\x1a\x44\x53" };
        
        magic_t magic_value;                  // Magic value

        byte_size_t page_size;                // Size of a page entry, [512-4096]?
        u_page_number_t page_fpm;             // Page # of valid free page map.
        u_page_number_t num_pages;            // Number of pages in the stream.
                                              
        byte_size_t stream_table_length;      // Size of the stream table.
        uint32_t __always_zero;               // <pad for SI::mpspnpn>
        uint32_t stream_table_mapping_page;   // Page that contains a mapping of the stream table.
	};

    // Should be used to convert a span of raw data to be parsed as a MSF stream.
    //
    struct stream
    {
        // Defines a substream that can be read easily with paging handled underneath.
        //
        struct substream
        {
            // Reference to the stream itself.
            //
            const stream* source = nullptr;

            // A static span of pages referencing the stream table entry.
            //
            const u_page_number_t* page_begin = nullptr;
            const u_page_number_t* page_limit = nullptr;

            // Bytes left in the stream.
            //
            int64_t bytes_left = 0;

            // Current offset into the stream.
            //
            size_t offset = 0;

            // Index of the stream.
            //
            size_t index = 0;

            // Reads the data from the current offset but does not change the current offset.
            //
            void read( void* out, size_t byte_count, int32_t soffset = 0 ) const;

            // Skips the number of given bytes.
            //
            void skip( int64_t byte_count );

            // Reads the data and continues onto the next offset.
            //
            void consume( void* out, size_t byte_count )
            {
                // Invoke read to fetch the data.
                //
                read( out, byte_count );
                skip( byte_count );
            }

            // Templated / overloading helpers.
            //
            template<typename T> T read( int32_t off = 0 ) const { T v; read( &v, sizeof( T ), off ); return v; }
            template<typename T> T consume() { T v; consume( &v, sizeof( T ) ); return v; }
        };

        // Pointer marking the beginning of the stream.
        //
        const uint8_t* data;

        // Raw size of the whole stream in bytes.
        //
        size_t size;

        // Holds the number of streams.
        //
        size_t num_streams = 0;

        // Holds the size of each stream.
        //
        std::vector<byte_size_t> stream_sizes;
        
        // Holds the page table spans of each stream.
        //
        std::vector<std::vector<u_page_number_t>> stream_spans;

        // Path of the file.
        //
        std::filesystem::path path;

        // Default null construction, copy/move.
        //
        stream() : data( nullptr ), size( 0 ) {}
        stream( stream&& ) noexcept = default;
        stream( const stream& ) = default;
        stream& operator=( stream&& ) noexcept = default;
        stream& operator=( const stream& ) = default;

        // Constructs and provides basic parsing for an MSF stream to be used with common wrappers.
        //
        stream( const void* data, size_t size, const std::filesystem::path& path = {} );

        // Basic properties.
        //
        const header_v7* get_header() const
        {
            return size >= sizeof( header_v7 ) ? ( const header_v7* ) data : nullptr;
        }
        bool is_valid() const
        {
            return data != nullptr && stream_sizes.size();
        }

        // Converts a size measurement from bytes to # of pages.
        //
        size_t to_page_count( size_t byte_count ) const
        {
            return xstd::align_up( byte_count, get_header()->page_size ) / get_header()->page_size;
        }

        // Gets the stream table as described in the MSF headers.
        //
        substream get_stream_table() const;

        // Gets the Nth stream in the MSF file.
        //
        template<typename T = substream>
        T get_stream( size_t n ) const
        {
            // Get the stream information and return a matching substream.
            //
            if ( n >= num_streams ) return substream{ .index = 0xDDDDDDDD };

            auto size =  stream_sizes[ n ];
            auto& span = stream_spans[ n ];
            return substream{
                .source =      this,
                .page_begin =  span.data(),
                .page_limit =  span.data() + span.size(),
                .bytes_left =  size,
                .index =       n,
            };
        }
    };

    // Define the iterator types, default value can be used as ::end().
    //
    template<typename T>
    struct iterator
    {
        // Generic iterator typedefs.
        //
        using iterator_category = std::bidirectional_iterator_tag;
        using difference_type =   ptrdiff_t;
        using value_type =        T;
        using reference =         T;
        using pointer =           void*;

        // Holds the substream, constructed by it as well.
        //
        stream::substream ss = {};
        iterator( stream::substream ss = {} ) : ss( std::move( ss ) ) {}

        // Support bidirectional iteration.
        //
        iterator& operator++() { ss.skip( sizeof( T ) ); return *this; }
        iterator& operator--() { ss.skip( -sizeof( T ) ); return *this; }
        iterator operator++( int ) { auto s = *this; operator++(); return s; }
        iterator operator--( int ) { auto s = *this; operator--(); return s; }

        // Equality check against another iterator.
        //
        constexpr bool operator==( const iterator& other ) const 
        { 
            if ( other.ss.source )
            {
                return
                    ss.source == other.ss.source &&
                    ss.page_begin == other.ss.page_begin &&
                    ss.offset == other.ss.offset;
            }
            else
            {
                return !ss.source || !ss.bytes_left;
            }
        }
        constexpr bool operator!=( const iterator& other ) const { return !operator==( other ); }

        // Redirect dereferencing to peeking.
        //
        constexpr value_type operator*() const { return ss.read<value_type>(); }
    };

    // Implement actual logic for reading.
    //
    inline stream::stream( const void* data, size_t size, const std::filesystem::path& path ) : data( ( const uint8_t* ) data ), size( size ), path( path )
    {
        // Basic validation.
        //
        auto hdr = get_header();
        if ( !hdr || hdr->magic_value != header_v7::static_magic_value || size < hdr->num_pages * hdr->page_size )
        {
            if ( hdr )
            {
                xstd::warning( "Corrupt MSF detected!\n" );
                xstd::warning( " - File:     %s\n", path );
                xstd::warning( " - Magic:    %s\n", hdr->magic_value );
                xstd::warning( " - Sizes:    0x%llx (Expected 0x%llx)\n", size, hdr->num_pages * hdr->page_size );
					 xstd::throw_fmt( "Corrupt MSF detected!" );
				}
            data = nullptr;
            size = 0;
            return;
        }
    
        // Get the stream table and set the number of streams.
        //
        substream stream_table = get_stream_table();
        num_streams = stream_table.consume<u_stream_number_t>();
        stream_sizes.resize( num_streams );
        stream_spans.reserve( num_streams );
        
        // Declare the size of each stream.
        //
        for ( msf::byte_size_t& n : stream_sizes )
        {
            n = stream_table.consume<byte_size_t>();
            if ( n == nil_page ) n = 0;
        }
    
        // Declare the stream page spans.
        //
        for ( size_t n = 0; n != num_streams; n++ )
        {
            // Emplace the empty span entry, if size is invalid skip.
            //
            auto& pages = stream_spans.emplace_back();
            auto size = stream_sizes[ n ];
            if ( size <= 0 ) continue;
    
            // Consume page entries until the stream end is reached.
            //
            size_t num_pages = to_page_count( size );
            while ( num_pages != 0 )
            {
                pages.emplace_back( stream_table.consume<msf::u_page_number_t>() );
                num_pages--;
            }
        }
    
        // Make sure we've consumed everything.
        //
        xstd::assert_that( !stream_table.bytes_left, "Stream table cannot have extra entries left over." );
    }
    inline void stream::substream::read( void* out, size_t byte_count, int32_t soffset ) const
    {
        uint8_t* result = ( uint8_t* ) out;

        // Make sure we are not reading out of the boundaries.
        //
        xstd::assert_that( source, "Reading from a null substream." );
        xstd::assert_that( xstd::narrow_cast<size_t>( bytes_left ) >= byte_count, "Reading beyond the substream limits [%s:%llx].", source->path, index );

        // Adjust the page.
        //
        const size_t page_size = source->get_header()->page_size;
        auto page_it = page_begin;
        size_t page_offset = soffset + offset;
        if ( size_t pn = page_offset / page_size )
        {
            page_offset -= pn * page_size;
            page_it += pn;
        }

        // Read by parts until we're done.
        //
        for ( ; byte_count; page_it++ )
        {
            // Assert that we have the pages needed.
            //
            xstd::assert_that( page_it < page_limit, "Reading beyond the page limits [%s:%llx].", source->path, index );
            xstd::assert_that( 0 <= page_offset && page_offset < page_size, "Invalid page position [%s:%llx].", source->path, index );

            // Read the maximum amount we can from this entry and skip to next.
            //
            if ( size_t r = std::min( page_size - page_offset, byte_count ) )
            {
                memcpy( result, &source->data[ page_offset + page_size * *page_it ], r );
                byte_count -= r;
                page_offset += r - page_size;
                result += r;
            }
        }
    }
    inline void stream::substream::skip( int64_t byte_count )
    {
        if ( byte_count >= 0 )
        {
            xstd::assert_that( source && bytes_left >= byte_count, "Skipping beyond the substream limits [%s:%llx].", source->path, index );
            bytes_left -= byte_count;
            offset += byte_count;
        }
        else
        {
            xstd::assert_that( source && offset >= xstd::narrow_cast<size_t>( -byte_count ), "Skipping beyond the substream beginning [%s:%llx].", source->path, index );
            bytes_left += byte_count;
            offset -= byte_count;
        }
    }
    inline stream::substream stream::get_stream_table() const
    {
        // Calculate the number of pages the stream table will be using.
        //
        size_t stream_table_page_count = to_page_count( get_header()->stream_table_length );
        xstd::assert_that( stream_table_page_count < ( get_header()->page_size / 4 ), "Stream table is too large." );
        xstd::assert_that( size > ( get_header()->stream_table_mapping_page * get_header()->page_size ), "Stream table is too large." );

        // Get the address of the special page and describe a substream over it.
        //
        const u_page_number_t* mappings = ( const u_page_number_t* ) &data[ get_header()->stream_table_mapping_page * get_header()->page_size ];
        return {
            .source = this,
            .page_begin = mappings,
            .page_limit = mappings + stream_table_page_count,
            .bytes_left = get_header()->stream_table_length,
            .index = 0xEEEEEEEE
        };
    }
};