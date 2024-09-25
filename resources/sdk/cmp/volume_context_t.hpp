#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/cmsi_rw_lock_t.hpp"

#include "magic/volume_context_t.start.hpp"
namespace cmp
{
    struct volume_manager_t;

    // [struct _CMP_VOLUME_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct volume_context_t                                               
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                
        _m00 nt::list_entry_t              volume_context_list_entry;       //{ +0x0000    +0x0000    +0x0000    } | .VolumeContextListEntry
        _m01 struct cmp::volume_manager_t* volume_manager;                  //{ +0x0010    +0x0010    +0x0010    } | .VolumeManager
        _m02 int64_t                       ref_count;                       //{ +0x0018    +0x0018    +0x0018    } | .RefCount
        _m03 struct nt::guid_t             volume_guid;                     //{ +0x0020    +0x0020    +0x0020    } | .VolumeGuid
        _m04 void*                         volume_file_object;              //{ +0x0030    +0x0030    +0x0030    } | .VolumeFileObject
        _m05 struct nt::cmsi_rw_lock_t     volume_context_lock;             //{ +0x0038    +0x0038    +0x0038    } | .VolumeContextLock
        _m06 uint8_t                       device_usage_notification_sent;  //{ +0x0040    +0x0040    +0x0040    } | .DeviceUsageNotificationSent
                                                                          
        SDK_MAGIC_PROPERTIES( "_CMP_VOLUME_CONTEXT.$", 0x48, true, 0x15751031c20dfd79 );                               
        SDK_FIXED_SIZE( volume_context_t, 0x48 );                               
    };                                                                    
};
#include "magic/volume_context_t.end.hpp"
SDK_VERIFY( struct cmp::volume_context_t, 0x48 );
