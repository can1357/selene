#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_geometry_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_DISK_GEOMETRY_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct disk_geometry_device_data_t    
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t bytes_per_sector;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BytesPerSector
        _m01 uint32_t number_of_cylinders;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfCylinders
        _m02 uint32_t sectors_per_track;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SectorsPerTrack
        _m03 uint32_t number_of_heads;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfHeads
                                          
        SDK_NONVOL_PROPERTIES( "_CM_DISK_GEOMETRY_DEVICE_DATA.$", 0x10, true, 0x742585f22c97876 );                    
        SDK_FIXED_SIZE( disk_geometry_device_data_t, 0x10 );                    
    };                                    
};
#include "magic/disk_geometry_device_data_t.end.hpp"
SDK_VERIFY( struct cm::disk_geometry_device_data_t, 0x10 );
