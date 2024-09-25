#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/root_bus_osc_control_field_t.start.hpp"
namespace pci
{
    // [struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct root_bus_osc_control_field_t                
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint1_t  express_native_hot_plug;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ExpressNativeHotPlug
        _m01 uint1_t  shpc_native_hot_plug;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ShpcNativeHotPlug
        _m02 uint1_t  express_native_pme;                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ExpressNativePME
        _m03 uint1_t  express_advanced_error_reporting;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ExpressAdvancedErrorReporting
        _m04 uint1_t  express_capability_structure;      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ExpressCapabilityStructure
        _m05 uint1_t  latency_tolerance_reporting;       //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .LatencyToleranceReporting
        _m06 uint32_t as_ulong;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                       
        SDK_NONVOL_PROPERTIES( "_PCI_ROOT_BUS_OSC_CONTROL_FIELD.$", 0x4, true, 0x31e677658f786a6e );                                 
        SDK_FIXED_SIZE( root_bus_osc_control_field_t, 0x4 );                                 
    };                                                 
};
#include "magic/root_bus_osc_control_field_t.end.hpp"
SDK_VERIFY( struct pci::root_bus_osc_control_field_t, 0x4 );
