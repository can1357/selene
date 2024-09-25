#pragma once
#include <sdkgen/support_library.hpp>
#include "vp_scatter_gather_element_t.hpp"

#include "magic/vp_scatter_gather_list_t.start.hpp"
namespace nt
{
    // [struct _VP_SCATTER_GATHER_LIST]
    // => WDK 10 (NV)
    //
    struct vp_scatter_gather_list_t         
    {                                       
        using elements_t = sdk::array<struct nt::vp_scatter_gather_element_t>;                   
                                            
        // WDK 10                           
        //                                  
        _m00 uint32_t    number_of_elements;  //{ +0x0000    } | .NumberOfElements
        _m01 elements_t  elements;            //{ +0x0010    } | .Elements
                                            
        SDK_NONVOL_PROPERTIES( "_VP_SCATTER_GATHER_LIST.$", 0x0, false, 0x808f807614a5f58c );                   
        SDK_FIXED_SIZE( vp_scatter_gather_list_t, 0x10 );                   
    };                                      
};
#include "magic/vp_scatter_gather_list_t.end.hpp"
SDK_VERIFY( struct nt::vp_scatter_gather_list_t, 0x10 );
