#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thermal_policy_t.start.hpp"
namespace nt
{
    // [struct _THERMAL_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermal_policy_t              
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t  wait_for_update;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WaitForUpdate
        _m02 uint8_t  hibernate;           //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .Hibernate
        _m03 uint8_t  critical;            //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Critical
        _m04 uint8_t  thermal_standby;     //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .ThermalStandby
        _m05 uint32_t activation_reasons;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActivationReasons
        _m06 uint32_t passive_limit;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PassiveLimit
        _m07 uint32_t active_level;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ActiveLevel
        _m08 uint8_t  over_throttled;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OverThrottled
                                         
        SDK_MAGIC_PROPERTIES( "_THERMAL_POLICY.$", 0x18, true, 0x806227a9d08b1080 );                   
        SDK_FIXED_SIZE( thermal_policy_t, 0x18 );                   
    };                                   
};
#include "magic/thermal_policy_t.end.hpp"
SDK_VERIFY( struct nt::thermal_policy_t, 0x18 );
