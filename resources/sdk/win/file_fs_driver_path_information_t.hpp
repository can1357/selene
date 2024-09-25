#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_driver_path_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_DRIVER_PATH_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_driver_path_information_t           
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint8_t                driver_in_path;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverInPath
        _m01 uint32_t               driver_name_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DriverNameLength
        _m02 sdk::array<wchar_t, 1> driver_name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverName
                                                       
        SDK_NONVOL_PROPERTIES( "_FILE_FS_DRIVER_PATH_INFORMATION.$", 0xc, true, 0xdf8327b758c7aac0 );                   
        SDK_FIXED_SIZE( file_fs_driver_path_information_t, 0xc );                   
    };                                                 
};
#include "magic/file_fs_driver_path_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_driver_path_information_t, 0xc );
