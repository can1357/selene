#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/displaymode_flags_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_DISPLAYMODE_FLAGS]
    // => WDK 10 (NV)
    //
    struct displaymode_flags_t                      
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint1_t validated_against_monitor_caps;  //{ +0x0000@0  } | .ValidatedAgainstMonitorCaps
        _m01 uint1_t rounded_fake_mode;               //{ +0x0000@1  } | .RoundedFakeMode
        _m02 int4_t  mode_pruning_reason;             //{ +0x0004@0  } | .ModePruningReason
        _m03 uint1_t stereo;                          //{ +0x0004@4  } | .Stereo
        _m04 uint1_t advanced_scan_capable;           //{ +0x0004@5  } | .AdvancedScanCapable
        _m05 uint1_t preferred_timing;                //{ +0x0004@6  } | .PreferredTiming
        _m06 uint1_t physical_mode_supported;         //{ +0x0004@7  } | .PhysicalModeSupported
                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_DISPLAYMODE_FLAGS.$", 0x0, false, 0xeb991db39563fce0 );                               
        SDK_FIXED_SIZE( displaymode_flags_t, 0x8 );                               
    };                                              
};
#include "magic/displaymode_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::displaymode_flags_t, 0x8 );
