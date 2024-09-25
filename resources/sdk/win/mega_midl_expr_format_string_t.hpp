#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mega_midl_expr_format_string_t.start.hpp"
namespace win
{
    // [struct _mega_MIDL_EXPR_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mega_midl_expr_format_string_t   
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint8_t, 29> format;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Format
                                            
        SDK_MAGIC_PROPERTIES( "_mega_MIDL_EXPR_FORMAT_STRING.$", 0x40, true, 0x2bd67126ade8fc4e );       
        SDK_DYNAMIC_SIZE( mega_midl_expr_format_string_t );       
    };                                      
};
#include "magic/mega_midl_expr_format_string_t.end.hpp"
