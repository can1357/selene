#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sr_cache_expand_macros_evaluator_t.start.hpp"
namespace win
{
    // [struct _SRCache_ExpandMacros_Evaluator]
    // => Windows 11
    //
    struct sr_cache_expand_macros_evaluator_t                        
    {                                                                
        // Windows 11                                                
        //                                                           
        _m00 const wchar_t*                                 name;      //{ +0x0000    } | .Name
        _m01 sdk::function<sdk::hresult(void*, wchar_t**)>* evaluate;  //{ +0x0008    } | .Evaluate
                                                                     
        SDK_MAGIC_PROPERTIES( "_SRCache_ExpandMacros_Evaluator.$", 0x0, false, 0x14468c795d2bba55 );         
        SDK_FIXED_SIZE( sr_cache_expand_macros_evaluator_t, 0x10 );         
    };                                                               
};
#include "magic/sr_cache_expand_macros_evaluator_t.end.hpp"
SDK_VERIFY( struct win::sr_cache_expand_macros_evaluator_t, 0x10 );
