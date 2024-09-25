#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hookapiex_t.start.hpp"
namespace tag
{
    struct hookapi_t;

    // [struct tagHOOKAPIEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hookapiex_t                                      
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 uint32_t               dw_hookset_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwHooksetId
        _m01 const char*            psz_redir_module;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszRedirModule
        _m02 const char*            psz_redir_function_name;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pszRedirFunctionName
        _m03 void*                  p_final_module;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pFinalModule
        _m04 void*                  pfn_final;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pfnFinal
        _m05 int32_t                b_stub;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .bStub
        _m06 void*                  p_stub_module;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pStubModule
        _m07 void*                  pfn_stub;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pfnStub
        _m08 struct tag::hookapi_t* p_top_of_chain;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pTopOfChain
        _m09 struct tag::hookapi_t* p_next;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pNext
                                                            
        SDK_MAGIC_PROPERTIES( "tagHOOKAPIEX.$", 0x50, true, 0x9e67df0d7a6799f3 );                        
        SDK_FIXED_SIZE( hookapiex_t, 0x50 );                        
    };                                                      
};
#include "magic/hookapiex_t.end.hpp"
SDK_VERIFY( struct tag::hookapiex_t, 0x50 );
