#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xpf_mce_flags_t.start.hpp"
namespace nt
{
    // [union _XPF_MCE_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union xpf_mce_flags_t                   
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint1_t  mcg_capability_rw;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MCG_CapabilityRW
        _m01 uint1_t  mcg_global_control_rw;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .MCG_GlobalControlRW
        _m02 uint32_t as_ulong;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                            
        SDK_NONVOL_PROPERTIES( "_XPF_MCE_FLAGS.$", 0x4, true, 0x796ad18dbc66176a );                      
        SDK_FIXED_SIZE( xpf_mce_flags_t, 0x4 );                      
    };                                      
};
#include "magic/xpf_mce_flags_t.end.hpp"
SDK_VERIFY( union nt::xpf_mce_flags_t, 0x4 );
