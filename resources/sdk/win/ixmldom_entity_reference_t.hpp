#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMEntityReference]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_entity_reference_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IXMLDOMEntityReference.$", 0x8, true, 0xc01a6afb4244b635 );
        SDK_FIXED_SIZE( ixmldom_entity_reference_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::ixmldom_entity_reference_t, 0x8 );
