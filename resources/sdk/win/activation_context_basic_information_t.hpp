#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct activation_context_t; }

#include "magic/activation_context_basic_information_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_basic_information_t                
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                       
        _m00 struct nt::activation_context_t* activation_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ActivationContext
        _m01 void*                            h_act_ctx;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hActCtx
        _m02 uint32_t                         flags;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t                         dw_flags;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlags
                                                                 
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_BASIC_INFORMATION.$", 0x10, true, 0x2f42460309c729dd );                   
        SDK_FIXED_SIZE( activation_context_basic_information_t, 0x10 );                   
    };                                                           
};
#include "magic/activation_context_basic_information_t.end.hpp"
SDK_VERIFY( struct win::activation_context_basic_information_t, 0x10 );
