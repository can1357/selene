#pragma once
#include <sdkgen/support_library.hpp>
#include "dma_profile_t.hpp"

#include "magic/dma_enabler_config_v1_13_t.start.hpp"
namespace wdf
{
    struct wdfdmaenabler_t;

    // [struct _WDF_DMA_ENABLER_CONFIG_V1_13]
    // => Windows 10 v1607
    //
    struct dma_enabler_config_v1_13_t                                                       
    {                                                                                       
        using evt_dma_enabler_fill_t =                  sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*;                                      
        using evt_dma_enabler_flush_t =                 sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*;                                      
        using evt_dma_enabler_disable_t =               sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*;                                      
        using evt_dma_enabler_enable_t =                sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*;                                      
        using evt_dma_enabler_self_managed_io_start_t = sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*;                                      
        using evt_dma_enabler_self_managed_io_stop_t =  sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*;                                      
                                                                                            
        // Windows 10 v1607                                                                 
        //                                                                                  
        _m00 uint32_t                                 size;                                   //{ +0x0000    } | .Size
        _m01 enum wdf::dma_profile_t                  profile;                                //{ +0x0004    } | .Profile
        _m02 uint64_t                                 maximum_length;                         //{ +0x0008    } | .MaximumLength
        _m03 evt_dma_enabler_fill_t                   evt_dma_enabler_fill;                   //{ +0x0010    } | .EvtDmaEnablerFill
        _m04 evt_dma_enabler_flush_t                  evt_dma_enabler_flush;                  //{ +0x0018    } | .EvtDmaEnablerFlush
        _m05 evt_dma_enabler_disable_t                evt_dma_enabler_disable;                //{ +0x0020    } | .EvtDmaEnablerDisable
        _m06 evt_dma_enabler_enable_t                 evt_dma_enabler_enable;                 //{ +0x0028    } | .EvtDmaEnablerEnable
        _m07 evt_dma_enabler_self_managed_io_start_t  evt_dma_enabler_self_managed_io_start;  //{ +0x0030    } | .EvtDmaEnablerSelfManagedIoStart
        _m08 evt_dma_enabler_self_managed_io_stop_t   evt_dma_enabler_self_managed_io_stop;   //{ +0x0038    } | .EvtDmaEnablerSelfManagedIoStop
        _m09 uint32_t                                 address_width_override;                 //{ +0x0040    } | .AddressWidthOverride
        _m10 uint32_t                                 wdm_dma_version_override;               //{ +0x0044    } | .WdmDmaVersionOverride
        _m11 uint32_t                                 flags;                                  //{ +0x0048    } | .Flags
                                                                                            
        SDK_MAGIC_PROPERTIES( "_WDF_DMA_ENABLER_CONFIG_V1_13.$", 0x0, false, 0x1fef8a3cb9a4ccb5 );                                      
        SDK_FIXED_SIZE( dma_enabler_config_v1_13_t, 0x50 );                                      
    };                                                                                      
};
#include "magic/dma_enabler_config_v1_13_t.end.hpp"
SDK_VERIFY( struct wdf::dma_enabler_config_v1_13_t, 0x50 );
