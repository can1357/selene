#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDocument]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixml_document_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IXMLDocument.$", 0x8, true, 0x43be297f41e87cd7 );
        SDK_FIXED_SIZE( ixml_document_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::ixml_document_t, 0x8 );
