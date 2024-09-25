#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_reclaimresources_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_RECLAIMRESOURCES]
    // => WDK 10 (NV)
    //
    struct ddi_arg_reclaimresources_t    
    {                                    
        // WDK 10                        
        //                               
        _m00 uint64_t        h_device;     //{ +0x0000    } | .hDevice
        _m01 const uint64_t* p_resources;  //{ +0x0008    } | .pResources
        _m02 int32_t*        p_discarded;  //{ +0x0010    } | .pDiscarded
        _m03 uint32_t        resources;    //{ +0x0018    } | .Resources
                                         
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_RECLAIMRESOURCES.$", 0x0, false, 0x3277bf19a3f1545a );            
        SDK_FIXED_SIZE( ddi_arg_reclaimresources_t, 0x20 );            
    };                                   
};
#include "magic/ddi_arg_reclaimresources_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_reclaimresources_t, 0x20 );
