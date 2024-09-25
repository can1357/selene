#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vp_scatter_gather_element_t.start.hpp"
namespace nt
{
    // [struct _VP_SCATTER_GATHER_ELEMENT]
    // => WDK 10 (NV)
    //
    struct vp_scatter_gather_element_t
    {                                 
        // WDK 10             
        //                    
        _m00 int64_t  address;          //{ +0x0000    } | .Address
        _m01 uint32_t length;           //{ +0x0008    } | .Length
                                      
        SDK_NONVOL_PROPERTIES( "_VP_SCATTER_GATHER_ELEMENT.$", 0x0, false, 0x4441cc3e21b6b1ba );        
        SDK_FIXED_SIZE( vp_scatter_gather_element_t, 0x18 );        
    };                                
};
#include "magic/vp_scatter_gather_element_t.end.hpp"
SDK_VERIFY( struct nt::vp_scatter_gather_element_t, 0x18 );
