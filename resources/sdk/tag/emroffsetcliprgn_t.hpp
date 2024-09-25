#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emroffsetcliprgn_t.start.hpp"
namespace tag
{
    // [struct tagEMROFFSETCLIPRGN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emroffsetcliprgn_t                
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                   
        _m00 struct tag::emr_t    emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::pointl_t ptl_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ptlOffset
                                             
        SDK_NONVOL_PROPERTIES( "tagEMROFFSETCLIPRGN.$", 0x10, true, 0x29a43500d7b2a3e0 );           
        SDK_FIXED_SIZE( emroffsetcliprgn_t, 0x10 );           
    };                                       
};
#include "magic/emroffsetcliprgn_t.end.hpp"
SDK_VERIFY( struct tag::emroffsetcliprgn_t, 0x10 );
