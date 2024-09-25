#pragma once
#include <sdkgen/support_library.hpp>
#include "icexyztriple_t.hpp"

#include "magic/logcolorspacew_t.start.hpp"
namespace tag
{
    // [struct tagLOGCOLORSPACEW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct logcolorspacew_t                             
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 uint32_t                   lcs_signature;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lcsSignature
        _m01 uint32_t                   lcs_version;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .lcsVersion
        _m02 uint32_t                   lcs_size;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lcsSize
        _m03 int32_t                    lcs_cs_type;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lcsCSType
        _m04 int32_t                    lcs_intent;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lcsIntent
        _m05 struct tag::icexyztriple_t lcs_endpoints;    //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .lcsEndpoints
        _m06 uint32_t                   lcs_gamma_red;    //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .lcsGammaRed
        _m07 uint32_t                   lcs_gamma_green;  //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .lcsGammaGreen
        _m08 uint32_t                   lcs_gamma_blue;   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .lcsGammaBlue
        _m09 sdk::array<wchar_t, 260>   lcs_filename;     //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .lcsFilename
                                                        
        SDK_NONVOL_PROPERTIES( "tagLOGCOLORSPACEW.$", 0x24c, true, 0x97d98762906711e4 );                
        SDK_FIXED_SIZE( logcolorspacew_t, 0x24c );                
    };                                                  
};
#include "magic/logcolorspacew_t.end.hpp"
SDK_VERIFY( struct tag::logcolorspacew_t, 0x24c );
