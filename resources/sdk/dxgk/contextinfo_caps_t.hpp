#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/contextinfo_caps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CONTEXTINFO_CAPS]
    // => WDK 10 (NV)
    //
    struct contextinfo_caps_t                  
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint1_t  no_patching_required;      //{ +0x0000@0  } | .NoPatchingRequired
        _m01 uint1_t  driver_manages_residency;  //{ +0x0000@1  } | .DriverManagesResidency
        _m02 uint1_t  use_io_mmu;                //{ +0x0000@2  } | .UseIoMmu
        _m03 uint32_t value;                     //{ +0x0000    } | .Value
                                               
        SDK_NONVOL_PROPERTIES( "_DXGK_CONTEXTINFO_CAPS.$", 0x0, false, 0xf625cb08ddb99260 );                         
        SDK_FIXED_SIZE( contextinfo_caps_t, 0x4 );                         
    };                                         
};
#include "magic/contextinfo_caps_t.end.hpp"
SDK_VERIFY( struct dxgk::contextinfo_caps_t, 0x4 );
