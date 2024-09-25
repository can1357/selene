#pragma once
#include <sdkgen/support_library.hpp>
#include "adapterinfo_t.hpp"

#include "magic/enumadapters_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ENUMADAPTERS]
    // => WDK 10 (NV)
    //
    struct enumadapters_t                                                
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                                       num_adapters;  //{ +0x0000    } | .NumAdapters
        _m01 sdk::array<struct d3dk::mt::adapterinfo_t, 16> adapters;      //{ +0x0004    } | .Adapters
                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ENUMADAPTERS.$", 0x0, false, 0x95241b35cff6260a );             
        SDK_FIXED_SIZE( enumadapters_t, 0x144 );                         
    };                                                                   
};
#include "magic/enumadapters_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::enumadapters_t, 0x144 );
