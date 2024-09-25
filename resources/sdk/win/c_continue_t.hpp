#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_continue_t.start.hpp"
namespace win
{
    // [class CContinue]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_continue_t                                     
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                 
        _m00 int32_t                          c_ref;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRef
        _m01 sdk::function<int32_t(int64_t)>* pfn_continue;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pfnContinue
        _m02 int64_t                          dw_continue;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._dwContinue
                                                           
        SDK_MAGIC_PROPERTIES( "CContinue.$", 0x20, true, 0xba01a1d59bb91a3e );             
        SDK_FIXED_SIZE( c_continue_t, 0x20 );              
    };                                                     
};
#include "magic/c_continue_t.end.hpp"
SDK_VERIFY( class win::c_continue_t, 0x20 );
