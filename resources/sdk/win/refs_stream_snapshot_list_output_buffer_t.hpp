#pragma once
#include <sdkgen/support_library.hpp>
#include "refs_stream_snapshot_list_output_buffer_entry_t.hpp"

#include "magic/refs_stream_snapshot_list_output_buffer_t.start.hpp"
namespace win
{
    // [struct _REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER]
    // => Windows 11
    //
    struct refs_stream_snapshot_list_output_buffer_t   
    {                                                  
        using entries_t = sdk::array<struct win::refs_stream_snapshot_list_output_buffer_entry_t, 1>;                               
                                                       
        // Windows 11                                  
        //                                             
        _m00 uint32_t   entry_count;                     //{ +0x0000    } | .EntryCount
        _m01 uint32_t   buffer_size_required_for_query;  //{ +0x0004    } | .BufferSizeRequiredForQuery
        _m02 entries_t  entries;                         //{ +0x0010    } | .Entries
                                                       
        SDK_MAGIC_PROPERTIES( "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER.$", 0x0, false, 0xe7941011b33985c5 );                               
        SDK_FIXED_SIZE( refs_stream_snapshot_list_output_buffer_t, 0x48 );                               
    };                                                 
};
#include "magic/refs_stream_snapshot_list_output_buffer_t.end.hpp"
SDK_VERIFY( struct win::refs_stream_snapshot_list_output_buffer_t, 0x48 );
