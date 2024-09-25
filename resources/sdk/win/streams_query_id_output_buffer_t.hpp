#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/streams_query_id_output_buffer_t.start.hpp"
namespace win
{
    // [struct _STREAMS_QUERY_ID_OUTPUT_BUFFER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct streams_query_id_output_buffer_t
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t stream_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamId
                                           
        SDK_NONVOL_PROPERTIES( "_STREAMS_QUERY_ID_OUTPUT_BUFFER.$", 0x4, true, 0x71a9278dfcb958f5 );          
        SDK_FIXED_SIZE( streams_query_id_output_buffer_t, 0x4 );          
    };                                     
};
#include "magic/streams_query_id_output_buffer_t.end.hpp"
SDK_VERIFY( struct win::streams_query_id_output_buffer_t, 0x4 );
