#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_residency_t.hpp"

#include "magic/ddi_arg_queryresourceresidency_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_QUERYRESOURCERESIDENCY]
    // => WDK 10 (NV)
    //
    struct ddi_arg_queryresourceresidency_t          
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint64_t                    h_device;     //{ +0x0000    } | .hDevice
        _m01 const uint64_t*             p_resources;  //{ +0x0008    } | .pResources
        _m02 enum dxgi::ddi_residency_t* p_status;     //{ +0x0010    } | .pStatus
        _m03 uint64_t                    resources;    //{ +0x0018    } | .Resources
                                                     
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_QUERYRESOURCERESIDENCY.$", 0x0, false, 0x8582848c425a8134 );            
        SDK_FIXED_SIZE( ddi_arg_queryresourceresidency_t, 0x20 );            
    };                                               
};
#include "magic/ddi_arg_queryresourceresidency_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_queryresourceresidency_t, 0x20 );
