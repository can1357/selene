#pragma once
#include <sdkgen/support_library.hpp>
#include "refs_stream_extent_t.hpp"

#include "magic/refs_stream_snapshot_query_deltas_output_buffer_t.start.hpp"
namespace win
{
    // [struct _REFS_STREAM_SNAPSHOT_QUERY_DELTAS_OUTPUT_BUFFER]
    // => Windows 11
    //
    struct refs_stream_snapshot_query_deltas_output_buffer_t              
    {                                                                     
        // Windows 11                                                     
        //                                                                
        _m00 uint32_t                                        extent_count;  //{ +0x0000    } | .ExtentCount
        _m01 sdk::array<struct win::refs_stream_extent_t, 1> extents;       //{ +0x0010    } | .Extents
                                                                          
        SDK_MAGIC_PROPERTIES( "_REFS_STREAM_SNAPSHOT_QUERY_DELTAS_OUTPUT_BUFFER.$", 0x0, false, 0xf75528bb133d04d2 );             
        SDK_FIXED_SIZE( refs_stream_snapshot_query_deltas_output_buffer_t, 0x30 );             
    };                                                                    
};
#include "magic/refs_stream_snapshot_query_deltas_output_buffer_t.end.hpp"
SDK_VERIFY( struct win::refs_stream_snapshot_query_deltas_output_buffer_t, 0x30 );
