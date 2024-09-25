#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/clientcreatestruct_t.start.hpp"
namespace tag
{
    // [struct tagCLIENTCREATESTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct clientcreatestruct_t      
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    h_window_menu;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hWindowMenu
        _m01 uint32_t id_first_child;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .idFirstChild
                                     
        SDK_MAGIC_PROPERTIES( "tagCLIENTCREATESTRUCT.$", 0x10, true, 0x3d61211d7fc0103b );               
        SDK_FIXED_SIZE( clientcreatestruct_t, 0x10 );               
    };                               
};
#include "magic/clientcreatestruct_t.end.hpp"
SDK_VERIFY( struct tag::clientcreatestruct_t, 0x10 );
