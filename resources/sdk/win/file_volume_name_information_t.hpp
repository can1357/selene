#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_volume_name_information_t.start.hpp"
namespace win
{
    // [struct _FILE_VOLUME_NAME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_volume_name_information_t              
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint32_t               device_name_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceNameLength
        _m01 sdk::array<wchar_t, 1> device_name;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceName
                                                       
        SDK_NONVOL_PROPERTIES( "_FILE_VOLUME_NAME_INFORMATION.$", 0x8, true, 0x1967477a96b1a448 );                   
        SDK_FIXED_SIZE( file_volume_name_information_t, 0x8 );                   
    };                                                 
};
#include "magic/file_volume_name_information_t.end.hpp"
SDK_VERIFY( struct win::file_volume_name_information_t, 0x8 );
