#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_end_of_file_information_t.start.hpp"
namespace win
{
    // [struct _FILE_END_OF_FILE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_end_of_file_information_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 int64_t end_of_file;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EndOfFile
                                         
        SDK_NONVOL_PROPERTIES( "_FILE_END_OF_FILE_INFORMATION.$", 0x8, true, 0x77e6bcae7a5724ee );            
        SDK_FIXED_SIZE( file_end_of_file_information_t, 0x8 );            
    };                                   
};
#include "magic/file_end_of_file_information_t.end.hpp"
SDK_VERIFY( struct win::file_end_of_file_information_t, 0x8 );
