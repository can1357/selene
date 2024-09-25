#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_full_size_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_FULL_SIZE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_full_size_information_t              
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 int64_t  total_allocation_units;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalAllocationUnits
        _m01 int64_t  caller_available_allocation_units;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CallerAvailableAllocationUnits
        _m02 int64_t  actual_available_allocation_units;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ActualAvailableAllocationUnits
        _m03 uint32_t sectors_per_allocation_unit;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SectorsPerAllocationUnit
        _m04 uint32_t bytes_per_sector;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .BytesPerSector
                                                        
        SDK_NONVOL_PROPERTIES( "_FILE_FS_FULL_SIZE_INFORMATION.$", 0x20, true, 0x2dfe8dca73ca8a6d );                                  
        SDK_FIXED_SIZE( file_fs_full_size_information_t, 0x20 );                                  
    };                                                  
};
#include "magic/file_fs_full_size_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_full_size_information_t, 0x20 );
