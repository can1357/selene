#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_unit_attributes_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_UNIT_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_unit_attributes_t                 
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                        
        _m00 uint1_t vm_pass_through_lun;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VmPassThroughLun
        _m01 uint1_t device_attention_supported;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DeviceAttentionSupported
        _m02 uint1_t async_notification_supported;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AsyncNotificationSupported
        _m03 uint1_t d3_cold_not_supported;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .D3ColdNotSupported
        _m04 uint1_t default_write_cache_enabled;   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .DefaultWriteCacheEnabled
                                                  
        // Windows 11                             
        //                                        
        _m05 uint1_t zns_nvme_drive;                //{ +0x0000@5  } | .ZnsNvmeDrive
                                                  
        SDK_MAGIC_PROPERTIES( "_RAID_UNIT_ATTRIBUTES.$", 0x4, true, 0xbfad92bf8da993b );                             
        SDK_FIXED_SIZE( raid_unit_attributes_t, 0x4 );                             
    };                                            
};
#include "magic/raid_unit_attributes_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_unit_attributes_t, 0x4 );
