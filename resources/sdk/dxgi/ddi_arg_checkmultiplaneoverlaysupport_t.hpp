#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_checkmultiplaneoverlaysupport_t.start.hpp"
namespace dxgi
{
    struct ddi_check_multiplaneoverlaysupport_plane_info_t;

    // [struct _DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT]
    // => WDK 10 (NV)
    //
    struct ddi_arg_checkmultiplaneoverlaysupport_t
    {                                             
        using p_plane_info_t = struct dxgi::ddi_check_multiplaneoverlaysupport_plane_info_t*;                 
                                                  
        // WDK 10                             
        //                                    
        _m00 uint64_t        h_device;              //{ +0x0000    } | .hDevice
        _m01 uint32_t        vid_pn_source_id;      //{ +0x0008    } | .VidPnSourceId
        _m02 uint32_t        num_plane_info;        //{ +0x000c    } | .NumPlaneInfo
        _m03 p_plane_info_t  p_plane_info;          //{ +0x0010    } | .pPlaneInfo
        _m04 int32_t         supported;             //{ +0x0018    } | .Supported
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT.$", 0x0, false, 0xe878c62c85acc3c5 );                 
        SDK_FIXED_SIZE( ddi_arg_checkmultiplaneoverlaysupport_t, 0x20 );                 
    };                                            
};
#include "magic/ddi_arg_checkmultiplaneoverlaysupport_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_checkmultiplaneoverlaysupport_t, 0x20 );
