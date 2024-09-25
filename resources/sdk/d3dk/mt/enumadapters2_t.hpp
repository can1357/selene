#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enumadapters2_t.start.hpp"
namespace d3dk::mt
{
    struct adapterinfo_t;

    // [struct _D3DKMT_ENUMADAPTERS2]
    // => WDK 10 (NV)
    //
    struct enumadapters2_t                                
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint32_t                        num_adapters;  //{ +0x0000    } | .NumAdapters
        _m01 struct d3dk::mt::adapterinfo_t* adapters;      //{ +0x0008    } | .Adapters
                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ENUMADAPTERS2.$", 0x0, false, 0x958fa1b41bf97089 );             
        SDK_FIXED_SIZE( enumadapters2_t, 0x10 );             
    };                                                    
};
#include "magic/enumadapters2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::enumadapters2_t, 0x10 );
