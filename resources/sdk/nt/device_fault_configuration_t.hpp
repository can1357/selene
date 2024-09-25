#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_fault_configuration_t.start.hpp"
namespace nt
{
    struct fault_information_t;

    // [struct _DEVICE_FAULT_CONFIGURATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_fault_configuration_t                   
    {                                                     
        using piommu_device_fault_handler_t = sdk::function<void(void*, struct nt::fault_information_t*)>*;              
                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 piommu_device_fault_handler_t  fault_handler;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FaultHandler
        _m01 void*                          fault_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FaultContext
                                                          
        SDK_NONVOL_PROPERTIES( "_DEVICE_FAULT_CONFIGURATION.$", 0x10, true, 0xf288dd5916632a0 );              
        SDK_FIXED_SIZE( device_fault_configuration_t, 0x10 );              
    };                                                    
};
#include "magic/device_fault_configuration_t.end.hpp"
SDK_VERIFY( struct nt::device_fault_configuration_t, 0x10 );
