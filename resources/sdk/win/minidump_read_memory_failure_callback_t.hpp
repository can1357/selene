#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_read_memory_failure_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_READ_MEMORY_FAILURE_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_read_memory_failure_callback_t
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                               
        _m00 uint64_t     offset;                   //{ +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint32_t     bytes;                    //{ +0x0008    +0x0008    +0x0008    } | .Bytes
        _m02 sdk::hresult failure_status;           //{ +0x000c    +0x000c    +0x000c    } | .FailureStatus
                                                  
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_READ_MEMORY_FAILURE_CALLBACK.$", 0x10, true, 0x91698d23877f42c7 );               
        SDK_FIXED_SIZE( minidump_read_memory_failure_callback_t, 0x10 );               
    };                                            
};
#include "magic/minidump_read_memory_failure_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_read_memory_failure_callback_t, 0x10 );
