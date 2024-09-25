#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refs_stream_snapshot_query_deltas_input_buffer_t.start.hpp"
namespace win
{
    // [struct _REFS_STREAM_SNAPSHOT_QUERY_DELTAS_INPUT_BUFFER]
    // => Windows 11
    //
    struct refs_stream_snapshot_query_deltas_input_buffer_t
    {                                                      
        // Windows 11              
        //                         
        _m00 int64_t  starting_vcn;                          //{ +0x0000    } | .StartingVcn
        _m01 uint32_t flags;                                 //{ +0x0008    } | .Flags
                                                           
        SDK_MAGIC_PROPERTIES( "_REFS_STREAM_SNAPSHOT_QUERY_DELTAS_INPUT_BUFFER.$", 0x0, false, 0x4b5f3d466c55df1e );             
        SDK_FIXED_SIZE( refs_stream_snapshot_query_deltas_input_buffer_t, 0x10 );             
    };                                                     
};
#include "magic/refs_stream_snapshot_query_deltas_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::refs_stream_snapshot_query_deltas_input_buffer_t, 0x10 );
