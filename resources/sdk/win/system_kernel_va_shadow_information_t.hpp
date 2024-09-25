#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_kernel_va_shadow_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_KERNEL_VA_SHADOW_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_kernel_va_shadow_information_t                               
    {                                                                          
        struct u0_kva_shadow_flags_t                                           
        {                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
            //                                                                 
            _m00 uint1_t kva_shadow_enabled;                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .KvaShadowEnabled
            _m01 uint1_t kva_shadow_user_global;                                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .KvaShadowUserGlobal
            _m02 uint1_t kva_shadow_pcid;                                        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .KvaShadowPcid
            _m03 uint1_t kva_shadow_invpcid;                                     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .KvaShadowInvpcid
            _m04 uint1_t kva_shadow_required;                                    //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .KvaShadowRequired
            _m05 uint1_t kva_shadow_required_available;                          //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .KvaShadowRequiredAvailable
                                                                               
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
            //                                                                 
            _m06 uint6_t invalid_pte_bit;                                        //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .InvalidPteBit
            _m07 uint1_t l1_data_cache_flush_supported;                          //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .L1DataCacheFlushSupported
            _m08 uint1_t l1_terminal_fault_mitigation_present;                   //{ +0x0000@13 +0x0000@13 +0x0000@13 } | .L1TerminalFaultMitigationPresent
                                                                               
            SDK_MAGIC_PROPERTIES( "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.$", 0x4, true, 0x4b91352e55a7410b );                                                      
            SDK_FIXED_SIZE( u0_kva_shadow_flags_t, 0x4 );                                                      
        };                                                                     
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                     
        _m09 u0_kva_shadow_flags_t                            kva_shadow_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KvaShadowFlags
                                                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.$", 0x4, true, 0x90f023bb8c404dce );                 
        SDK_FIXED_SIZE( system_kernel_va_shadow_information_t, 0x4 );                 
    };                                                                         
};
#include "magic/system_kernel_va_shadow_information_t.end.hpp"
SDK_VERIFY( struct win::system_kernel_va_shadow_information_t::u0_kva_shadow_flags_t, 0x4 );
SDK_VERIFY( struct win::system_kernel_va_shadow_information_t, 0x4 );
