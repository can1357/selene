#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "disk_snapshot_state_t.hpp"

#include "magic/disk_snapshot_info_t.start.hpp"
namespace nt
{
    // [struct _DISK_SNAPSHOT_INFO]
    // => WDK 10 (NV)
    //
    struct disk_snapshot_info_t                                  
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                       version;               //{ +0x0000    } | .Version
        _m01 enum nt::disk_snapshot_state_t state;                 //{ +0x0004    } | .State
        _m02 struct nt::guid_t              snapshot_set_id;       //{ +0x0008    } | .SnapshotSetId
        _m03 struct nt::guid_t              snapshot_id;           //{ +0x0018    } | .SnapshotId
        _m04 struct nt::guid_t              lun_id;                //{ +0x0028    } | .LunId
        _m05 int64_t                        creation_time_stamp;   //{ +0x0038    } | .CreationTimeStamp
        _m06 uint32_t                       import_count;          //{ +0x0040    } | .ImportCount
        _m07 uint32_t                       flags;                 //{ +0x0044    } | .Flags
        _m08 uint32_t                       additional_data_size;  //{ +0x0048    } | .AdditionalDataSize
        _m09 sdk::array<uint8_t, 1>         additional_data;       //{ +0x004c    } | .AdditionalData
                                                                 
        SDK_NONVOL_PROPERTIES( "_DISK_SNAPSHOT_INFO.$", 0x0, false, 0x1ab570027fdfa64c );                     
        SDK_FIXED_SIZE( disk_snapshot_info_t, 0x50 );                     
    };                                                           
};
#include "magic/disk_snapshot_info_t.end.hpp"
SDK_VERIFY( struct nt::disk_snapshot_info_t, 0x50 );
