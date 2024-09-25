#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/splay_links_t.start.hpp"
namespace rtl
{
    struct splay_links_t;

    // [struct _RTL_SPLAY_LINKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct splay_links_t                            
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                          
        _m00 struct rtl::splay_links_t* parent;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Parent
        _m01 struct rtl::splay_links_t* left_child;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LeftChild
        _m02 struct rtl::splay_links_t* right_child;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RightChild
                                                    
        SDK_NONVOL_PROPERTIES( "_RTL_SPLAY_LINKS.$", 0x18, true, 0x17a7206750a1c2fc );            
        SDK_FIXED_SIZE( splay_links_t, 0x18 );            
    };                                              
};
#include "magic/splay_links_t.end.hpp"
SDK_VERIFY( struct rtl::splay_links_t, 0x18 );
