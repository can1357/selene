#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_storage_info_t.start.hpp"
namespace win
{
    // [struct _FILE_STORAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_storage_info_t                                                      
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
        //                                                                          
        _m00 uint32_t logical_bytes_per_sector;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogicalBytesPerSector
        _m01 uint32_t physical_bytes_per_sector_for_atomicity;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PhysicalBytesPerSectorForAtomicity
        _m02 uint32_t physical_bytes_per_sector_for_performance;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PhysicalBytesPerSectorForPerformance
        _m03 uint32_t file_system_effective_physical_bytes_per_sector_for_atomicity;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FileSystemEffectivePhysicalBytesPerSectorForAtomicity
        _m04 uint32_t flags;                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m05 uint32_t byte_offset_for_sector_alignment;                               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ByteOffsetForSectorAlignment
        _m06 uint32_t byte_offset_for_partition_alignment;                            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ByteOffsetForPartitionAlignment
                                                                                    
        SDK_MAGIC_PROPERTIES( "_FILE_STORAGE_INFO.$", 0x1c, true, 0x1045992bc9f8774c );                                                              
        SDK_FIXED_SIZE( file_storage_info_t, 0x1c );                                                              
    };                                                                              
};
#include "magic/file_storage_info_t.end.hpp"
SDK_VERIFY( struct win::file_storage_info_t, 0x1c );
