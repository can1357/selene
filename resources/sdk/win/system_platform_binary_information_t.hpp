#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_platform_binary_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PLATFORM_BINARY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_platform_binary_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t physical_address;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalAddress
        _m01 void*    handoff_buffer;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandoffBuffer
        _m02 void*    command_line_buffer;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommandLineBuffer
        _m03 uint32_t handoff_buffer_size;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HandoffBufferSize
        _m04 uint32_t command_line_buffer_size;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CommandLineBufferSize
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PLATFORM_BINARY_INFORMATION.$", 0x20, true, 0xb2ba4c4ce547656c );                         
        SDK_FIXED_SIZE( system_platform_binary_information_t, 0x20 );                         
    };                                         
};
#include "magic/system_platform_binary_information_t.end.hpp"
SDK_VERIFY( struct win::system_platform_binary_information_t, 0x20 );
