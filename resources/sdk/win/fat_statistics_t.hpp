#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fat_statistics_t.start.hpp"
namespace win
{
    // [struct _FAT_STATISTICS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fat_statistics_t                  
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t create_hits;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreateHits
        _m01 uint32_t successful_creates;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SuccessfulCreates
        _m02 uint32_t failed_creates;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FailedCreates
        _m03 uint32_t non_cached_reads;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .NonCachedReads
        _m04 uint32_t non_cached_read_bytes;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NonCachedReadBytes
        _m05 uint32_t non_cached_writes;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .NonCachedWrites
        _m06 uint32_t non_cached_write_bytes;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .NonCachedWriteBytes
        _m07 uint32_t non_cached_disk_reads;   //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .NonCachedDiskReads
        _m08 uint32_t non_cached_disk_writes;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NonCachedDiskWrites
                                             
        SDK_NONVOL_PROPERTIES( "_FAT_STATISTICS.$", 0x24, true, 0x70abd301c76ce833 );                       
        SDK_FIXED_SIZE( fat_statistics_t, 0x24 );                       
    };                                       
};
#include "magic/fat_statistics_t.end.hpp"
SDK_VERIFY( struct win::fat_statistics_t, 0x24 );
