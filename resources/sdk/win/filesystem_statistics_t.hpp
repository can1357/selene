#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filesystem_statistics_t.start.hpp"
namespace win
{
    // [struct _FILESYSTEM_STATISTICS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct filesystem_statistics_t               
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint16_t file_system_type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileSystemType
        _m01 uint16_t version;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 uint32_t size_of_complete_structure;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfCompleteStructure
        _m03 uint32_t user_file_reads;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .UserFileReads
        _m04 uint32_t user_file_read_bytes;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .UserFileReadBytes
        _m05 uint32_t user_disk_reads;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .UserDiskReads
        _m06 uint32_t user_file_writes;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .UserFileWrites
        _m07 uint32_t user_file_write_bytes;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .UserFileWriteBytes
        _m08 uint32_t user_disk_writes;            //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .UserDiskWrites
        _m09 uint32_t meta_data_reads;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MetaDataReads
        _m10 uint32_t meta_data_read_bytes;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .MetaDataReadBytes
        _m11 uint32_t meta_data_disk_reads;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MetaDataDiskReads
        _m12 uint32_t meta_data_writes;            //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .MetaDataWrites
        _m13 uint32_t meta_data_write_bytes;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .MetaDataWriteBytes
        _m14 uint32_t meta_data_disk_writes;       //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .MetaDataDiskWrites
                                                 
        SDK_NONVOL_PROPERTIES( "_FILESYSTEM_STATISTICS.$", 0x38, true, 0x935fb6118ffe35d2 );                           
        SDK_FIXED_SIZE( filesystem_statistics_t, 0x38 );                           
    };                                           
};
#include "magic/filesystem_statistics_t.end.hpp"
SDK_VERIFY( struct win::filesystem_statistics_t, 0x38 );
