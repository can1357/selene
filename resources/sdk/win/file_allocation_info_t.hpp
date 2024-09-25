#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_allocation_info_t.start.hpp"
namespace win
{
    // [struct _FILE_ALLOCATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_allocation_info_t    
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 int64_t allocation_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocationSize
                                     
        SDK_MAGIC_PROPERTIES( "_FILE_ALLOCATION_INFO.$", 0x8, true, 0xb13afcfb19faca2c );                
        SDK_FIXED_SIZE( file_allocation_info_t, 0x8 );                
    };                               
};
#include "magic/file_allocation_info_t.end.hpp"
SDK_VERIFY( struct win::file_allocation_info_t, 0x8 );
