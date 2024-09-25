#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/as_pre_veto_t.start.hpp"
namespace wdf
{
    // [struct _AsPreVeto]
    // => Windows 11
    //
    struct as_pre_veto_t                  
    {                                     
        // Windows 11                     
        //                                
        _m00 uint32_t pre_veto_signature;   //{ +0x0000    } | .PreVetoSignature
        _m01 uint16_t platform_idle_state;  //{ +0x0004    } | .PlatformIdleState
        _m02 uint32_t veto_code;            //{ +0x0008    } | .VetoCode
                                          
        SDK_MAGIC_PROPERTIES( "_AsPreVeto.$", 0x0, false, 0x4d4bc1312745c902 );                    
        SDK_FIXED_SIZE( as_pre_veto_t, 0x10 );                    
    };                                    
};
#include "magic/as_pre_veto_t.end.hpp"
SDK_VERIFY( struct wdf::as_pre_veto_t, 0x10 );
