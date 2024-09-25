#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prop_midl_expr_format_string_t.start.hpp"
namespace win
{
    // [struct _prop_MIDL_EXPR_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct prop_midl_expr_format_string_t   
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint8_t, 25> format;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Format
                                            
        SDK_MAGIC_PROPERTIES( "_prop_MIDL_EXPR_FORMAT_STRING.$", 0x20, true, 0x5080a794f241484f );       
        SDK_FIXED_SIZE( prop_midl_expr_format_string_t, 0x20 );       
    };                                      
};
#include "magic/prop_midl_expr_format_string_t.end.hpp"
SDK_VERIFY( struct win::prop_midl_expr_format_string_t, 0x20 );
