#pragma once
#include <sdkgen/support_library.hpp>
#include "scatterblt_t.hpp"

#include "magic/scatterblts_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SCATTERBLTS]
    // => WDK 10 (NV)
    //
    struct scatterblts_t                                            
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                                      num_blts;  //{ +0x0000    } | .NumBlts
        _m01 sdk::array<struct d3dk::mt::scatterblt_t, 12> blts;      //{ +0x0008    } | .Blts
                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SCATTERBLTS.$", 0x0, false, 0xc70c72ca39e95397 );         
        SDK_FIXED_SIZE( scatterblts_t, 0x248 );                     
    };                                                              
};
#include "magic/scatterblts_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::scatterblts_t, 0x248 );
