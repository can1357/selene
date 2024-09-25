#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_power_descriptor_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_POWER_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct device_power_descriptor_t                      
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint32_t version;                              //{ +0x0000    } | .Version
        _m01 uint32_t size;                                 //{ +0x0004    } | .Size
        _m02 uint8_t  device_attention_supported;           //{ +0x0008    } | .DeviceAttentionSupported
        _m03 uint8_t  asynchronous_notification_supported;  //{ +0x0009    } | .AsynchronousNotificationSupported
        _m04 uint8_t  idle_power_management_enabled;        //{ +0x000a    } | .IdlePowerManagementEnabled
        _m05 uint8_t  d3_cold_enabled;                      //{ +0x000b    } | .D3ColdEnabled
        _m06 uint8_t  d3_cold_supported;                    //{ +0x000c    } | .D3ColdSupported
        _m07 uint8_t  no_verify_during_idle_power;          //{ +0x000d    } | .NoVerifyDuringIdlePower
        _m08 uint32_t idle_timeout_in_ms;                   //{ +0x0010    } | .IdleTimeoutInMS
                                                          
        SDK_NONVOL_PROPERTIES( "_DEVICE_POWER_DESCRIPTOR.$", 0x0, false, 0xae43d2902e2bd05b );                                    
        SDK_FIXED_SIZE( device_power_descriptor_t, 0x14 );                                    
    };                                                    
};
#include "magic/device_power_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::device_power_descriptor_t, 0x14 );
