#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/presentmultiplaneoverlayinfo_t.start.hpp"
namespace dxgk
{
    struct presentmultiplaneoverlaylist_t;

    // [struct _DXGK_PRESENTMULTIPLANEOVERLAYINFO]
    // => WDK 10 (NV)
    //
    struct presentmultiplaneoverlayinfo_t                                  
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                                     vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t                                     plane_list_count;  //{ +0x0004    } | .PlaneListCount
        _m02 struct dxgk::presentmultiplaneoverlaylist_t* p_plane_list;      //{ +0x0008    } | .pPlaneList
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_PRESENTMULTIPLANEOVERLAYINFO.$", 0x0, false, 0x17cad9cacff915d8 );                 
        SDK_FIXED_SIZE( presentmultiplaneoverlayinfo_t, 0x10 );                 
    };                                                                     
};
#include "magic/presentmultiplaneoverlayinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::presentmultiplaneoverlayinfo_t, 0x10 );
