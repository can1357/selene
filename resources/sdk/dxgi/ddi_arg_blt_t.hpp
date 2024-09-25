#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_arg_blt_flags_t.hpp"
#include "ddi_mode_rotation_t.hpp"

#include "magic/ddi_arg_blt_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_BLT]
    // => WDK 10 (NV)
    //
    struct ddi_arg_blt_t                                      
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint64_t                         h_device;         //{ +0x0000    } | .hDevice
        _m01 uint64_t                         h_dst_resource;   //{ +0x0008    } | .hDstResource
        _m02 uint32_t                         dst_subresource;  //{ +0x0010    } | .DstSubresource
        _m03 uint32_t                         dst_left;         //{ +0x0014    } | .DstLeft
        _m04 uint32_t                         dst_top;          //{ +0x0018    } | .DstTop
        _m05 uint32_t                         dst_right;        //{ +0x001c    } | .DstRight
        _m06 uint32_t                         dst_bottom;       //{ +0x0020    } | .DstBottom
        _m07 uint64_t                         h_src_resource;   //{ +0x0028    } | .hSrcResource
        _m08 uint32_t                         src_subresource;  //{ +0x0030    } | .SrcSubresource
        _m09 struct dxgi::ddi_arg_blt_flags_t flags;            //{ +0x0034    } | .Flags
        _m10 enum dxgi::ddi_mode_rotation_t   rotate;           //{ +0x0038    } | .Rotate
                                                              
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_BLT.$", 0x0, false, 0x1ca24459e44d6f74 );                
        SDK_FIXED_SIZE( ddi_arg_blt_t, 0x40 );                
    };                                                        
};
#include "magic/ddi_arg_blt_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_blt_t, 0x40 );
