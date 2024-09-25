#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_disposition_info_ex_t.start.hpp"
namespace win
{
    // [struct _FILE_DISPOSITION_INFO_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_disposition_info_ex_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                     
        SDK_MAGIC_PROPERTIES( "_FILE_DISPOSITION_INFO_EX.$", 0x4, true, 0x6fac44e1bfc3a576 );      
        SDK_FIXED_SIZE( file_disposition_info_ex_t, 0x4 );      
    };                               
};
#include "magic/file_disposition_info_ex_t.end.hpp"
SDK_VERIFY( struct win::file_disposition_info_ex_t, 0x4 );
