#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_format_string_t.start.hpp"
namespace win
{
    // [struct _MIDL_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_format_string_t         
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                              
        _m00 sdk::array<uint8_t> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                        
        SDK_MAGIC_PROPERTIES( "_MIDL_FORMAT_STRING.$", 0x2, true, 0x7628a7d158b887f9 );       
        SDK_FIXED_SIZE( midl_format_string_t, 0x2 );       
    };                                  
};
#include "magic/midl_format_string_t.end.hpp"
SDK_VERIFY( struct win::midl_format_string_t, 0x2 );
