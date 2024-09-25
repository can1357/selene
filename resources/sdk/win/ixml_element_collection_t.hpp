#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLElementCollection]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixml_element_collection_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IXMLElementCollection.$", 0x8, true, 0xc97028e1971e2e3e );
        SDK_FIXED_SIZE( ixml_element_collection_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::ixml_element_collection_t, 0x8 );
