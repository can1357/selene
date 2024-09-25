#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLElement2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixml_element2_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IXMLElement2.$", 0x8, true, 0x58a11f8ed630929f );
        SDK_FIXED_SIZE( ixml_element2_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::ixml_element2_t, 0x8 );
