#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMNodeList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_node_list_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IXMLDOMNodeList.$", 0x8, true, 0x5348f795f3032d74 );
        SDK_FIXED_SIZE( ixmldom_node_list_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::ixmldom_node_list_t, 0x8 );
