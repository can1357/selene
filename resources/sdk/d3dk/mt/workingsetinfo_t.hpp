#pragma once
#include <sdkgen/support_library.hpp>
#include "workingsetflags_t.hpp"

#include "magic/workingsetinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WORKINGSETINFO]
    // => WDK 10 (NV)
    //
    struct workingsetinfo_t                                                    
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 struct d3dk::mt::workingsetflags_t flags;                           //{ +0x0000    } | .Flags
        _m01 uint32_t                           minimum_working_set_percentile;  //{ +0x0004    } | .MinimumWorkingSetPercentile
        _m02 uint32_t                           maximum_working_set_percentile;  //{ +0x0008    } | .MaximumWorkingSetPercentile
                                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WORKINGSETINFO.$", 0x0, false, 0x4c9aa900bb122f24 );                               
        SDK_FIXED_SIZE( workingsetinfo_t, 0xc );                               
    };                                                                         
};
#include "magic/workingsetinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::workingsetinfo_t, 0xc );
