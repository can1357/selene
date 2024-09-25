#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_xfg_failure_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_XFG_FAILURE_INFORMATION]
    // => Windows 11
    //
    struct system_xfg_failure_information_t
    {                                      
        // Windows 11                
        //                           
        _m00 void*    return_address;        //{ +0x0000    } | .ReturnAddress
        _m01 void*    target_address;        //{ +0x0008    } | .TargetAddress
        _m02 uint32_t dispatch_mode;         //{ +0x0010    } | .DispatchMode
        _m03 uint64_t xfg_value;             //{ +0x0018    } | .XfgValue
                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_XFG_FAILURE_INFORMATION.$", 0x0, false, 0x8b231f977798d88c );               
        SDK_FIXED_SIZE( system_xfg_failure_information_t, 0x20 );               
    };                                     
};
#include "magic/system_xfg_failure_information_t.end.hpp"
SDK_VERIFY( struct win::system_xfg_failure_information_t, 0x20 );
