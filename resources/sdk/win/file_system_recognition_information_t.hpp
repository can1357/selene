#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_system_recognition_information_t.start.hpp"
namespace win
{
    // [struct _FILE_SYSTEM_RECOGNITION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_system_recognition_information_t
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 sdk::array<char, 9> file_system;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileSystem
                                                
        SDK_NONVOL_PROPERTIES( "_FILE_SYSTEM_RECOGNITION_INFORMATION.$", 0x9, true, 0x5c90e5a8e0148bd2 );            
        SDK_FIXED_SIZE( file_system_recognition_information_t, 0x9 );            
    };                                          
};
#include "magic/file_system_recognition_information_t.end.hpp"
SDK_VERIFY( struct win::file_system_recognition_information_t, 0x9 );
