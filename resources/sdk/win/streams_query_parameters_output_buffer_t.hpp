#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/streams_query_parameters_output_buffer_t.start.hpp"
namespace win
{
    // [struct _STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct streams_query_parameters_output_buffer_t
    {                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t optimal_write_size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OptimalWriteSize
        _m01 uint32_t stream_granularity_size;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StreamGranularitySize
        _m02 uint32_t stream_id_min;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StreamIdMin
        _m03 uint32_t stream_id_max;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .StreamIdMax
                                                   
        SDK_NONVOL_PROPERTIES( "_STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER.$", 0x10, true, 0x8c7e0a20cc5cc111 );                        
        SDK_FIXED_SIZE( streams_query_parameters_output_buffer_t, 0x10 );                        
    };                                             
};
#include "magic/streams_query_parameters_output_buffer_t.end.hpp"
SDK_VERIFY( struct win::streams_query_parameters_output_buffer_t, 0x10 );
