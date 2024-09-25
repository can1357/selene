#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_multiplane_overlay_group_caps_t.hpp"

#include "magic/ddi_arg_getmultiplaneoverlaygroupcaps_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS]
    // => WDK 10 (NV)
    //
    struct ddi_arg_getmultiplaneoverlaygroupcaps_t                                          
    {                                                                                       
        // WDK 10                                                                           
        //                                                                                  
        _m00 uint64_t                                         h_device;                       //{ +0x0000    } | .hDevice
        _m01 uint32_t                                         vid_pn_source_id;               //{ +0x0008    } | .VidPnSourceId
        _m02 uint32_t                                         group_index;                    //{ +0x000c    } | .GroupIndex
        _m03 struct dxgi::ddi_multiplane_overlay_group_caps_t multiplane_overlay_group_caps;  //{ +0x0010    } | .MultiplaneOverlayGroupCaps
                                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS.$", 0x0, false, 0x121d0d27d3422c2a );                              
        SDK_FIXED_SIZE( ddi_arg_getmultiplaneoverlaygroupcaps_t, 0x28 );                              
    };                                                                                      
};
#include "magic/ddi_arg_getmultiplaneoverlaygroupcaps_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_getmultiplaneoverlaygroupcaps_t, 0x28 );
