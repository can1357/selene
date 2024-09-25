#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_disk_data_t.start.hpp"
namespace nt
{
    // [struct _CDROM_DISK_DATA]
    // => WDK 10 (NV)
    //
    struct cdrom_disk_data_t    
    {                           
        // WDK 10               
        //                      
        _m00 uint32_t disk_data;  //{ +0x0000    } | .DiskData
                                
        SDK_NONVOL_PROPERTIES( "_CDROM_DISK_DATA.$", 0x0, false, 0xca8cea0768ebd3d );          
        SDK_FIXED_SIZE( cdrom_disk_data_t, 0x4 );          
    };                          
};
#include "magic/cdrom_disk_data_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_disk_data_t, 0x4 );
