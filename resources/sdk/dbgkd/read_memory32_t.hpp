#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_memory32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_READ_MEMORY32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct read_memory32_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t target_base_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetBaseAddress
        _m01 uint32_t transfer_count;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TransferCount
        _m02 uint32_t actual_bytes_read;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActualBytesRead
                                          
        SDK_MAGIC_PROPERTIES( "_DBGKD_READ_MEMORY32.$", 0xc, true, 0xf777f372d2024352 );                    
        SDK_FIXED_SIZE( read_memory32_t, 0xc );                    
    };                                    
};
#include "magic/read_memory32_t.end.hpp"
SDK_VERIFY( struct dbgkd::read_memory32_t, 0xc );
