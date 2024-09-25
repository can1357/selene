#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filesystem_statistics_ex_t.start.hpp"
namespace win
{
    // [struct _FILESYSTEM_STATISTICS_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct filesystem_statistics_ex_t            
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint16_t file_system_type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileSystemType
        _m01 uint16_t version;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 uint32_t size_of_complete_structure;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfCompleteStructure
        _m03 uint64_t user_file_reads;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .UserFileReads
        _m04 uint64_t user_file_read_bytes;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .UserFileReadBytes
        _m05 uint64_t user_disk_reads;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .UserDiskReads
        _m06 uint64_t user_file_writes;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .UserFileWrites
        _m07 uint64_t user_file_write_bytes;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .UserFileWriteBytes
        _m08 uint64_t user_disk_writes;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .UserDiskWrites
        _m09 uint64_t meta_data_reads;             //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .MetaDataReads
        _m10 uint64_t meta_data_read_bytes;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .MetaDataReadBytes
        _m11 uint64_t meta_data_disk_reads;        //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .MetaDataDiskReads
        _m12 uint64_t meta_data_writes;            //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .MetaDataWrites
        _m13 uint64_t meta_data_write_bytes;       //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .MetaDataWriteBytes
        _m14 uint64_t meta_data_disk_writes;       //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .MetaDataDiskWrites
                                                 
        SDK_NONVOL_PROPERTIES( "_FILESYSTEM_STATISTICS_EX.$", 0x68, true, 0xe751a622f28b9f5c );                           
        SDK_FIXED_SIZE( filesystem_statistics_ex_t, 0x68 );                           
    };                                           
};
#include "magic/filesystem_statistics_ex_t.end.hpp"
SDK_VERIFY( struct win::filesystem_statistics_ex_t, 0x68 );
