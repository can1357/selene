#pragma once
#include <sdkgen/support_library.hpp>
#include "media_type_t.hpp"

#include "magic/disk_geometry_t.start.hpp"
namespace nt
{
    // [struct _DISK_GEOMETRY]
    // => WDK 10 (NV)
    //
    struct disk_geometry_t                             
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 int64_t               cylinders;            //{ +0x0000    } | .Cylinders
        _m01 enum nt::media_type_t media_type;           //{ +0x0008    } | .MediaType
        _m02 uint32_t              tracks_per_cylinder;  //{ +0x000c    } | .TracksPerCylinder
        _m03 uint32_t              sectors_per_track;    //{ +0x0010    } | .SectorsPerTrack
        _m04 uint32_t              bytes_per_sector;     //{ +0x0014    } | .BytesPerSector
                                                       
        SDK_NONVOL_PROPERTIES( "_DISK_GEOMETRY.$", 0x0, false, 0x3e5057e6c70aaa7c );                    
        SDK_FIXED_SIZE( disk_geometry_t, 0x18 );                    
    };                                                 
};
#include "magic/disk_geometry_t.end.hpp"
SDK_VERIFY( struct nt::disk_geometry_t, 0x18 );
