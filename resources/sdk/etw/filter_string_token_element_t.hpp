#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filter_string_token_element_t.start.hpp"
namespace etw
{
    // [struct _ETW_FILTER_STRING_TOKEN_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_string_token_element_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t length;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 wchar_t* string;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .String
                                        
        SDK_MAGIC_PROPERTIES( "_ETW_FILTER_STRING_TOKEN_ELEMENT.$", 0x10, true, 0x39947247bcf24026 );       
        SDK_FIXED_SIZE( filter_string_token_element_t, 0x10 );       
    };                                  
};
#include "magic/filter_string_token_element_t.end.hpp"
SDK_VERIFY( struct etw::filter_string_token_element_t, 0x10 );
