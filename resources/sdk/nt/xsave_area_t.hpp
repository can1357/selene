#pragma once
#include <sdkgen/support_library.hpp>
#include "xsave_area_header_t.hpp"

#include "magic/xsave_area_t.start.hpp"
namespace nt
{
    // [struct _XSAVE_AREA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xsave_area_t                                  
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 nt::xsave_format               legacy_state;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LegacyState
        _m01 struct nt::xsave_area_header_t header;        //{ +0x0200    +0x0200    +0x0200    +0x0200    +0x0200    } | .Header
                                                         
        SDK_NONVOL_PROPERTIES( "_XSAVE_AREA.$", 0x240, true, 0x5b5b2d048108c9e3 );             
        SDK_FIXED_SIZE( xsave_area_t, 0x240 );             
    };                                                   
};
#include "magic/xsave_area_t.end.hpp"
SDK_VERIFY( struct nt::xsave_area_t, 0x240 );
