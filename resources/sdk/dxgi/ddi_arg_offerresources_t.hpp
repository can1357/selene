#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3d/ddi/offer_priority_t.hpp"

#include "magic/ddi_arg_offerresources_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_OFFERRESOURCES]
    // => WDK 10 (NV)
    //
    struct ddi_arg_offerresources_t                      
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint64_t                        h_device;     //{ +0x0000    } | .hDevice
        _m01 const uint64_t*                 p_resources;  //{ +0x0008    } | .pResources
        _m02 uint32_t                        resources;    //{ +0x0010    } | .Resources
        _m03 enum d3d::ddi::offer_priority_t priority;     //{ +0x0014    } | .Priority
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_OFFERRESOURCES.$", 0x0, false, 0x9111f7a76f045da6 );            
        SDK_FIXED_SIZE( ddi_arg_offerresources_t, 0x18 );            
    };                                                   
};
#include "magic/ddi_arg_offerresources_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_offerresources_t, 0x18 );
