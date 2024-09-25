#pragma once
#include <sdkgen/support_library.hpp>
#include "gdisurfacetype_t.hpp"
#include "gdisurfaceflags_t.hpp"
#include "../../kuser/d3dddiformat_t.hpp"

#include "magic/gdisurfacedata_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_GDISURFACEDATA]
    // => WDK 10 (NV)
    //
    struct gdisurfacedata_t                             
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t                            width;   //{ +0x0000    } | .Width
        _m01 uint32_t                            height;  //{ +0x0004    } | .Height
        _m02 enum kuser::d3dddiformat_t          format;  //{ +0x0008    } | .Format
        _m03 enum d3dk::mdt::gdisurfacetype_t    type;    //{ +0x000c    } | .Type
        _m04 struct d3dk::mdt::gdisurfaceflags_t flags;   //{ +0x0010    } | .Flags
        _m05 uint32_t                            pitch;   //{ +0x0014    } | .Pitch
                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_GDISURFACEDATA.$", 0x0, false, 0x9877e22582158196 );       
        SDK_FIXED_SIZE( gdisurfacedata_t, 0x18 );       
    };                                                  
};
#include "magic/gdisurfacedata_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::gdisurfacedata_t, 0x18 );
