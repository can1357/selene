#pragma once
#include <sdkgen/support_library.hpp>
#include "escape_head_t.hpp"

#include "magic/escape_release_t.start.hpp"
namespace dxgk::vgpu
{
    // [struct _DXGKVGPU_ESCAPE_RELEASE]
    // => WDK 10 (NV)
    //
    struct escape_release_t                          
    {                                                
        // WDK 10                                    
        //                                           
        _m00 struct dxgk::vgpu::escape_head_t header;  //{ +0x0000    } | .Header
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKVGPU_ESCAPE_RELEASE.$", 0x0, false, 0x4249ec2fa41a65cf );       
        SDK_FIXED_SIZE( escape_release_t, 0xc );       
    };                                               
};
#include "magic/escape_release_t.end.hpp"
SDK_VERIFY( struct dxgk::vgpu::escape_release_t, 0xc );
