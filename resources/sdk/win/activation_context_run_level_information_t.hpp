#pragma once
#include <sdkgen/support_library.hpp>
#include "actctx_requested_run_level_t.hpp"

#include "magic/activation_context_run_level_information_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_run_level_information_t         
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                    
        _m00 uint32_t                               ul_flags;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulFlags
        _m01 enum win::actctx_requested_run_level_t run_level;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RunLevel
        _m02 uint32_t                               ui_access;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UiAccess
                                                              
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION.$", 0xc, true, 0x1d810710723167c6 );          
        SDK_FIXED_SIZE( activation_context_run_level_information_t, 0xc );          
    };                                                        
};
#include "magic/activation_context_run_level_information_t.end.hpp"
SDK_VERIFY( struct win::activation_context_run_level_information_t, 0xc );
