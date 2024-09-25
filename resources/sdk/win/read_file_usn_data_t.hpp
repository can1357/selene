#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_file_usn_data_t.start.hpp"
namespace win
{
    // [struct READ_FILE_USN_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct read_file_usn_data_t         
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t min_major_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MinMajorVersion
        _m01 uint16_t max_major_version;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MaxMajorVersion
                                        
        SDK_MAGIC_PROPERTIES( "READ_FILE_USN_DATA.$", 0x4, true, 0x9b47ffec39f46e9f );                  
        SDK_FIXED_SIZE( read_file_usn_data_t, 0x4 );                  
    };                                  
};
#include "magic/read_file_usn_data_t.end.hpp"
SDK_VERIFY( struct win::read_file_usn_data_t, 0x4 );
