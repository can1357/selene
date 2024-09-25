#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3d/ddi/offer_flags_t.hpp"
#include "../d3d/ddi/offer_priority_t.hpp"

#include "magic/ddi_arg_offerresources1_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_OFFERRESOURCES1]
    // => WDK 10 (NV)
    //
    struct ddi_arg_offerresources1_t                     
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint64_t                        h_device;     //{ +0x0000    } | .hDevice
        _m01 const uint64_t*                 p_resources;  //{ +0x0008    } | .pResources
        _m02 uint32_t                        resources;    //{ +0x0010    } | .Resources
        _m03 enum d3d::ddi::offer_priority_t priority;     //{ +0x0014    } | .Priority
        _m04 struct d3d::ddi::offer_flags_t  flags;        //{ +0x0018    } | .Flags
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_OFFERRESOURCES1.$", 0x0, false, 0x27c60d8174dd074f );            
        SDK_FIXED_SIZE( ddi_arg_offerresources1_t, 0x20 );            
    };                                                   
};
#include "magic/ddi_arg_offerresources1_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_offerresources1_t, 0x20 );
