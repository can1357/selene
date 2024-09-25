#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMDocumentType]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_document_type_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IXMLDOMDocumentType.$", 0x8, true, 0x7e8503effb06c14a );
        SDK_FIXED_SIZE( ixmldom_document_type_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::ixmldom_document_type_t, 0x8 );
