#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/rational_t.hpp"
#include "../../d3d/ddi/rotation_t.hpp"
#include "../../kuser/d3dddiformat_t.hpp"
#include "../describeallocationflags_t.hpp"
#include "../../d3d/ddi/multisamplingmethod_t.hpp"

#include "magic/describeallocation_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DESCRIBEALLOCATION]
    // => WDK 10 (NV)
    //
    struct describeallocation_t                                                     
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 void*                                  h_allocation;                     //{ +0x0000    } | .hAllocation
        _m01 uint32_t                               width;                            //{ +0x0008    } | .Width
        _m02 uint32_t                               height;                           //{ +0x000c    } | .Height
        _m03 enum kuser::d3dddiformat_t             format;                           //{ +0x0010    } | .Format
        _m04 struct d3d::ddi::multisamplingmethod_t multisample_method;               //{ +0x0014    } | .MultisampleMethod
        _m05 struct d3d::ddi::rational_t            refresh_rate;                     //{ +0x001c    } | .RefreshRate
        _m06 uint32_t                               private_driver_format_attribute;  //{ +0x0024    } | .PrivateDriverFormatAttribute
        _m07 struct dxgk::describeallocationflags_t flags;                            //{ +0x0028    } | .Flags
        _m08 enum d3d::ddi::rotation_t              rotation;                         //{ +0x002c    } | .Rotation
                                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DESCRIBEALLOCATION.$", 0x0, false, 0xba1b4572f6c49ba0 );                                
        SDK_FIXED_SIZE( describeallocation_t, 0x30 );                                
    };                                                                              
};
#include "magic/describeallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::describeallocation_t, 0x30 );
