#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_va_list_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VA_LIST_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_va_list_information_t   
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t virtual_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualSize
        _m01 uint64_t virtual_peak;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VirtualPeak
        _m02 uint64_t virtual_limit;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VirtualLimit
        _m03 uint64_t allocation_failures;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocationFailures
                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VA_LIST_INFORMATION.$", 0x20, true, 0xea933843d7b70237 );                    
        SDK_FIXED_SIZE( system_va_list_information_t, 0x20 );                    
    };                                    
};
#include "magic/system_va_list_information_t.end.hpp"
SDK_VERIFY( struct win::system_va_list_information_t, 0x20 );
