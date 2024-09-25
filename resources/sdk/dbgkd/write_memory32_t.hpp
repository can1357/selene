#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_memory32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_WRITE_MEMORY32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct write_memory32_t                
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t target_base_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetBaseAddress
        _m01 uint32_t transfer_count;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TransferCount
        _m02 uint32_t actual_bytes_written;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActualBytesWritten
                                           
        SDK_MAGIC_PROPERTIES( "_DBGKD_WRITE_MEMORY32.$", 0xc, true, 0x813dbccc65f69bd2 );                     
        SDK_FIXED_SIZE( write_memory32_t, 0xc );                     
    };                                     
};
#include "magic/write_memory32_t.end.hpp"
SDK_VERIFY( struct dbgkd::write_memory32_t, 0xc );
