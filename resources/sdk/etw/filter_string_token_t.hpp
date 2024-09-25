#pragma once
#include <sdkgen/support_library.hpp>
#include "filter_string_token_element_t.hpp"

#include "magic/filter_string_token_t.start.hpp"
namespace etw
{
    // [struct _ETW_FILTER_STRING_TOKEN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_string_token_t
    {                           
        using tokens_t = sdk::array<struct etw::filter_string_token_element_t, 1>;       
                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                    
        _m00 uint16_t  count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 tokens_t  tokens;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tokens
                                
        SDK_MAGIC_PROPERTIES( "_ETW_FILTER_STRING_TOKEN.$", 0x18, true, 0x1d5a36a984700b68 );       
        SDK_FIXED_SIZE( filter_string_token_t, 0x18 );       
    };                          
};
#include "magic/filter_string_token_t.end.hpp"
SDK_VERIFY( struct etw::filter_string_token_t, 0x18 );
