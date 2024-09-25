#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMComment]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_comment_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IXMLDOMComment.$", 0x8, true, 0x13f71117e9285192 );
        SDK_FIXED_SIZE( ixmldom_comment_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::ixmldom_comment_t, 0x8 );
