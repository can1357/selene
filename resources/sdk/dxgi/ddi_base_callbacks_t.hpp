#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi::ddi::cb { struct present_multiplane_overlay1_t; }
namespace dxgi::ddi::cb { struct present_multiplane_overlay_t;  }
namespace dxgi::ddi::cb { struct present_t;                     }
namespace dxgi::ddi::cb { struct submitpresentblttohwqueue_t;   }
namespace dxgi::ddi::cb { struct submitpresenttohwqueue_t;      }

#include "magic/ddi_base_callbacks_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_BASE_CALLBACKS]
    // => WDK 10 (NV)
    //
    struct ddi_base_callbacks_t                                                                 
    {                                                                                           
        using pfnddxgiddi_presentcb_t =                     sdk::function<sdk::hresult(void*, struct dxgi::ddi::cb::present_t*)>*;                                      
        using pfnddxgiddi_present_multiplane_overlaycb_t =  sdk::function<sdk::hresult(void*, const struct dxgi::ddi::cb::present_multiplane_overlay_t*)>*;                                      
        using pfnddxgiddi_present_multiplane_overlay1cb_t = sdk::function<sdk::hresult(void*, const struct dxgi::ddi::cb::present_multiplane_overlay1_t*)>*;                                      
        using pfnddxgiddi_submitpresentblttohwqueuecb_t =   sdk::function<sdk::hresult(void*, struct dxgi::ddi::cb::submitpresentblttohwqueue_t*)>*;                                      
        using pfnddxgiddi_submitpresenttohwqueuecb_t =      sdk::function<sdk::hresult(void*, struct dxgi::ddi::cb::submitpresenttohwqueue_t*)>*;                                      
                                                                                                
        // WDK 10                                                                               
        //                                                                                      
        _m00 pfnddxgiddi_presentcb_t                      pfn_present_cb;                         //{ +0x0000    } | .pfnPresentCb
        _m01 pfnddxgiddi_present_multiplane_overlaycb_t   pfn_present_multiplane_overlay_cb;      //{ +0x0008    } | .pfnPresentMultiplaneOverlayCb
        _m02 pfnddxgiddi_present_multiplane_overlay1cb_t  pfn_present_multiplane_overlay1_cb;     //{ +0x0010    } | .pfnPresentMultiplaneOverlay1Cb
        _m03 pfnddxgiddi_submitpresentblttohwqueuecb_t    pfn_submit_present_blt_to_hw_queue_cb;  //{ +0x0018    } | .pfnSubmitPresentBltToHwQueueCb
        _m04 pfnddxgiddi_submitpresenttohwqueuecb_t       pfn_submit_present_to_hw_queue_cb;      //{ +0x0020    } | .pfnSubmitPresentToHwQueueCb
                                                                                                
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_BASE_CALLBACKS.$", 0x0, false, 0x8fe0111920dd8368 );                                      
        SDK_FIXED_SIZE( ddi_base_callbacks_t, 0x28 );                                           
    };                                                                                          
};
#include "magic/ddi_base_callbacks_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_base_callbacks_t, 0x28 );
