#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/fast_ref_t.hpp"

#include "magic/device_map_t.start.hpp"
namespace nt
{
    struct ejob_t;
    struct device_map_t;
    struct object_directory_t;

    // [struct _DEVICE_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_map_t                                                         
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                      
        _m00 struct nt::object_directory_t*        dos_devices_directory;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DosDevicesDirectory
        _m01 struct nt::object_directory_t*        global_dos_devices_directory;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GlobalDosDevicesDirectory
        _m02 void*                                 dos_devices_directory_handle;  //{ +0x0010    +0x0010    +0x00f8    +0x0010    } | .DosDevicesDirectoryHandle
        _m03 varint_t                              reference_count;               //{ +0x0018    +0x0018    +0x00f0    +0x0018    } | .ReferenceCount
        _m04 uint32_t                              drive_map;                     //{ +0x001c    +0x001c    +0x0100    +0x001c    } | .DriveMap
        _m05 sdk::array<uint8_t, 32>               drive_type;                    //{ +0x0020    +0x0020    +0x0104    +0x0020    } | .DriveType
        _m06 struct nt::ejob_t*                    server_silo;                   //{ +0x0040    +0x0040    +0x0010    +0x0040    } | .ServerSilo
                                                                                
        // Windows 11                                                           
        //                                                                      
        _m07 struct nt::device_map_t*              global_device_map;             //{ +0x0018    } | .GlobalDeviceMap
        _m08 sdk::array<struct ex::fast_ref_t, 26> drive_object;                  //{ +0x0020    } | .DriveObject
                                                                                
        SDK_MAGIC_PROPERTIES( "_DEVICE_MAP.$", 0x48, true, 0xa6e300b7b066fb9 );                             
        SDK_DYNAMIC_SIZE( device_map_t );                                       
    };                                                                          
};
#include "magic/device_map_t.end.hpp"
