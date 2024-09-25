#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::arg { struct querymitigatedrangecount_t; }
namespace dxgk::arg { struct querymitigatedranges_t;     }

#include "magic/mitigable_device_interface_t.start.hpp"
namespace dxgk::ddi
{
    // [struct _DXGKDDI_MITIGABLE_DEVICE_INTERFACE]
    // => WDK 10 (NV)
    //
    struct mitigable_device_interface_t                                                
    {                                                                                  
        using pdxgkddi_querymitigatedrangecount_t = sdk::function<void(void*, struct dxgk::arg::querymitigatedrangecount_t*)>*;                                     
        using pdxgkddi_querymitigatedranges_t =     sdk::function<int32_t(void*, struct dxgk::arg::querymitigatedranges_t*)>*;                                     
                                                                                       
        // WDK 10                                                                      
        //                                                                             
        _m00 uint16_t                             size;                                  //{ +0x0000    } | .Size
        _m01 uint16_t                             version;                               //{ +0x0002    } | .Version
        _m02 void*                                context;                               //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*          interface_reference;                   //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*          interface_dereference;                 //{ +0x0018    } | .InterfaceDereference
        _m05 pdxgkddi_querymitigatedrangecount_t  dxgk_ddi_query_mitigated_range_count;  //{ +0x0020    } | .DxgkDdiQueryMitigatedRangeCount
        _m06 pdxgkddi_querymitigatedranges_t      dxgk_ddi_query_mitigated_ranges;       //{ +0x0028    } | .DxgkDdiQueryMitigatedRanges
                                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKDDI_MITIGABLE_DEVICE_INTERFACE.$", 0x0, false, 0xc45902f07e46943e );                                     
        SDK_FIXED_SIZE( mitigable_device_interface_t, 0x30 );                                     
    };                                                                                 
};
#include "magic/mitigable_device_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::ddi::mitigable_device_interface_t, 0x30 );
