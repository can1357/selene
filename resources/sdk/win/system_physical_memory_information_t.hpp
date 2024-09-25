#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_physical_memory_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PHYSICAL_MEMORY_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_physical_memory_information_t
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t total_physical_bytes;      //{ +0x0000    +0x0000    +0x0000    } | .TotalPhysicalBytes
        _m01 uint64_t lowest_physical_address;   //{ +0x0008    +0x0008    +0x0008    } | .LowestPhysicalAddress
        _m02 uint64_t highest_physical_address;  //{ +0x0010    +0x0010    +0x0010    } | .HighestPhysicalAddress
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PHYSICAL_MEMORY_INFORMATION.$", 0x18, true, 0xb1b0df8046992e36 );                         
        SDK_FIXED_SIZE( system_physical_memory_information_t, 0x18 );                         
    };                                         
};
#include "magic/system_physical_memory_information_t.end.hpp"
SDK_VERIFY( struct win::system_physical_memory_information_t, 0x18 );
