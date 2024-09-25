#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/emrformat_t.start.hpp"
namespace tag
{
    // [struct tagEMRFORMAT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrformat_t            
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t d_signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dSignature
        _m01 uint32_t n_version;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .nVersion
        _m02 uint32_t cb_data;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .cbData
        _m03 uint32_t off_data;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .offData
                                  
        SDK_NONVOL_PROPERTIES( "tagEMRFORMAT.$", 0x10, true, 0x192695f3492b7b32 );            
        SDK_FIXED_SIZE( emrformat_t, 0x10 );            
    };                            
};
#include "magic/emrformat_t.end.hpp"
SDK_VERIFY( struct tag::emrformat_t, 0x10 );
