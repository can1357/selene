#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_case_sensitive_info_t.start.hpp"
namespace win
{
    // [struct _FILE_CASE_SENSITIVE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_case_sensitive_info_t
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;           //{ +0x0000    +0x0000    +0x0000    } | .Flags
                                     
        SDK_MAGIC_PROPERTIES( "_FILE_CASE_SENSITIVE_INFO.$", 0x4, true, 0x4fbc7094f94d3c81 );      
        SDK_FIXED_SIZE( file_case_sensitive_info_t, 0x4 );      
    };                               
};
#include "magic/file_case_sensitive_info_t.end.hpp"
SDK_VERIFY( struct win::file_case_sensitive_info_t, 0x4 );
