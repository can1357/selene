#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hmenu_t; }

#include "magic/menugetobjectinfo_t.start.hpp"
namespace tag
{
    // [struct tagMENUGETOBJECTINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct menugetobjectinfo_t             
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                 
        _m00 uint32_t             dw_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t             u_pos;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uPos
        _m02 struct win::hmenu_t* hmenu;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hmenu
        _m03 void*                riid;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .riid
        _m04 void*                pv_obj;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvObj
                                           
        SDK_MAGIC_PROPERTIES( "tagMENUGETOBJECTINFO.$", 0x20, true, 0xb111b52bef73c83a );         
        SDK_FIXED_SIZE( menugetobjectinfo_t, 0x20 );         
    };                                     
};
#include "magic/menugetobjectinfo_t.end.hpp"
SDK_VERIFY( struct tag::menugetobjectinfo_t, 0x20 );
