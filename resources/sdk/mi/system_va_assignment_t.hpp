#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_va_assignment_t.start.hpp"
namespace mi
{
    // [struct _MI_SYSTEM_VA_ASSIGNMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_va_assignment_t     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    base_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint64_t number_of_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfBytes
                                      
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_VA_ASSIGNMENT.$", 0x10, true, 0x163b94f436950e2d );                
        SDK_FIXED_SIZE( system_va_assignment_t, 0x10 );                
    };                                
};
#include "magic/system_va_assignment_t.end.hpp"
SDK_VERIFY( struct mi::system_va_assignment_t, 0x10 );
