#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miracast_chunk_id_t.start.hpp"
namespace dxgk
{
    // [union DXGK_MIRACAST_CHUNK_ID]
    // => WDK 10 (NV)
    //
    union miracast_chunk_id_t      
    {                              
        // WDK 10                  
        //                         
        _m00 uint40_t frame_number;  //{ +0x0000@0  } | .FrameNumber
        _m01 uint24_t part_number;   //{ +0x0000@40 } | .PartNumber
        _m02 uint64_t value;         //{ +0x0000    } | .Value
                                   
        SDK_NONVOL_PROPERTIES( "DXGK_MIRACAST_CHUNK_ID.$", 0x0, false, 0x9d0fc95b85263c88 );             
        SDK_FIXED_SIZE( miracast_chunk_id_t, 0x8 );             
    };                             
};
#include "magic/miracast_chunk_id_t.end.hpp"
SDK_VERIFY( union dxgk::miracast_chunk_id_t, 0x8 );
