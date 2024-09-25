#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_disposition_info_t.start.hpp"
namespace win
{
    // [struct _FILE_DISPOSITION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_disposition_info_t 
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 uint8_t delete_file_w;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeleteFileW
                                   
        SDK_MAGIC_PROPERTIES( "_FILE_DISPOSITION_INFO.$", 0x1, true, 0xf8aba6f0b11247e1 );              
        SDK_FIXED_SIZE( file_disposition_info_t, 0x1 );              
    };                             
};
#include "magic/file_disposition_info_t.end.hpp"
SDK_VERIFY( struct win::file_disposition_info_t, 0x1 );
