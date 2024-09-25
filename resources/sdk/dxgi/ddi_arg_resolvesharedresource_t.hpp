#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_resolvesharedresource_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_RESOLVESHAREDRESOURCE]
    // => WDK 10 (NV)
    //
    struct ddi_arg_resolvesharedresource_t
    {                                     
        // WDK 10                
        //                       
        _m00 uint64_t h_device;             //{ +0x0000    } | .hDevice
        _m01 uint64_t h_resource;           //{ +0x0008    } | .hResource
                                          
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_RESOLVESHAREDRESOURCE.$", 0x0, false, 0x8fa0f306fb93e022 );           
        SDK_FIXED_SIZE( ddi_arg_resolvesharedresource_t, 0x10 );           
    };                                    
};
#include "magic/ddi_arg_resolvesharedresource_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_resolvesharedresource_t, 0x10 );
