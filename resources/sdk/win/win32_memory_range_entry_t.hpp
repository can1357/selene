#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win32_memory_range_entry_t.start.hpp"
namespace win
{
    // [struct _WIN32_MEMORY_RANGE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win32_memory_range_entry_t 
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    virtual_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 uint64_t number_of_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfBytes
                                      
        SDK_MAGIC_PROPERTIES( "_WIN32_MEMORY_RANGE_ENTRY.$", 0x10, true, 0x75f79a7971c7d373 );                
        SDK_FIXED_SIZE( win32_memory_range_entry_t, 0x10 );                
    };                                
};
#include "magic/win32_memory_range_entry_t.end.hpp"
SDK_VERIFY( struct win::win32_memory_range_entry_t, 0x10 );
