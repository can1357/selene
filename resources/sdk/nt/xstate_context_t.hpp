#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xstate_context_t.start.hpp"
namespace nt
{
    struct xsave_area_t;

    // [struct _XSTATE_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xstate_context_t                  
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 uint64_t                 mask;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Mask
        _m01 uint32_t                 length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m02 struct nt::xsave_area_t* area;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Area
        _m03 void*                    buffer;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Buffer
                                             
        SDK_NONVOL_PROPERTIES( "_XSTATE_CONTEXT.$", 0x20, true, 0x44e719297116f4a2 );       
        SDK_FIXED_SIZE( xstate_context_t, 0x20 );       
    };                                       
};
#include "magic/xstate_context_t.end.hpp"
SDK_VERIFY( struct nt::xstate_context_t, 0x20 );
