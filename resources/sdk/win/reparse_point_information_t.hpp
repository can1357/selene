#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reparse_point_information_t.start.hpp"
namespace win
{
    // [struct _REPARSE_POINT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reparse_point_information_t     
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint16_t reparse_data_length;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReparseDataLength
        _m01 uint16_t unparsed_name_length;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .UnparsedNameLength
                                           
        SDK_MAGIC_PROPERTIES( "_REPARSE_POINT_INFORMATION.$", 0x4, true, 0x7901e9aa7ab60137 );                     
        SDK_FIXED_SIZE( reparse_point_information_t, 0x4 );                     
    };                                     
};
#include "magic/reparse_point_information_t.end.hpp"
SDK_VERIFY( struct win::reparse_point_information_t, 0x4 );
