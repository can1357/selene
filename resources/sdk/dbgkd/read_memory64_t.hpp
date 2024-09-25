#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_memory64_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_READ_MEMORY64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct read_memory64_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t target_base_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetBaseAddress
        _m01 uint32_t transfer_count;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TransferCount
        _m02 uint32_t actual_bytes_read;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ActualBytesRead
                                          
        SDK_MAGIC_PROPERTIES( "_DBGKD_READ_MEMORY64.$", 0x10, true, 0xa0104ea6504c0fe0 );                    
        SDK_FIXED_SIZE( read_memory64_t, 0x10 );                    
    };                                    
};
#include "magic/read_memory64_t.end.hpp"
SDK_VERIFY( struct dbgkd::read_memory64_t, 0x10 );
