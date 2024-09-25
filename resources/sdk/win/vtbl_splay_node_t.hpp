#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/splay_links_t.hpp"

#include "magic/vtbl_splay_node_t.start.hpp"
namespace win
{
    // [struct VtblSplayNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vtbl_splay_node_t                       
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                         
        _m00 struct rtl::splay_links_t splay_links;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SplayLinks
        _m01 void*                     pv_vtbl;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvVtbl
        _m02 uint32_t                  c_refs;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cRefs
                                                   
        SDK_MAGIC_PROPERTIES( "VtblSplayNode.$", 0x28, true, 0xebead8cbfc428f3c );            
        SDK_FIXED_SIZE( vtbl_splay_node_t, 0x28 );            
    };                                             
};
#include "magic/vtbl_splay_node_t.end.hpp"
SDK_VERIFY( struct win::vtbl_splay_node_t, 0x28 );
