#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gdimodel_sysmem_presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct gdimodel_sysmem_presenthistorytoken_t
    {                                           
        // WDK 10                    
        //                           
        _m00 uint64_t hlsurf;                     //{ +0x0000    } | .hlsurf
        _m01 uint32_t dw_dirty_flags;             //{ +0x0008    } | .dwDirtyFlags
        _m02 uint64_t ui_cookie;                  //{ +0x0010    } | .uiCookie
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN.$", 0x0, false, 0x822f1947039bd350 );               
        SDK_FIXED_SIZE( gdimodel_sysmem_presenthistorytoken_t, 0x18 );               
    };                                          
};
#include "magic/gdimodel_sysmem_presenthistorytoken_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::gdimodel_sysmem_presenthistorytoken_t, 0x18 );
