#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrarc_t.start.hpp"
namespace tag
{
    // [struct tagEMRARC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrarc_t                         
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                  
        _m00 struct tag::emr_t    emr;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t  rcl_box;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBox
        _m02 struct win::pointl_t ptl_start;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ptlStart
        _m03 struct win::pointl_t ptl_end;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ptlEnd
                                            
        SDK_NONVOL_PROPERTIES( "tagEMRARC.$", 0x28, true, 0x19cd75c8b0d0265b );          
        SDK_FIXED_SIZE( emrarc_t, 0x28 );          
    };                                      
};
#include "magic/emrarc_t.end.hpp"
SDK_VERIFY( struct tag::emrarc_t, 0x28 );
