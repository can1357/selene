#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bitmapfileheader_t.start.hpp"
namespace tag
{
    // [struct tagBITMAPFILEHEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bitmapfileheader_t      
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t bf_type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .bfType
        _m01 uint32_t bf_size;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .bfSize
        _m02 uint16_t bf_reserved1;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .bfReserved1
        _m03 uint16_t bf_reserved2;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .bfReserved2
        _m04 uint32_t bf_off_bits;   //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .bfOffBits
                                   
        SDK_NONVOL_PROPERTIES( "tagBITMAPFILEHEADER.$", 0xe, true, 0x56dcdc27a7a0e0af );             
        SDK_FIXED_SIZE( bitmapfileheader_t, 0xe );             
    };                             
};
#include "magic/bitmapfileheader_t.end.hpp"
SDK_VERIFY( struct tag::bitmapfileheader_t, 0xe );
