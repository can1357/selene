#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct i_initialize_spy_t; }

#include "magic/initialize_spy_node_t.start.hpp"
namespace tag
{
    struct initialize_spy_node_t;

    // [struct tagInitializeSpyNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct initialize_spy_node_t                           
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                 
        _m00 struct tag::initialize_spy_node_t* p_next;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 struct tag::initialize_spy_node_t* p_prev;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pPrev
        _m02 uint32_t                           dw_refs;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwRefs
        _m03 uint32_t                           dw_cookie;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwCookie
        _m04 struct win::i_initialize_spy_t*    p_init_spy;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pInitSpy
                                                           
        SDK_MAGIC_PROPERTIES( "tagInitializeSpyNode.$", 0x20, true, 0x632c70537447ae2 );           
        SDK_FIXED_SIZE( initialize_spy_node_t, 0x20 );           
    };                                                     
};
#include "magic/initialize_spy_node_t.end.hpp"
SDK_VERIFY( struct tag::initialize_spy_node_t, 0x20 );
