#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loader_feature_configuration_diagnostic_information_t.start.hpp"
namespace nt
{
    // [struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION]
    // => Windows 11, Windows 10 v20H2
    //
    struct loader_feature_configuration_diagnostic_information_t                                 
    {                                                                                            
        union u0_flags_t                                                                         
        {                                                                                        
            // Windows 11, Windows 10 v20H2                                                                       
            //                                                                                   
            _m03 uint32_t all_flags;                                                               //{ +0x0000    +0x0000    } | .AllFlags
            _m04 uint1_t  lkg_supported;                                                           //{ +0x0000@0  +0x0000@0  } | .LkgSupported
            _m05 uint1_t  final_boot_before_recovery;                                              //{ +0x0000@1  +0x0000@1  } | .FinalBootBeforeRecovery
            _m06 uint1_t  configuration_comparison_attempted;                                      //{ +0x0000@2  +0x0000@2  } | .ConfigurationComparisonAttempted
            _m07 uint1_t  current_configuration_load_attempted;                                    //{ +0x0000@3  +0x0000@3  } | .CurrentConfigurationLoadAttempted
            _m08 uint1_t  lkg_configuration_load_attempted;                                        //{ +0x0000@4  +0x0000@4  } | .LkgConfigurationLoadAttempted
            _m09 uint1_t  usage_subscription_load_attempted;                                       //{ +0x0000@5  +0x0000@5  } | .UsageSubscriptionLoadAttempted
                                                                                                 
            SDK_MAGIC_PROPERTIES( "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.Flags.$", 0x4, true, 0xb63df834ccdd56ef );                                                                       
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                                       
        };                                                                                       
                                                                                                 
        // Windows 11, Windows 10 v20H2                                                          
        //                                                                                       
        _m00 uint8_t                                           original_boot_status;               //{ +0x0000    +0x0000    } | .OriginalBootStatus
        _m01 uint8_t                                           new_boot_status;                    //{ +0x0001    +0x0001    } | .NewBootStatus
        _m02 uint8_t                                           configuration_loaded;               //{ +0x0002    +0x0002    } | .ConfigurationLoaded
        _m10 u0_flags_t                                        flags;                              //{ +0x0004    +0x0004    } | .Flags
        _m11 int32_t                                           configuration_comparison_status;    //{ +0x0008    +0x0008    } | .ConfigurationComparisonStatus
        _m12 int32_t                                           current_configuration_load_status;  //{ +0x000c    +0x000c    } | .CurrentConfigurationLoadStatus
        _m13 int32_t                                           lkg_configuration_load_status;      //{ +0x0010    +0x0010    } | .LkgConfigurationLoadStatus
        _m14 int32_t                                           usage_subscription_load_status;     //{ +0x0014    +0x0014    } | .UsageSubscriptionLoadStatus
                                                                                                 
        SDK_MAGIC_PROPERTIES( "_LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION.$", 0x18, true, 0x91d2fdefb93f3aad );                                  
        SDK_FIXED_SIZE( loader_feature_configuration_diagnostic_information_t, 0x18 );                                  
    };                                                                                           
};
#include "magic/loader_feature_configuration_diagnostic_information_t.end.hpp"
SDK_VERIFY( union nt::loader_feature_configuration_diagnostic_information_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct nt::loader_feature_configuration_diagnostic_information_t, 0x18 );
