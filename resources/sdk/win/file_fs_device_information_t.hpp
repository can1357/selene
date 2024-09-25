#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_device_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_DEVICE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_device_information_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t device_type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceType
        _m01 uint32_t characteristics;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Characteristics
                                       
        SDK_NONVOL_PROPERTIES( "_FILE_FS_DEVICE_INFORMATION.$", 0x8, true, 0xbf3f166882eb2012 );                
        SDK_FIXED_SIZE( file_fs_device_information_t, 0x8 );                
    };                                 
};
#include "magic/file_fs_device_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_device_information_t, 0x8 );
