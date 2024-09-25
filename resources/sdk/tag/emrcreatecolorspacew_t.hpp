#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "logcolorspacew_t.hpp"

#include "magic/emrcreatecolorspacew_t.start.hpp"
namespace tag
{
    // [struct tagEMRCREATECOLORSPACEW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrcreatecolorspacew_t                  
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct tag::emr_t            emr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t                     ih_cs;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihCS
        _m02 struct tag::logcolorspacew_t lcs;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lcs
        _m03 uint32_t                     dw_flags;  //{ +0x0258    +0x0258    +0x0258    +0x0258    +0x0258    } | .dwFlags
        _m04 uint32_t                     cb_data;   //{ +0x025c    +0x025c    +0x025c    +0x025c    +0x025c    } | .cbData
        _m05 sdk::array<uint8_t, 1>       data;      //{ +0x0260    +0x0260    +0x0260    +0x0260    +0x0260    } | .Data
                                                   
        SDK_NONVOL_PROPERTIES( "tagEMRCREATECOLORSPACEW.$", 0x264, true, 0xaa7dca9bab897c7f );         
        SDK_FIXED_SIZE( emrcreatecolorspacew_t, 0x264 );         
    };                                             
};
#include "magic/emrcreatecolorspacew_t.end.hpp"
SDK_VERIFY( struct tag::emrcreatecolorspacew_t, 0x264 );
