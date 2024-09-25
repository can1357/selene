#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_context_switcher_t.start.hpp"
namespace win
{
    class c_object_context_t;

    // [class CContextSwitcher]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_context_switcher_t                      
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                          
        _m00 class win::c_object_context_t* context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._context
        _m01 int32_t                        c_refs;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cRefs
                                                    
        SDK_MAGIC_PROPERTIES( "CContextSwitcher.$", 0x18, true, 0xf4e030fa0823422b );        
        SDK_FIXED_SIZE( c_context_switcher_t, 0x18 );        
    };                                              
};
#include "magic/c_context_switcher_t.end.hpp"
SDK_VERIFY( class win::c_context_switcher_t, 0x18 );
