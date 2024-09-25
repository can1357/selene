#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_node_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IXMLDOMNode.$", 0x8, true, 0x28dd0fc8f7372754 );
        SDK_FIXED_SIZE( ixmldom_node_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::ixmldom_node_t, 0x8 );
