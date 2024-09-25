#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querygpummucapsin_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYGPUMMUCAPSIN]
    // => WDK 10 (NV)
    //
    struct querygpummucapsin_t               
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYGPUMMUCAPSIN.$", 0x0, false, 0x9e1239ee3d6e3985 );                       
        SDK_FIXED_SIZE( querygpummucapsin_t, 0x4 );                       
    };                                       
};
#include "magic/querygpummucapsin_t.end.hpp"
SDK_VERIFY( struct dxgk::querygpummucapsin_t, 0x4 );
