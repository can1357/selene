#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/streams_associate_id_input_buffer_t.start.hpp"
namespace win
{
    // [struct _STREAMS_ASSOCIATE_ID_INPUT_BUFFER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct streams_associate_id_input_buffer_t
    {                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t flags;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t stream_id;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StreamId
                                              
        SDK_NONVOL_PROPERTIES( "_STREAMS_ASSOCIATE_ID_INPUT_BUFFER.$", 0x8, true, 0x67fdc45f732eefbf );          
        SDK_FIXED_SIZE( streams_associate_id_input_buffer_t, 0x8 );          
    };                                        
};
#include "magic/streams_associate_id_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::streams_associate_id_input_buffer_t, 0x8 );
