#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_size_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_SIZE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_size_information_t             
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 int64_t  total_allocation_units;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalAllocationUnits
        _m01 int64_t  available_allocation_units;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AvailableAllocationUnits
        _m02 uint32_t sectors_per_allocation_unit;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SectorsPerAllocationUnit
        _m03 uint32_t bytes_per_sector;             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .BytesPerSector
                                                  
        SDK_NONVOL_PROPERTIES( "_FILE_FS_SIZE_INFORMATION.$", 0x18, true, 0xd23fadbbce406e1e );                            
        SDK_FIXED_SIZE( file_fs_size_information_t, 0x18 );                            
    };                                            
};
#include "magic/file_fs_size_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_size_information_t, 0x18 );
