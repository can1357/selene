#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_int13_info_t.start.hpp"
namespace nt
{
    // [struct _DISK_INT13_INFO]
    // => WDK 10 (NV)
    //
    struct disk_int13_info_t            
    {                                   
        // WDK 10                       
        //                              
        _m00 uint16_t drive_select;       //{ +0x0000    } | .DriveSelect
        _m01 uint32_t max_cylinders;      //{ +0x0004    } | .MaxCylinders
        _m02 uint16_t sectors_per_track;  //{ +0x0008    } | .SectorsPerTrack
        _m03 uint16_t max_heads;          //{ +0x000a    } | .MaxHeads
        _m04 uint16_t number_drives;      //{ +0x000c    } | .NumberDrives
                                        
        SDK_NONVOL_PROPERTIES( "_DISK_INT13_INFO.$", 0x0, false, 0x7774bbbd9b9b13a2 );                  
        SDK_FIXED_SIZE( disk_int13_info_t, 0x10 );                  
    };                                  
};
#include "magic/disk_int13_info_t.end.hpp"
SDK_VERIFY( struct nt::disk_int13_info_t, 0x10 );
