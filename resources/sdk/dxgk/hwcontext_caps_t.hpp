#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hwcontext_caps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_HWCONTEXT_CAPS]
    // => WDK 10 (NV)
    //
    struct hwcontext_caps_t      
    {                            
        // WDK 10                
        //                       
        _m00 uint1_t  use_io_mmu;  //{ +0x0000@0  } | .UseIoMmu
        _m01 uint32_t value;       //{ +0x0000    } | .Value
                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_HWCONTEXT_CAPS.$", 0x0, false, 0xca6d116350620c9f );           
        SDK_FIXED_SIZE( hwcontext_caps_t, 0x4 );           
    };                           
};
#include "magic/hwcontext_caps_t.end.hpp"
SDK_VERIFY( struct dxgk::hwcontext_caps_t, 0x4 );
