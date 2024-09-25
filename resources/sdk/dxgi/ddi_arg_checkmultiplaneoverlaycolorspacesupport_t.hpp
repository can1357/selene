#pragma once
#include <sdkgen/support_library.hpp>
#include "format_t.hpp"
#include "../d3d/ddi/color_space_type_t.hpp"

#include "magic/ddi_arg_checkmultiplaneoverlaycolorspacesupport_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT]
    // => WDK 10 (NV)
    //
    struct ddi_arg_checkmultiplaneoverlaycolorspacesupport_t    
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint64_t                          h_device;          //{ +0x0000    } | .hDevice
        _m01 uint32_t                          vid_pn_source_id;  //{ +0x0008    } | .VidPnSourceId
        _m02 enum dxgi::format_t               format;            //{ +0x000c    } | .Format
        _m03 enum d3d::ddi::color_space_type_t color_space;       //{ +0x0010    } | .ColorSpace
        _m04 int32_t                           supported;         //{ +0x0014    } | .Supported
                                                                
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT.$", 0x0, false, 0x7a69296218943b47 );                 
        SDK_FIXED_SIZE( ddi_arg_checkmultiplaneoverlaycolorspacesupport_t, 0x18 );                 
    };                                                          
};
#include "magic/ddi_arg_checkmultiplaneoverlaycolorspacesupport_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_checkmultiplaneoverlaycolorspacesupport_t, 0x18 );
