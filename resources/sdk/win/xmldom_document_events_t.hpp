#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct XMLDOMDocumentEvents]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xmldom_document_events_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "XMLDOMDocumentEvents.$", 0x8, true, 0xe9696dd3a3fee914 );
        SDK_FIXED_SIZE( xmldom_document_events_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::xmldom_document_events_t, 0x8 );
