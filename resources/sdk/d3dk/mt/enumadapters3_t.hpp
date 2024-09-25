#pragma once
#include <sdkgen/support_library.hpp>
#include "enumadapters_filter_t.hpp"

#include "magic/enumadapters3_t.start.hpp"
namespace d3dk::mt
{
    struct adapterinfo_t;

    // [struct _D3DKMT_ENUMADAPTERS3]
    // => WDK 10 (NV)
    //
    struct enumadapters3_t                                      
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 union d3dk::mt::enumadapters_filter_t filter;        //{ +0x0000    } | .Filter
        _m01 uint32_t                              num_adapters;  //{ +0x0008    } | .NumAdapters
        _m02 struct d3dk::mt::adapterinfo_t*       p_adapters;    //{ +0x0010    } | .pAdapters
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ENUMADAPTERS3.$", 0x0, false, 0x7194fef9c89cc06c );             
        SDK_FIXED_SIZE( enumadapters3_t, 0x18 );                
    };                                                          
};
#include "magic/enumadapters3_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::enumadapters3_t, 0x18 );
