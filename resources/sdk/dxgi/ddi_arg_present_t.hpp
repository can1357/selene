#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_present_flags_t.hpp"
#include "ddi_flip_interval_type_t.hpp"

#include "magic/ddi_arg_present_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_PRESENT]
    // => WDK 10 (NV)
    //
    struct ddi_arg_present_t                                            
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint64_t                            h_device;                //{ +0x0000    } | .hDevice
        _m01 uint64_t                            h_surface_to_present;    //{ +0x0008    } | .hSurfaceToPresent
        _m02 uint32_t                            src_sub_resource_index;  //{ +0x0010    } | .SrcSubResourceIndex
        _m03 uint64_t                            h_dst_resource;          //{ +0x0018    } | .hDstResource
        _m04 uint32_t                            dst_sub_resource_index;  //{ +0x0020    } | .DstSubResourceIndex
        _m05 void*                               p_dxgi_context;          //{ +0x0028    } | .pDXGIContext
        _m06 struct dxgi::ddi_present_flags_t    flags;                   //{ +0x0030    } | .Flags
        _m07 enum dxgi::ddi_flip_interval_type_t flip_interval;           //{ +0x0034    } | .FlipInterval
                                                                        
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_PRESENT.$", 0x0, false, 0xd9a4609e1f6c2ae );                       
        SDK_FIXED_SIZE( ddi_arg_present_t, 0x38 );                       
    };                                                                  
};
#include "magic/ddi_arg_present_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_present_t, 0x38 );
