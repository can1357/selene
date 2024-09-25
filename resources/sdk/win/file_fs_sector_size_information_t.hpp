#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_sector_size_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_SECTOR_SIZE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_sector_size_information_t                                        
    {                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
        //                                                                          
        _m00 uint32_t logical_bytes_per_sector;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LogicalBytesPerSector
        _m01 uint32_t physical_bytes_per_sector_for_atomicity;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PhysicalBytesPerSectorForAtomicity
        _m02 uint32_t physical_bytes_per_sector_for_performance;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PhysicalBytesPerSectorForPerformance
        _m03 uint32_t file_system_effective_physical_bytes_per_sector_for_atomicity;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FileSystemEffectivePhysicalBytesPerSectorForAtomicity
        _m04 uint32_t flags;                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m05 uint32_t byte_offset_for_sector_alignment;                               //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ByteOffsetForSectorAlignment
        _m06 uint32_t byte_offset_for_partition_alignment;                            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ByteOffsetForPartitionAlignment
                                                                                    
        SDK_NONVOL_PROPERTIES( "_FILE_FS_SECTOR_SIZE_INFORMATION.$", 0x1c, true, 0x41bb573a8287c1e3 );                                                              
        SDK_FIXED_SIZE( file_fs_sector_size_information_t, 0x1c );                                                              
    };                                                                              
};
#include "magic/file_fs_sector_size_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_sector_size_information_t, 0x1c );
