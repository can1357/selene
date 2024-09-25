#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/balanced_links_t.start.hpp"
namespace rtl
{
    struct balanced_links_t;

    // [struct _RTL_BALANCED_LINKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct balanced_links_t                            
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                             
        _m00 struct rtl::balanced_links_t* parent;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Parent
        _m01 struct rtl::balanced_links_t* left_child;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LeftChild
        _m02 struct rtl::balanced_links_t* right_child;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RightChild
        _m03 char                          balance;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Balance
                                                       
        SDK_NONVOL_PROPERTIES( "_RTL_BALANCED_LINKS.$", 0x20, true, 0x5df3d59d4155ad3a );            
        SDK_FIXED_SIZE( balanced_links_t, 0x20 );            
    };                                                 
};
#include "magic/balanced_links_t.end.hpp"
SDK_VERIFY( struct rtl::balanced_links_t, 0x20 );
