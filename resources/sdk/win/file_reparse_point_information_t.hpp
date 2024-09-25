#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_reparse_point_information_t.start.hpp"
namespace win
{
    // [struct _FILE_REPARSE_POINT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_reparse_point_information_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 int64_t  file_reference;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileReference
        _m01 uint32_t tag;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
                                           
        SDK_NONVOL_PROPERTIES( "_FILE_REPARSE_POINT_INFORMATION.$", 0x10, true, 0x3bca7932ebf3698c );               
        SDK_FIXED_SIZE( file_reparse_point_information_t, 0x10 );               
    };                                     
};
#include "magic/file_reparse_point_information_t.end.hpp"
SDK_VERIFY( struct win::file_reparse_point_information_t, 0x10 );
