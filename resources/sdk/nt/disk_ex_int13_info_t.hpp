#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_ex_int13_info_t.start.hpp"
namespace nt
{
    // [struct _DISK_EX_INT13_INFO]
    // => WDK 10 (NV)
    //
    struct disk_ex_int13_info_t            
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint16_t ex_buffer_size;        //{ +0x0000    } | .ExBufferSize
        _m01 uint16_t ex_flags;              //{ +0x0002    } | .ExFlags
        _m02 uint32_t ex_cylinders;          //{ +0x0004    } | .ExCylinders
        _m03 uint32_t ex_heads;              //{ +0x0008    } | .ExHeads
        _m04 uint32_t ex_sectors_per_track;  //{ +0x000c    } | .ExSectorsPerTrack
        _m05 uint64_t ex_sectors_per_drive;  //{ +0x0010    } | .ExSectorsPerDrive
        _m06 uint16_t ex_sector_size;        //{ +0x0018    } | .ExSectorSize
        _m07 uint16_t ex_reserved;           //{ +0x001a    } | .ExReserved
                                           
        SDK_NONVOL_PROPERTIES( "_DISK_EX_INT13_INFO.$", 0x0, false, 0xd3926cac59f755c2 );                     
        SDK_FIXED_SIZE( disk_ex_int13_info_t, 0x20 );                     
    };                                     
};
#include "magic/disk_ex_int13_info_t.end.hpp"
SDK_VERIFY( struct nt::disk_ex_int13_info_t, 0x20 );
