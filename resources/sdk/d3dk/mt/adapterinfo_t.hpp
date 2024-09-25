#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/adapterinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADAPTERINFO]
    // => WDK 10 (NV)
    //
    struct adapterinfo_t                                        
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint32_t          h_adapter;                         //{ +0x0000    } | .hAdapter
        _m01 struct nt::luid_t adapter_luid;                      //{ +0x0004    } | .AdapterLuid
        _m02 uint32_t          num_of_sources;                    //{ +0x000c    } | .NumOfSources
        _m03 int32_t           b_present_move_regions_preferred;  //{ +0x0010    } | .bPresentMoveRegionsPreferred
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTERINFO.$", 0x0, false, 0x88241bb4815bff1d );                                 
        SDK_FIXED_SIZE( adapterinfo_t, 0x14 );                                 
    };                                                          
};
#include "magic/adapterinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adapterinfo_t, 0x14 );
