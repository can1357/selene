#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDocument2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixml_document2_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IXMLDocument2.$", 0x8, true, 0xaa3126f0aa6b2a0e );
        SDK_FIXED_SIZE( ixml_document2_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::ixml_document2_t, 0x8 );
