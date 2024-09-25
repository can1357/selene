#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lclor_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _lclor_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lclor_midl_type_format_string_t   
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 889> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_lclor_MIDL_TYPE_FORMAT_STRING.$", 0x496, true, 0x800d06222b242aac );       
        SDK_DYNAMIC_SIZE( lclor_midl_type_format_string_t );       
    };                                       
};
#include "magic/lclor_midl_type_format_string_t.end.hpp"
