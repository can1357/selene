#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_early_restore_traces_t.start.hpp"
namespace pci
{
    // [struct _PCI_DEVICE_EARLY_RESTORE_TRACES]
    // => Windows 11
    //
    struct device_early_restore_traces_t                       
    {                                                          
        // Windows 11                                          
        //                                                     
        _m00 uint1_t  caused_early_restore_logical_power_state;  //{ +0x0000@0  } | .CausedEarlyRestoreLogicalPowerState
        _m01 uint1_t  caused_early_restore_real_power_state;     //{ +0x0000@1  } | .CausedEarlyRestoreRealPowerState
        _m02 uint1_t  caused_early_restore_bme;                  //{ +0x0000@2  } | .CausedEarlyRestoreBME
        _m03 uint1_t  caused_early_restore_resource;             //{ +0x0000@3  } | .CausedEarlyRestoreResource
        _m04 uint1_t  execute_power_on;                          //{ +0x0000@4  } | .ExecutePowerOn
        _m05 uint1_t  execute_early_restore_resource;            //{ +0x0000@5  } | .ExecuteEarlyRestoreResource
        _m06 uint1_t  execute_early_restore_bme;                 //{ +0x0000@6  } | .ExecuteEarlyRestoreBME
        _m07 uint32_t as_ulong;                                  //{ +0x0000    } | .AsULONG
                                                               
        SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_EARLY_RESTORE_TRACES.$", 0x0, false, 0xa1a13638f3dba1ac );                                         
        SDK_FIXED_SIZE( device_early_restore_traces_t, 0x4 );                                         
    };                                                         
};
#include "magic/device_early_restore_traces_t.end.hpp"
SDK_VERIFY( struct pci::device_early_restore_traces_t, 0x4 );
