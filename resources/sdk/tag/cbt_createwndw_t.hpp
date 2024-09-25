#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/cbt_createwndw_t.start.hpp"
namespace tag
{
    struct createstructw_t;

    // [struct tagCBT_CREATEWNDW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cbt_createwndw_t                                 
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                  
        _m00 struct tag::createstructw_t* lpcs;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpcs
        _m01 struct win::hwnd_t*          hwnd_insert_after;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndInsertAfter
                                                            
        SDK_MAGIC_PROPERTIES( "tagCBT_CREATEWNDW.$", 0x10, true, 0xa6e1795ec172456c );                  
        SDK_FIXED_SIZE( cbt_createwndw_t, 0x10 );                  
    };                                                      
};
#include "magic/cbt_createwndw_t.end.hpp"
SDK_VERIFY( struct tag::cbt_createwndw_t, 0x10 );
