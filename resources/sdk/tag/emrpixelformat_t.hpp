#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "pixelformatdescriptor_t.hpp"

#include "magic/emrpixelformat_t.start.hpp"
namespace tag
{
    // [struct tagEMRPIXELFORMAT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrpixelformat_t                          
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                                           
        _m00 struct tag::emr_t                   emr;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct tag::pixelformatdescriptor_t pfd;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .pfd
                                                     
        SDK_NONVOL_PROPERTIES( "tagEMRPIXELFORMAT.$", 0x30, true, 0xd24820d80236bb8d );    
        SDK_FIXED_SIZE( emrpixelformat_t, 0x30 );    
    };                                               
};
#include "magic/emrpixelformat_t.end.hpp"
SDK_VERIFY( struct tag::emrpixelformat_t, 0x30 );
