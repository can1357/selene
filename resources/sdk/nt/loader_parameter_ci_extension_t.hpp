#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loader_parameter_ci_extension_t.start.hpp"
namespace nt
{
    // [struct _LOADER_PARAMETER_CI_EXTENSION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct loader_parameter_ci_extension_t                                     
    {                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                     
        _m00 uint32_t               code_integrity_options;                      //{ +0x0000    +0x0000    +0x0000    } | .CodeIntegrityOptions
        _m01 uint1_t                upgrade_in_progress;                         //{ +0x0004@0  +0x0004@0  +0x0004@0  } | .UpgradeInProgress
        _m02 uint1_t                is_win_pe;                                   //{ +0x0004@1  +0x0004@1  +0x0004@1  } | .IsWinPE
        _m03 uint1_t                custom_kernel_signers_allowed;               //{ +0x0004@2  +0x0004@2  +0x0004@2  } | .CustomKernelSignersAllowed
        _m04 uint1_t                state_separation_enabled;                    //{ +0x0004@3  +0x0004@3  +0x0004@3  } | .StateSeparationEnabled
        _m05 int64_t                whql_enforcement_date;                       //{ +0x0008    +0x0008    +0x0008    } | .WhqlEnforcementDate
        _m06 uint32_t               revocation_list_offset;                      //{ +0x0010    +0x0010    +0x0010    } | .RevocationListOffset
        _m07 uint32_t               revocation_list_size;                        //{ +0x0014    +0x0014    +0x0014    } | .RevocationListSize
        _m08 uint32_t               code_integrity_policy_offset;                //{ +0x0018    +0x0018    +0x0018    } | .CodeIntegrityPolicyOffset
        _m09 uint32_t               code_integrity_policy_size;                  //{ +0x001c    +0x001c    +0x001c    } | .CodeIntegrityPolicySize
        _m10 uint32_t               code_integrity_policy_hash_offset;           //{ +0x0020    +0x0020    +0x0020    } | .CodeIntegrityPolicyHashOffset
        _m11 uint32_t               code_integrity_policy_hash_size;             //{ +0x0024    +0x0024    +0x0024    } | .CodeIntegrityPolicyHashSize
        _m12 uint32_t               code_integrity_policy_original_hash_offset;  //{ +0x0028    +0x0028    +0x0028    } | .CodeIntegrityPolicyOriginalHashOffset
        _m13 uint32_t               code_integrity_policy_original_hash_size;    //{ +0x002c    +0x002c    +0x002c    } | .CodeIntegrityPolicyOriginalHashSize
        _m14 int32_t                weak_crypto_policy_load_status;              //{ +0x0030    +0x0030    +0x0030    } | .WeakCryptoPolicyLoadStatus
        _m15 uint32_t               weak_crypto_policy_offset;                   //{ +0x0034    +0x0034    +0x0034    } | .WeakCryptoPolicyOffset
        _m16 uint32_t               weak_crypto_policy_size;                     //{ +0x0038    +0x0038    +0x0038    } | .WeakCryptoPolicySize
        _m17 uint32_t               secure_boot_policy_offset;                   //{ +0x003c    +0x003c    +0x003c    } | .SecureBootPolicyOffset
        _m18 uint32_t               secure_boot_policy_size;                     //{ +0x0040    +0x0040    +0x0040    } | .SecureBootPolicySize
        _m19 sdk::array<uint8_t, 1> serialized_data;                             //{ +0x0048    +0x0048    +0x0048    } | .SerializedData
                                                                               
        SDK_MAGIC_PROPERTIES( "_LOADER_PARAMETER_CI_EXTENSION.$", 0x50, true, 0x4d87afc2c0dbac3c );                                           
        SDK_FIXED_SIZE( loader_parameter_ci_extension_t, 0x50 );                                           
    };                                                                         
};
#include "magic/loader_parameter_ci_extension_t.end.hpp"
SDK_VERIFY( struct nt::loader_parameter_ci_extension_t, 0x50 );
