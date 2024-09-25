#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_callback_context_cleanup_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_callback_context_cleanup_information_t
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* object;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 void* object_context;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectContext
                                                     
        SDK_NONVOL_PROPERTIES( "_REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION.$", 0x18, true, 0x1195eb8d64aa3190 );               
        SDK_FIXED_SIZE( reg_callback_context_cleanup_information_t, 0x18 );               
    };                                               
};
#include "magic/reg_callback_context_cleanup_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_callback_context_cleanup_information_t, 0x18 );
