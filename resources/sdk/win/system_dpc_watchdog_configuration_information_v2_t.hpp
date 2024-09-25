#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_dpc_watchdog_configuration_information_v2_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2]
    // => Windows 11
    //
    struct system_dpc_watchdog_configuration_information_v2_t                                         
    {                                                                                                 
        struct u0_flags_t                                                                             
        {                                                                                             
            // Windows 11                                                                             
            //                                                                                        
            _m02 uint8_t dummy;                                                                         //{ +0x0000@0  } | .Dummy
            _m03 uint1_t single_dpc_time_limit_present;                                                 //{ +0x0000@8  } | .SingleDpcTimeLimitPresent
            _m04 uint1_t cumulative_dpc_time_limit_present;                                             //{ +0x0000@9  } | .CumulativeDpcTimeLimitPresent
            _m05 uint1_t single_dpc_soft_time_limit_present;                                            //{ +0x0000@10 } | .SingleDpcSoftTimeLimitPresent
            _m06 uint1_t cumulative_dpc_soft_time_limit_present;                                        //{ +0x0000@11 } | .CumulativeDpcSoftTimeLimitPresent
            _m07 uint1_t single_dpc_profile_threshold_present;                                          //{ +0x0000@12 } | .SingleDpcProfileThresholdPresent
            _m08 uint1_t cumulative_dpc_profile_threshold_present;                                      //{ +0x0000@13 } | .CumulativeDpcProfileThresholdPresent
            _m09 uint1_t profile_buffer_size_present;                                                   //{ +0x0000@14 } | .ProfileBufferSizePresent
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.$", 0x0, false, 0x121d4bcac36e956f );                                                                             
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                                             
        };                                                                                            
                                                                                                      
        // Windows 11                                                                                 
        //                                                                                            
        _m00 uint8_t                                              version;                              //{ +0x0000@0  } | .Version
        _m01 uint24_t                                             all_flags;                            //{ +0x0000@8  } | .AllFlags
        _m10 u0_flags_t                                           flags;                                //{ +0x0000    } | .Flags
        _m11 uint32_t                                             single_dpc_time_limit_ms;             //{ +0x0004    } | .SingleDpcTimeLimitMs
        _m12 uint32_t                                             cumulative_dpc_time_limit_ms;         //{ +0x0008    } | .CumulativeDpcTimeLimitMs
        _m13 uint32_t                                             single_dpc_soft_time_limit_ms;        //{ +0x000c    } | .SingleDpcSoftTimeLimitMs
        _m14 uint32_t                                             cumulative_dpc_soft_time_limit_ms;    //{ +0x0010    } | .CumulativeDpcSoftTimeLimitMs
        _m15 uint32_t                                             single_dpc_profile_threshold_ms;      //{ +0x0014    } | .SingleDpcProfileThresholdMs
        _m16 uint32_t                                             cumulative_dpc_profile_threshold_ms;  //{ +0x0018    } | .CumulativeDpcProfileThresholdMs
        _m17 uint32_t                                             profile_buffer_size_bytes;            //{ +0x001c    } | .ProfileBufferSizeBytes
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.$", 0x0, false, 0x7159f0d882c2e52c );                                    
        SDK_FIXED_SIZE( system_dpc_watchdog_configuration_information_v2_t, 0x20 );                                    
    };                                                                                                
};
#include "magic/system_dpc_watchdog_configuration_information_v2_t.end.hpp"
SDK_VERIFY( struct win::system_dpc_watchdog_configuration_information_v2_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct win::system_dpc_watchdog_configuration_information_v2_t, 0x20 );
