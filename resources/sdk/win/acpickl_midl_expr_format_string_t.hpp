#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acpickl_midl_expr_format_string_t.start.hpp"
namespace win
{
    // [struct _acpickl_MIDL_EXPR_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpickl_midl_expr_format_string_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint8_t, 13> format;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Format
                                            
        SDK_MAGIC_PROPERTIES( "_acpickl_MIDL_EXPR_FORMAT_STRING.$", 0x14, true, 0x7ebfc1bbd22ff4f2 );       
        SDK_FIXED_SIZE( acpickl_midl_expr_format_string_t, 0x14 );       
    };                                      
};
#include "magic/acpickl_midl_expr_format_string_t.end.hpp"
SDK_VERIFY( struct win::acpickl_midl_expr_format_string_t, 0x14 );
