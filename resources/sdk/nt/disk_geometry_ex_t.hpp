#pragma once
#include <sdkgen/support_library.hpp>
#include "disk_geometry_t.hpp"

#include "magic/disk_geometry_ex_t.start.hpp"
namespace nt
{
    // [struct _DISK_GEOMETRY_EX]
    // => WDK 10 (NV)
    //
    struct disk_geometry_ex_t                     
    {                                             
        // WDK 10                                 
        //                                        
        _m00 struct nt::disk_geometry_t geometry;   //{ +0x0000    } | .Geometry
        _m01 int64_t                    disk_size;  //{ +0x0018    } | .DiskSize
        _m02 sdk::array<uint8_t, 1>     data;       //{ +0x0020    } | .Data
                                                  
        SDK_NONVOL_PROPERTIES( "_DISK_GEOMETRY_EX.$", 0x0, false, 0x6b92ee9d8e0cfe03 );          
        SDK_FIXED_SIZE( disk_geometry_ex_t, 0x28 );          
    };                                            
};
#include "magic/disk_geometry_ex_t.end.hpp"
SDK_VERIFY( struct nt::disk_geometry_ex_t, 0x28 );
