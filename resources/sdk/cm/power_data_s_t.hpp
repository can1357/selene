#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"

#include "magic/power_data_s_t.start.hpp"
namespace cm
{
    // [struct CM_Power_Data_s]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct power_data_s_t                                                            
    {                                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                           
        _m00 uint32_t                                     pd_size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PD_Size
        _m01 enum nt::device_power_state_t                pd_most_recent_power_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PD_MostRecentPowerState
        _m02 uint32_t                                     pd_capabilities;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PD_Capabilities
        _m03 uint32_t                                     pd_d1_latency;               //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .PD_D1Latency
        _m04 uint32_t                                     pd_d2_latency;               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PD_D2Latency
        _m05 uint32_t                                     pd_d3_latency;               //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .PD_D3Latency
        _m06 sdk::array<enum nt::device_power_state_t, 7> pd_power_state_mapping;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PD_PowerStateMapping
        _m07 enum nt::system_power_state_t                pd_deepest_system_wake;      //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .PD_DeepestSystemWake
                                                                                     
        SDK_NONVOL_PROPERTIES( "CM_Power_Data_s.$", 0x38, true, 0xc55e34899adc0a58 );                           
        SDK_FIXED_SIZE( power_data_s_t, 0x38 );                                      
    };                                                                               
};
#include "magic/power_data_s_t.end.hpp"
SDK_VERIFY( struct cm::power_data_s_t, 0x38 );
