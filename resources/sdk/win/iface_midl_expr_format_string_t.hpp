#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iface_midl_expr_format_string_t.start.hpp"
namespace win
{
    // [struct _iface_MIDL_EXPR_FORMAT_STRING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iface_midl_expr_format_string_t   
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 113> format;  //{ +0x0004    +0x0004    +0x0004    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_iface_MIDL_EXPR_FORMAT_STRING.$", 0x78, true, 0xcc279b6582b43a88 );       
        SDK_FIXED_SIZE( iface_midl_expr_format_string_t, 0x78 );       
    };                                       
};
#include "magic/iface_midl_expr_format_string_t.end.hpp"
SDK_VERIFY( struct win::iface_midl_expr_format_string_t, 0x78 );
