#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/localesignature_t.start.hpp"
namespace tag
{
    // [struct tagLOCALESIGNATURE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct localesignature_t                          
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                            
        _m00 sdk::array<uint32_t, 4> ls_usb;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lsUsb
        _m01 sdk::array<uint32_t, 2> ls_csb_default;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lsCsbDefault
        _m02 sdk::array<uint32_t, 2> ls_csb_supported;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .lsCsbSupported
                                                      
        SDK_NONVOL_PROPERTIES( "tagLOCALESIGNATURE.$", 0x20, true, 0x4ac5322d3d5cb5c7 );                 
        SDK_FIXED_SIZE( localesignature_t, 0x20 );                 
    };                                                
};
#include "magic/localesignature_t.end.hpp"
SDK_VERIFY( struct tag::localesignature_t, 0x20 );
