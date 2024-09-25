#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tl_t.start.hpp"
namespace kuser
{
    struct tl_t;

    // [struct _TL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tl_t                                   
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                        
        _m00 struct kuser::tl_t*         next;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .next
        _m01 void*                       pobj;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pobj
        _m02 sdk::function<void(void*)>* pfn_free;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnFree
                                                  
        SDK_MAGIC_PROPERTIES( "_TL.$", 0x18, true, 0xc3d77ed38bcc83ec );         
        SDK_FIXED_SIZE( tl_t, 0x18 );             
    };                                            
};
#include "magic/tl_t.end.hpp"
SDK_VERIFY( struct kuser::tl_t, 0x18 );
