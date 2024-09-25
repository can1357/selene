#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMParseError]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_parse_error_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IXMLDOMParseError.$", 0x8, true, 0xe8c4697cec451be5 );
        SDK_FIXED_SIZE( ixmldom_parse_error_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::ixmldom_parse_error_t, 0x8 );
