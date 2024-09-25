#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_aslr_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_ASLR_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_aslr_policy_t          
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t flags;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  enable_bottom_up_randomization;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .EnableBottomUpRandomization
        _m02 uint1_t  enable_force_relocate_images;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .EnableForceRelocateImages
        _m03 uint1_t  enable_high_entropy;             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .EnableHighEntropy
        _m04 uint1_t  disallow_stripped_images;        //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DisallowStrippedImages
                                                     
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_ASLR_POLICY.$", 0x4, true, 0x45969289e38bd2e4 );                               
        SDK_FIXED_SIZE( process_mitigation_aslr_policy_t, 0x4 );                               
    };                                               
};
#include "magic/process_mitigation_aslr_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_aslr_policy_t, 0x4 );
