#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_disposition_information_t.start.hpp"
namespace win
{
    // [struct _FILE_DISPOSITION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_disposition_information_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 uint8_t delete_file;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeleteFile
                                         
        SDK_NONVOL_PROPERTIES( "_FILE_DISPOSITION_INFORMATION.$", 0x1, true, 0x6ef21947b613ed80 );            
        SDK_FIXED_SIZE( file_disposition_information_t, 0x1 );            
    };                                   
};
#include "magic/file_disposition_information_t.end.hpp"
SDK_VERIFY( struct win::file_disposition_information_t, 0x1 );
