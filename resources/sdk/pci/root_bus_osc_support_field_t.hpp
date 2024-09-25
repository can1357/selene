#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/root_bus_osc_support_field_t.start.hpp"
namespace pci
{
    // [struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct root_bus_osc_support_field_t               
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint1_t  extended_config_op_regions;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ExtendedConfigOpRegions
        _m01 uint1_t  active_state_power_management;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ActiveStatePowerManagement
        _m02 uint1_t  clock_power_management;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ClockPowerManagement
        _m03 uint1_t  segment_groups;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .SegmentGroups
        _m04 uint1_t  message_signaled_interrupts;      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .MessageSignaledInterrupts
        _m05 uint1_t  optimized_buffer_flush_and_fill;  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .OptimizedBufferFlushAndFill
        _m06 uint1_t  aspm_optionality;                 //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .AspmOptionality
        _m07 uint32_t as_ulong;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                      
        SDK_NONVOL_PROPERTIES( "_PCI_ROOT_BUS_OSC_SUPPORT_FIELD.$", 0x4, true, 0x63f8e6cf294ea9b );                                
        SDK_FIXED_SIZE( root_bus_osc_support_field_t, 0x4 );                                
    };                                                
};
#include "magic/root_bus_osc_support_field_t.end.hpp"
SDK_VERIFY( struct pci::root_bus_osc_support_field_t, 0x4 );
