#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMDocumentFragment]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_document_fragment_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IXMLDOMDocumentFragment.$", 0x8, true, 0xef7ed663aa4255bb );
        SDK_FIXED_SIZE( ixmldom_document_fragment_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::ixmldom_document_fragment_t, 0x8 );
