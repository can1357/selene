#pragma once
#include <sdkgen/support_library.hpp>
#include "log_handle_context_t.hpp"
#include "../cc/volume_telemetry_t.hpp"

#include "magic/volume_cache_map_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _VOLUME_CACHE_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct volume_cache_map_t                                            
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                               
        _m00 int16_t                         node_type_code;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                         node_byte_code;               //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NodeByteCode
        _m02 uint32_t                        use_count;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .UseCount
        _m03 struct nt::device_object_t*     device_object;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m04 nt::list_entry_t                volume_cache_map_links;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VolumeCacheMapLinks
        _m05 uint64_t                        dirty_pages;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DirtyPages
        _m06 struct nt::log_handle_context_t log_handle_context;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LogHandleContext
        _m07 uint32_t                        flags;                        //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Flags
        _m08 uint32_t                        pages_queued_to_disk;         //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .PagesQueuedToDisk
        _m09 uint32_t                        logged_pages_queued_to_disk;  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .LoggedPagesQueuedToDisk
                                                                         
        // Windows 11                                                    
        //                                                               
        _m10 uint32_t                        volume_id;                    //{ +0x00cc    } | .VolumeId
        _m11 nt::list_entry_t                private_volume_list;          //{ +0x00d0    } | .PrivateVolumeList
        _m12 struct cc::volume_telemetry_t   volume_telemetry;             //{ +0x00e0    } | .VolumeTelemetry
                                                                         
        SDK_MAGIC_PROPERTIES( "_VOLUME_CACHE_MAP.$", 0xd0, true, 0x9ef71d8f08a98e79 );                            
        SDK_DYNAMIC_SIZE( volume_cache_map_t );                            
    };                                                                   
};
#include "magic/volume_cache_map_t.end.hpp"
