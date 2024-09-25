#pragma once
#include <sdkgen/support_library.hpp>
#include "c_interface_proxy_header_t.hpp"

#include "magic/c_interface_proxy_vtbl_t.start.hpp"
namespace tag
{
    // [struct tagCInterfaceProxyVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_interface_proxy_vtbl_t                        
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                 
        _m00 struct tag::c_interface_proxy_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 sdk::array<void*>                      vtbl;    //{ +0x0008    +0x0008    +0x0010    +0x0008    } | .Vtbl
                                                           
        SDK_MAGIC_PROPERTIES( "tagCInterfaceProxyVtbl.$", 0x8, true, 0x201e2171aeb8f4f5 );       
        SDK_DYNAMIC_SIZE( c_interface_proxy_vtbl_t );       
    };                                                     
};
#include "magic/c_interface_proxy_vtbl_t.end.hpp"
