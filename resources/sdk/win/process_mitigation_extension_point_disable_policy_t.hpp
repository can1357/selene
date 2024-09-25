#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_extension_point_disable_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_extension_point_disable_policy_t
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t flags;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  disable_extension_points;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DisableExtensionPoints
                                                              
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY.$", 0x4, true, 0xa074969aa44af518 );                         
        SDK_FIXED_SIZE( process_mitigation_extension_point_disable_policy_t, 0x4 );                         
    };                                                        
};
#include "magic/process_mitigation_extension_point_disable_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_extension_point_disable_policy_t, 0x4 );
