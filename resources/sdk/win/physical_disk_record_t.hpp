#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_disk_record_t.start.hpp"
namespace win
{
    // [struct _PHYSICAL_DISK_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct physical_disk_record_t                         
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 uint32_t                 disk_number;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskNumber
        _m01 uint32_t                 bytes_per_sector;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BytesPerSector
        _m02 uint32_t                 sectors_per_track;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SectorsPerTrack
        _m03 uint32_t                 tracks_per_cylinder;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TracksPerCylinder
        _m04 uint64_t                 cylinders;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Cylinders
        _m05 uint32_t                 scsi_port_number;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SCSIPortNumber
        _m06 uint32_t                 scsi_path_id;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SCSIPathId
        _m07 uint32_t                 scsi_target_id;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SCSITargetId
        _m08 uint32_t                 scsi_lun;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SCSILun
        _m09 sdk::array<wchar_t, 256> manufacturer;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Manufacturer
        _m10 uint32_t                 partition_count;      //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .PartitionCount
        _m11 uint8_t                  write_cache_enabled;  //{ +0x022c    +0x022c    +0x022c    +0x022c    } | .WriteCacheEnabled
        _m12 sdk::array<wchar_t, 3>   boot_drive_letter;    //{ +0x022e    +0x022e    +0x022e    +0x022e    } | .BootDriveLetter
                                                          
        SDK_MAGIC_PROPERTIES( "_PHYSICAL_DISK_RECORD.$", 0x238, true, 0xfd01ed1fd3c7b45d );                    
        SDK_FIXED_SIZE( physical_disk_record_t, 0x238 );                    
    };                                                    
};
#include "magic/physical_disk_record_t.end.hpp"
SDK_VERIFY( struct win::physical_disk_record_t, 0x238 );
