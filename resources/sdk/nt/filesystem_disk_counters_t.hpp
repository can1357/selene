#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filesystem_disk_counters_t.start.hpp"
namespace nt
{
    // [struct _FILESYSTEM_DISK_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filesystem_disk_counters_t  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t fs_bytes_read;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FsBytesRead
        _m01 uint64_t fs_bytes_written;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FsBytesWritten
                                       
        SDK_MAGIC_PROPERTIES( "_FILESYSTEM_DISK_COUNTERS.$", 0x10, true, 0xd2b680e4dd323404 );                 
        SDK_FIXED_SIZE( filesystem_disk_counters_t, 0x10 );                 
    };                                 
};
#include "magic/filesystem_disk_counters_t.end.hpp"
SDK_VERIFY( struct nt::filesystem_disk_counters_t, 0x10 );
