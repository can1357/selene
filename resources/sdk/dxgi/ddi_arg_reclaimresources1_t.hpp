#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3d/ddi/reclaim_result_t.hpp"

#include "magic/ddi_arg_reclaimresources1_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_RECLAIMRESOURCES1]
    // => WDK 10 (NV)
    //
    struct ddi_arg_reclaimresources1_t                    
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint64_t                         h_device;     //{ +0x0000    } | .hDevice
        _m01 const uint64_t*                  p_resources;  //{ +0x0008    } | .pResources
        _m02 enum d3d::ddi::reclaim_result_t* p_results;    //{ +0x0010    } | .pResults
        _m03 uint32_t                         resources;    //{ +0x0018    } | .Resources
                                                          
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_RECLAIMRESOURCES1.$", 0x0, false, 0xdc95a6ff2c82bb3a );            
        SDK_FIXED_SIZE( ddi_arg_reclaimresources1_t, 0x20 );            
    };                                                    
};
#include "magic/ddi_arg_reclaimresources1_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_reclaimresources1_t, 0x20 );
