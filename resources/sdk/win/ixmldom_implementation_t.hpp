#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMImplementation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_implementation_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IXMLDOMImplementation.$", 0x8, true, 0x24f8c8a44f77c958 );
        SDK_FIXED_SIZE( ixmldom_implementation_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::ixmldom_implementation_t, 0x8 );
