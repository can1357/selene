#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_is_remote_device_information_t.start.hpp"
namespace win
{
    // [struct _FILE_IS_REMOTE_DEVICE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_is_remote_device_information_t
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint8_t is_remote;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IsRemote
                                              
        SDK_NONVOL_PROPERTIES( "_FILE_IS_REMOTE_DEVICE_INFORMATION.$", 0x1, true, 0xbd2faaa7c44ab743 );          
        SDK_FIXED_SIZE( file_is_remote_device_information_t, 0x1 );          
    };                                        
};
#include "magic/file_is_remote_device_information_t.end.hpp"
SDK_VERIFY( struct win::file_is_remote_device_information_t, 0x1 );
