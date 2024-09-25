#pragma once
#include <sdkgen/support_library.hpp>
#include "file_known_folder_type_t.hpp"

#include "magic/file_known_folder_information_t.start.hpp"
namespace win
{
    // [struct _FILE_KNOWN_FOLDER_INFORMATION]
    // => Windows 11
    //
    struct file_known_folder_information_t           
    {                                                
        // Windows 11                                
        //                                           
        _m00 enum win::file_known_folder_type_t type;  //{ +0x0000    } | .Type
                                                     
        SDK_MAGIC_PROPERTIES( "_FILE_KNOWN_FOLDER_INFORMATION.$", 0x0, false, 0x3bb7a74b48a5f7f );     
        SDK_FIXED_SIZE( file_known_folder_information_t, 0x4 );     
    };                                               
};
#include "magic/file_known_folder_information_t.end.hpp"
SDK_VERIFY( struct win::file_known_folder_information_t, 0x4 );
