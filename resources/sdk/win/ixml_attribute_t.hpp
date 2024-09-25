#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLAttribute]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixml_attribute_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IXMLAttribute.$", 0x8, true, 0x90abb9ae03394bbb );
        SDK_FIXED_SIZE( ixml_attribute_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::ixml_attribute_t, 0x8 );
