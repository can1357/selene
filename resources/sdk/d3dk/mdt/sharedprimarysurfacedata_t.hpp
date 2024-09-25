#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/rational_t.hpp"
#include "../../kuser/d3dddiformat_t.hpp"

#include "magic/sharedprimarysurfacedata_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_SHAREDPRIMARYSURFACEDATA]
    // => WDK 10 (NV)
    //
    struct sharedprimarysurfacedata_t                     
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint32_t                    width;             //{ +0x0000    } | .Width
        _m01 uint32_t                    height;            //{ +0x0004    } | .Height
        _m02 enum kuser::d3dddiformat_t  format;            //{ +0x0008    } | .Format
        _m03 struct d3d::ddi::rational_t refresh_rate;      //{ +0x000c    } | .RefreshRate
        _m04 uint32_t                    vid_pn_source_id;  //{ +0x0014    } | .VidPnSourceId
                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_SHAREDPRIMARYSURFACEDATA.$", 0x0, false, 0xc9d4d03eb7ccdf62 );                 
        SDK_FIXED_SIZE( sharedprimarysurfacedata_t, 0x18 );                 
    };                                                    
};
#include "magic/sharedprimarysurfacedata_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::sharedprimarysurfacedata_t, 0x18 );
