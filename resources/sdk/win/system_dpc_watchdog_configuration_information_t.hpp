#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_dpc_watchdog_configuration_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION]
    // => Windows 11
    //
    struct system_dpc_watchdog_configuration_information_t                                        
    {                                                                                             
        struct u0_flags_t                                                                         
        {                                                                                         
            // Windows 11                                                                         
            //                                                                                    
            _m02 uint8_t dummy;                                                                     //{ +0x0000@0  } | .Dummy
            _m03 uint1_t single_dpc_time_limit_present;                                             //{ +0x0000@8  } | .SingleDpcTimeLimitPresent
            _m04 uint1_t cumulative_dpc_time_limit_present;                                         //{ +0x0000@9  } | .CumulativeDpcTimeLimitPresent
            _m05 uint1_t single_dpc_soft_time_limit_present;                                        //{ +0x0000@10 } | .SingleDpcSoftTimeLimitPresent
            _m06 uint1_t cumulative_dpc_soft_time_limit_present;                                    //{ +0x0000@11 } | .CumulativeDpcSoftTimeLimitPresent
                                                                                                  
            SDK_MAGIC_PROPERTIES( "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.Flags.$", 0x0, false, 0xd91061cce365984 );                                                                         
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                                         
        };                                                                                        
                                                                                                  
        // Windows 11                                                                             
        //                                                                                        
        _m00 uint8_t                                            version;                            //{ +0x0000@0  } | .Version
        _m01 uint24_t                                           all_flags;                          //{ +0x0000@8  } | .AllFlags
        _m07 u0_flags_t                                         flags;                              //{ +0x0000    } | .Flags
        _m08 uint32_t                                           single_dpc_time_limit_ms;           //{ +0x0004    } | .SingleDpcTimeLimitMs
        _m09 uint32_t                                           cumulative_dpc_time_limit_ms;       //{ +0x0008    } | .CumulativeDpcTimeLimitMs
        _m10 uint32_t                                           single_dpc_soft_time_limit_ms;      //{ +0x000c    } | .SingleDpcSoftTimeLimitMs
        _m11 uint32_t                                           cumulative_dpc_soft_time_limit_ms;  //{ +0x0010    } | .CumulativeDpcSoftTimeLimitMs
                                                                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.$", 0x0, false, 0x6d2c18ee17cbc20f );                                  
        SDK_FIXED_SIZE( system_dpc_watchdog_configuration_information_t, 0x14 );                                  
    };                                                                                            
};
#include "magic/system_dpc_watchdog_configuration_information_t.end.hpp"
SDK_VERIFY( struct win::system_dpc_watchdog_configuration_information_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct win::system_dpc_watchdog_configuration_information_t, 0x14 );
