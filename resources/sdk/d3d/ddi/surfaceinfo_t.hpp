#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/surfaceinfo_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_SURFACEINFO]
    // => WDK 10 (NV)
    //
    struct surfaceinfo_t                     
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t    width;                //{ +0x0000    } | .Width
        _m01 uint32_t    height;               //{ +0x0004    } | .Height
        _m02 uint32_t    depth;                //{ +0x0008    } | .Depth
        _m03 const void* p_sys_mem;            //{ +0x0010    } | .pSysMem
        _m04 uint32_t    sys_mem_pitch;        //{ +0x0018    } | .SysMemPitch
        _m05 uint32_t    sys_mem_slice_pitch;  //{ +0x001c    } | .SysMemSlicePitch
                                             
        SDK_NONVOL_PROPERTIES( "_D3DDDI_SURFACEINFO.$", 0x0, false, 0xa9db07dabbcc093e );                    
        SDK_FIXED_SIZE( surfaceinfo_t, 0x20 );                    
    };                                       
};
#include "magic/surfaceinfo_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::surfaceinfo_t, 0x20 );
