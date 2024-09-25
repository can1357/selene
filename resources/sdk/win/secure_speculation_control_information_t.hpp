#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/secure_speculation_control_information_t.start.hpp"
namespace win
{
    // [struct _SECURE_SPECULATION_CONTROL_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct secure_speculation_control_information_t                      
    {                                                                    
        struct u0_secure_speculation_flags_t                             
        {                                                                
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                           
            _m00 uint1_t kva_shadow_supported;                             //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .KvaShadowSupported
            _m01 uint1_t kva_shadow_enabled;                               //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .KvaShadowEnabled
            _m02 uint1_t kva_shadow_user_global;                           //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .KvaShadowUserGlobal
            _m03 uint1_t kva_shadow_pcid;                                  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .KvaShadowPcid
            _m04 uint1_t mb_clear_enabled;                                 //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .MbClearEnabled
                                                                         
            // Windows 11                                                
            //                                                           
            _m05 uint1_t l1tf_mitigated;                                   //{ +0x0000@5  } | .L1TFMitigated
            _m06 uint1_t bpb_enabled;                                      //{ +0x0000@6  } | .BpbEnabled
            _m07 uint1_t ibrs_present;                                     //{ +0x0000@7  } | .IbrsPresent
            _m08 uint1_t enhanced_ibrs;                                    //{ +0x0000@8  } | .EnhancedIbrs
            _m09 uint1_t stibp_present;                                    //{ +0x0000@9  } | .StibpPresent
            _m10 uint1_t ssbd_supported;                                   //{ +0x0000@10 } | .SsbdSupported
            _m11 uint1_t ssbd_required;                                    //{ +0x0000@11 } | .SsbdRequired
            _m12 uint1_t bpb_kernel_to_user;                               //{ +0x0000@12 } | .BpbKernelToUser
            _m13 uint1_t bpb_user_to_kernel;                               //{ +0x0000@13 } | .BpbUserToKernel
                                                                         
            SDK_MAGIC_PROPERTIES( "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.$", 0x4, true, 0xa2d8179b56a903c3 );                                                
            SDK_FIXED_SIZE( u0_secure_speculation_flags_t, 0x4 );                                                
        };                                                               
                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                               
        _m14 u0_secure_speculation_flags_t      secure_speculation_flags;  //{ +0x0000    +0x0000    +0x0000    } | .SecureSpeculationFlags
                                                                         
        SDK_MAGIC_PROPERTIES( "_SECURE_SPECULATION_CONTROL_INFORMATION.$", 0x4, true, 0x53eae79f16199516 );                         
        SDK_FIXED_SIZE( secure_speculation_control_information_t, 0x4 );                         
    };                                                                   
};
#include "magic/secure_speculation_control_information_t.end.hpp"
SDK_VERIFY( struct win::secure_speculation_control_information_t::u0_secure_speculation_flags_t, 0x4 );
SDK_VERIFY( struct win::secure_speculation_control_information_t, 0x4 );
