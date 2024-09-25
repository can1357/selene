#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bitmapcoreheader_t.start.hpp"
namespace tag
{
    // [struct tagBITMAPCOREHEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bitmapcoreheader_t      
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t bc_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .bcSize
        _m01 uint16_t bc_width;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .bcWidth
        _m02 uint16_t bc_height;     //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .bcHeight
        _m03 uint16_t bc_planes;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .bcPlanes
        _m04 uint16_t bc_bit_count;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .bcBitCount
                                   
        SDK_NONVOL_PROPERTIES( "tagBITMAPCOREHEADER.$", 0xc, true, 0xafe089e97a52234 );             
        SDK_FIXED_SIZE( bitmapcoreheader_t, 0xc );             
    };                             
};
#include "magic/bitmapcoreheader_t.end.hpp"
SDK_VERIFY( struct tag::bitmapcoreheader_t, 0xc );
