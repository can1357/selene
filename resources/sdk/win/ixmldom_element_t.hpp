#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMElement]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_element_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IXMLDOMElement.$", 0x8, true, 0x4ab31188b6ed2d1a );
        SDK_FIXED_SIZE( ixmldom_element_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::ixmldom_element_t, 0x8 );
