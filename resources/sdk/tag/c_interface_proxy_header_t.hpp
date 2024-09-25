#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/c_interface_proxy_header_t.start.hpp"
namespace tag
{
    // [struct tagCInterfaceProxyHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_interface_proxy_header_t      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                 
        _m00 const struct nt::guid_t* piid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .piid
                                           
        SDK_MAGIC_PROPERTIES( "tagCInterfaceProxyHeader.$", 0x8, true, 0x21cef125a4d92936 );     
        SDK_FIXED_SIZE( c_interface_proxy_header_t, 0x8 );     
    };                                     
};
#include "magic/c_interface_proxy_header_t.end.hpp"
SDK_VERIFY( struct tag::c_interface_proxy_header_t, 0x8 );
