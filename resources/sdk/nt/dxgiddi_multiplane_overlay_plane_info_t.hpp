#pragma once
#include <sdkgen/support_library.hpp>
#include "../dxgi/ddi_flip_interval_type_t.hpp"

#include "magic/dxgiddi_multiplane_overlay_plane_info_t.start.hpp"
namespace nt
{
    // [struct DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO]
    // => WDK 10 (NV)
    //
    struct dxgiddi_multiplane_overlay_plane_info_t                            
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                            context_count;                 //{ +0x0000    } | .ContextCount
        _m01 void**                              p_context_list;                //{ +0x0008    } | .pContextList
        _m02 uint32_t*                           p_allocation_list;             //{ +0x0010    } | .pAllocationList
        _m03 uint32_t                            driver_private_data_size;      //{ +0x0018    } | .DriverPrivateDataSize
        _m04 void*                               p_driver_private_data;         //{ +0x0020    } | .pDriverPrivateData
        _m05 int32_t                             sync_interval_override_valid;  //{ +0x0028    } | .SyncIntervalOverrideValid
        _m06 enum dxgi::ddi_flip_interval_type_t sync_interval_override;        //{ +0x002c    } | .SyncIntervalOverride
                                                                              
        SDK_NONVOL_PROPERTIES( "DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO.$", 0x0, false, 0x20ac33961d532dc9 );                             
        SDK_FIXED_SIZE( dxgiddi_multiplane_overlay_plane_info_t, 0x30 );                             
    };                                                                        
};
#include "magic/dxgiddi_multiplane_overlay_plane_info_t.end.hpp"
SDK_VERIFY( struct nt::dxgiddi_multiplane_overlay_plane_info_t, 0x30 );
