#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/patch_main_callout_params_t.start.hpp"
namespace win
{
    // [struct _PATCH_MAIN_CALLOUT_PARAMS]
    // => Windows 11
    //
    struct patch_main_callout_params_t
    {                                 
        // Windows 11             
        //                        
        _m00 uint32_t version;          //{ +0x0000    } | .Version
        _m01 uint32_t patch_phase;      //{ +0x0004    } | .PatchPhase
        _m02 uint32_t flags;            //{ +0x0008    } | .Flags
                                      
        SDK_MAGIC_PROPERTIES( "_PATCH_MAIN_CALLOUT_PARAMS.$", 0x0, false, 0xc5af78d2ca58778c );            
        SDK_FIXED_SIZE( patch_main_callout_params_t, 0xc );            
    };                                
};
#include "magic/patch_main_callout_params_t.end.hpp"
SDK_VERIFY( struct win::patch_main_callout_params_t, 0xc );
