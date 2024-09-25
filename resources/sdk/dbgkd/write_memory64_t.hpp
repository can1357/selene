#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_memory64_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_WRITE_MEMORY64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct write_memory64_t                
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint64_t target_base_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetBaseAddress
        _m01 uint32_t transfer_count;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TransferCount
        _m02 uint32_t actual_bytes_written;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ActualBytesWritten
                                           
        SDK_MAGIC_PROPERTIES( "_DBGKD_WRITE_MEMORY64.$", 0x10, true, 0xbea3d6aa5defa0d6 );                     
        SDK_FIXED_SIZE( write_memory64_t, 0x10 );                     
    };                                     
};
#include "magic/write_memory64_t.end.hpp"
SDK_VERIFY( struct dbgkd::write_memory64_t, 0x10 );
