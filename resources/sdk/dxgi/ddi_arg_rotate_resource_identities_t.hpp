#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_rotate_resource_identities_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES]
    // => WDK 10 (NV)
    //
    struct ddi_arg_rotate_resource_identities_t
    {                                          
        // WDK 10                        
        //                               
        _m00 uint64_t        h_device;           //{ +0x0000    } | .hDevice
        _m01 const uint64_t* p_resources;        //{ +0x0008    } | .pResources
        _m02 uint32_t        resources;          //{ +0x0010    } | .Resources
                                               
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES.$", 0x0, false, 0x3ee25dc6edd2ccee );            
        SDK_FIXED_SIZE( ddi_arg_rotate_resource_identities_t, 0x18 );            
    };                                         
};
#include "magic/ddi_arg_rotate_resource_identities_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_rotate_resource_identities_t, 0x18 );
