#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/rational_t.hpp"

#include "magic/frequency_range_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_FREQUENCY_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct frequency_range_t                             
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 struct d3d::ddi::rational_t min_v_sync_freq;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MinVSyncFreq
        _m01 struct d3d::ddi::rational_t max_v_sync_freq;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxVSyncFreq
        _m02 struct d3d::ddi::rational_t min_h_sync_freq;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MinHSyncFreq
        _m03 struct d3d::ddi::rational_t max_h_sync_freq;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxHSyncFreq
                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_FREQUENCY_RANGE.$", 0x20, true, 0x891f948789e23a3a );                
        SDK_FIXED_SIZE( frequency_range_t, 0x20 );                
    };                                                   
};
#include "magic/frequency_range_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::frequency_range_t, 0x20 );
