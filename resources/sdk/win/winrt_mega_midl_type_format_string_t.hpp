#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/winrt_mega_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _winrt_mega_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct winrt_mega_midl_type_format_string_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 133> format;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                               
        SDK_MAGIC_PROPERTIES( "_winrt_mega_MIDL_TYPE_FORMAT_STRING.$", 0x88, true, 0x3c58502e0714213e );       
        SDK_FIXED_SIZE( winrt_mega_midl_type_format_string_t, 0x88 );       
    };                                         
};
#include "magic/winrt_mega_midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::winrt_mega_midl_type_format_string_t, 0x88 );
