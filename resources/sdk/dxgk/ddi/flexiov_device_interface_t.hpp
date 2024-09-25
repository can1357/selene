#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::arg { struct getbackingresource_t; }
namespace dxgk::arg { struct getmmiorangecount_t;  }
namespace dxgk::arg { struct getmmioranges_t;      }

#include "magic/flexiov_device_interface_t.start.hpp"
namespace dxgk::ddi
{
    // [struct _DXGKDDI_FLEXIOV_DEVICE_INTERFACE]
    // => WDK 10 (NV)
    //
    struct flexiov_device_interface_t                                     
    {                                                                     
        using pdxgkddi_getbackingresource_t = sdk::function<int32_t(void*, struct dxgk::arg::getbackingresource_t*)>*;                              
        using pdxgkddi_getmmiorangecount_t =  sdk::function<int32_t(void*, struct dxgk::arg::getmmiorangecount_t*)>*;                              
        using pdxgkddi_getmmioranges_t =      sdk::function<int32_t(void*, struct dxgk::arg::getmmioranges_t*)>*;                              
                                                                          
        // WDK 10                                                         
        //                                                                
        _m00 uint16_t                       size;                           //{ +0x0000    } | .Size
        _m01 uint16_t                       version;                        //{ +0x0002    } | .Version
        _m02 void*                          context;                        //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*    interface_reference;            //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*    interface_dereference;          //{ +0x0018    } | .InterfaceDereference
        _m05 pdxgkddi_getbackingresource_t  dxgk_ddi_get_backing_resource;  //{ +0x0020    } | .DxgkDdiGetBackingResource
        _m06 pdxgkddi_getmmiorangecount_t   dxgk_ddi_get_mmio_range_count;  //{ +0x0028    } | .DxgkDdiGetMmioRangeCount
        _m07 pdxgkddi_getmmioranges_t       dxgk_ddi_get_mmio_ranges;       //{ +0x0030    } | .DxgkDdiGetMmioRanges
                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGKDDI_FLEXIOV_DEVICE_INTERFACE.$", 0x0, false, 0x9d9e990f0a6a4936 );                              
        SDK_FIXED_SIZE( flexiov_device_interface_t, 0x38 );                              
    };                                                                    
};
#include "magic/flexiov_device_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::ddi::flexiov_device_interface_t, 0x38 );
