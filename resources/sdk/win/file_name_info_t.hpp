#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_name_info_t.start.hpp"
namespace win
{
    // [struct _FILE_NAME_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_name_info_t                          
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint32_t               file_name_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileNameLength
        _m01 sdk::array<wchar_t, 1> file_name;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FileName
                                                     
        SDK_MAGIC_PROPERTIES( "_FILE_NAME_INFO.$", 0x8, true, 0xace655c86d041f40 );                 
        SDK_FIXED_SIZE( file_name_info_t, 0x8 );                 
    };                                               
};
#include "magic/file_name_info_t.end.hpp"
SDK_VERIFY( struct win::file_name_info_t, 0x8 );
