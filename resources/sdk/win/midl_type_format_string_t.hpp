#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_type_format_string_t          
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                    
        _m00 sdk::array<uint8_t, 2508> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                              
        SDK_MAGIC_PROPERTIES( "_MIDL_TYPE_FORMAT_STRING.$", 0x9ce, true, 0xb8c6c32745c124bc );       
        SDK_FIXED_SIZE( midl_type_format_string_t, 0x9ce );       
    };                                        
};
#include "magic/midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::midl_type_format_string_t, 0x9ce );
