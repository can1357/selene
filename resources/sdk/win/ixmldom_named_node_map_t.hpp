#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMNamedNodeMap]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_named_node_map_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IXMLDOMNamedNodeMap.$", 0x8, true, 0x7277000db9f81cf4 );
        SDK_FIXED_SIZE( ixmldom_named_node_map_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::ixmldom_named_node_map_t, 0x8 );
