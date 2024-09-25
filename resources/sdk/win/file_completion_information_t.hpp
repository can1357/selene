#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_completion_information_t.start.hpp"
namespace win
{
    // [struct _FILE_COMPLETION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_completion_information_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //              
        _m00 void* port;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Port
        _m01 void* key;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                                        
        SDK_NONVOL_PROPERTIES( "_FILE_COMPLETION_INFORMATION.$", 0x10, true, 0x42f2f81f8e02c851 );     
        SDK_FIXED_SIZE( file_completion_information_t, 0x10 );     
    };                                  
};
#include "magic/file_completion_information_t.end.hpp"
SDK_VERIFY( struct win::file_completion_information_t, 0x10 );
