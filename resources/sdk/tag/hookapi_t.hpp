#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hookapi_t.start.hpp"
namespace tag
{
    struct hookapiex_t;

    // [struct tagHOOKAPI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hookapi_t                                    
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 const char*              psz_module;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszModule
        _m01 const char*              psz_function_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszFunctionName
        _m02 void*                    pfn_new;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnNew
        _m03 void*                    pfn_old;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnOld
        _m04 uint32_t                 dw_flags;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFlags
        _m05 struct tag::hookapiex_t* p_hook_ex;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pHookEx
                                                        
        SDK_MAGIC_PROPERTIES( "tagHOOKAPI.$", 0x30, true, 0x3e89247e981013ed );                  
        SDK_FIXED_SIZE( hookapi_t, 0x30 );                  
    };                                                  
};
#include "magic/hookapi_t.end.hpp"
SDK_VERIFY( struct tag::hookapi_t, 0x30 );
