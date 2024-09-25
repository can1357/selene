#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_allocation_information_t.start.hpp"
namespace win
{
    // [struct _FILE_ALLOCATION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_allocation_information_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 int64_t allocation_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocationSize
                                        
        SDK_NONVOL_PROPERTIES( "_FILE_ALLOCATION_INFORMATION.$", 0x8, true, 0xa27104975366ee99 );                
        SDK_FIXED_SIZE( file_allocation_information_t, 0x8 );                
    };                                  
};
#include "magic/file_allocation_information_t.end.hpp"
SDK_VERIFY( struct win::file_allocation_information_t, 0x8 );
