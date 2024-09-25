#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_dep_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_DEP_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_dep_policy_t        
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t flags;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  enable;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Enable
        _m02 uint1_t  disable_atl_thunk_emulation;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DisableAtlThunkEmulation
        _m03 uint8_t  permanent;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Permanent
                                                  
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_DEP_POLICY.$", 0x8, true, 0x7c435557436402d7 );                            
        SDK_FIXED_SIZE( process_mitigation_dep_policy_t, 0x8 );                            
    };                                            
};
#include "magic/process_mitigation_dep_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_dep_policy_t, 0x8 );
