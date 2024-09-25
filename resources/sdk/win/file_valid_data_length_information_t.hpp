#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_valid_data_length_information_t.start.hpp"
namespace win
{
    // [struct _FILE_VALID_DATA_LENGTH_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_valid_data_length_information_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 int64_t valid_data_length;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidDataLength
                                               
        SDK_NONVOL_PROPERTIES( "_FILE_VALID_DATA_LENGTH_INFORMATION.$", 0x8, true, 0x84f1e9da02f36216 );                  
        SDK_FIXED_SIZE( file_valid_data_length_information_t, 0x8 );                  
    };                                         
};
#include "magic/file_valid_data_length_information_t.end.hpp"
SDK_VERIFY( struct win::file_valid_data_length_information_t, 0x8 );
