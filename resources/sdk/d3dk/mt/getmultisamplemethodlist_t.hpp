#pragma once
#include <sdkgen/support_library.hpp>
#include "../../kuser/d3dddiformat_t.hpp"

#include "magic/getmultisamplemethodlist_t.start.hpp"
namespace d3dk::mt
{
    struct multisamplemethod_t;

    // [struct _D3DKMT_GETMULTISAMPLEMETHODLIST]
    // => WDK 10 (NV)
    //
    struct getmultisamplemethodlist_t                               
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                              h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t                              vid_pn_source_id;  //{ +0x0004    } | .VidPnSourceId
        _m02 uint32_t                              width;             //{ +0x0008    } | .Width
        _m03 uint32_t                              height;            //{ +0x000c    } | .Height
        _m04 enum kuser::d3dddiformat_t            format;            //{ +0x0010    } | .Format
        _m05 struct d3dk::mt::multisamplemethod_t* p_method_list;     //{ +0x0018    } | .pMethodList
        _m06 uint32_t                              method_count;      //{ +0x0020    } | .MethodCount
                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETMULTISAMPLEMETHODLIST.$", 0x0, false, 0x2bb47652893dc4aa );                 
        SDK_FIXED_SIZE( getmultisamplemethodlist_t, 0x28 );                 
    };                                                              
};
#include "magic/getmultisamplemethodlist_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getmultisamplemethodlist_t, 0x28 );
