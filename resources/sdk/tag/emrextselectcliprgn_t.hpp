#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrextselectcliprgn_t.start.hpp"
namespace tag
{
    // [struct tagEMREXTSELECTCLIPRGN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrextselectcliprgn_t                
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 struct tag::emr_t      emr;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t               cb_rgn_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .cbRgnData
        _m02 uint32_t               i_mode;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .iMode
        _m03 sdk::array<uint8_t, 1> rgn_data;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RgnData
                                                
        SDK_NONVOL_PROPERTIES( "tagEMREXTSELECTCLIPRGN.$", 0x14, true, 0xb361ede0544f47c0 );            
        SDK_FIXED_SIZE( emrextselectcliprgn_t, 0x14 );            
    };                                          
};
#include "magic/emrextselectcliprgn_t.end.hpp"
SDK_VERIFY( struct tag::emrextselectcliprgn_t, 0x14 );
