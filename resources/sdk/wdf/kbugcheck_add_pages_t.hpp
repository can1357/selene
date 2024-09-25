#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kbugcheck_add_pages_t.start.hpp"
namespace wdf
{
    // [struct _KBUGCHECK_ADD_PAGES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kbugcheck_add_pages_t     
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    context;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Context
        _m01 uint32_t flags;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint32_t bug_check_code;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .BugCheckCode
        _m03 uint64_t address;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Address
        _m04 uint64_t count;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Count
                                     
        SDK_NONVOL_PROPERTIES( "_KBUGCHECK_ADD_PAGES.$", 0x20, true, 0x3c8a2d3f2ebdc4c0 );               
        SDK_FIXED_SIZE( kbugcheck_add_pages_t, 0x20 );               
    };                               
};
#include "magic/kbugcheck_add_pages_t.end.hpp"
SDK_VERIFY( struct wdf::kbugcheck_add_pages_t, 0x20 );
