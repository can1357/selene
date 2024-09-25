#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pm_admin_config_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PM_ADMIN_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pm_admin_config_t                     
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint2_t  wake_on_pattern;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WakeOnPattern
        _m01 uint2_t  wake_on_magic_packet;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .WakeOnMagicPacket
        _m02 uint2_t  device_sleep_on_disconnect;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .DeviceSleepOnDisconnect
        _m03 uint2_t  pmarp_offload;               //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PMARPOffload
        _m04 uint2_t  pmns_offload;                //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PMNSOffload
        _m05 uint2_t  pm_wi_fi_rekey_offload;      //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PMWiFiRekeyOffload
        _m06 uint2_t  selective_suspend;           //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .SelectiveSuspend
        _m07 uint32_t value;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m08 uint2_t  nic_auto_power_saver;        //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .NicAutoPowerSaver
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_PM_ADMIN_CONFIG.$", 0x4, true, 0x766498b5d149fbd );                           
        SDK_FIXED_SIZE( pm_admin_config_t, 0x4 );                           
    };                                           
};
#include "magic/pm_admin_config_t.end.hpp"
SDK_VERIFY( struct ndis::pm_admin_config_t, 0x4 );
