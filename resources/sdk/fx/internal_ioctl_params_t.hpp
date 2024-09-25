#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfmemory_t; }

#include "magic/internal_ioctl_params_t.start.hpp"
namespace fx
{
    // [struct _FxInternalIoctlParams]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct internal_ioctl_params_t              
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct wdf::wdfmemory_t* argument1;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Argument1
        _m01 struct wdf::wdfmemory_t* argument2;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Argument2
        _m02 struct wdf::wdfmemory_t* argument4;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Argument4
                                                
        SDK_MAGIC_PROPERTIES( "_FxInternalIoctlParams.$", 0x18, true, 0x99ef07e286f8fe5c );          
        SDK_FIXED_SIZE( internal_ioctl_params_t, 0x18 );          
    };                                          
};
#include "magic/internal_ioctl_params_t.end.hpp"
SDK_VERIFY( struct fx::internal_ioctl_params_t, 0x18 );
