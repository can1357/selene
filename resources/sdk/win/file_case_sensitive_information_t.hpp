#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_case_sensitive_information_t.start.hpp"
namespace win
{
    // [struct _FILE_CASE_SENSITIVE_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_case_sensitive_information_t
    {                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                            
        SDK_NONVOL_PROPERTIES( "_FILE_CASE_SENSITIVE_INFORMATION.$", 0x4, true, 0x644f787b6fa10251 );      
        SDK_FIXED_SIZE( file_case_sensitive_information_t, 0x4 );      
    };                                      
};
#include "magic/file_case_sensitive_information_t.end.hpp"
SDK_VERIFY( struct win::file_case_sensitive_information_t, 0x4 );
