#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLElement]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixml_element_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IXMLElement.$", 0x8, true, 0x58cd8b1eb8c789cb );
        SDK_FIXED_SIZE( ixml_element_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::ixml_element_t, 0x8 );
