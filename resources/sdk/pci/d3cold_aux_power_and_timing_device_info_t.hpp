#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/d3cold_aux_power_and_timing_device_info_t.start.hpp"
namespace pci
{
    struct device_t;
    struct d3cold_aux_power_and_timing_aggregation_info_t;

    // [struct _PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct d3cold_aux_power_and_timing_device_info_t             
    {                                                            
        using d3_cold_aux_power_ctrl_t = struct pci::d3cold_aux_power_and_timing_aggregation_info_t*;                          
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                       
        _m00 nt::list_entry_t          list_entry;                 //{ +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct pci::device_t*     device;                     //{ +0x0010    +0x0028    +0x0010    } | .Device
        _m02 uint8_t                   linked;                     //{ +0x0018    +0x0030    +0x0018    } | .Linked
        _m03 uint8_t                   core_power_rail_requested;  //{ +0x0019    +0x0031    +0x0019    } | .CorePowerRailRequested
        _m04 uint32_t                  auxiliary_power_requested;  //{ +0x001c    +0x0034    +0x001c    } | .AuxiliaryPowerRequested
        _m05 uint32_t                  perst_delay_requested;      //{ +0x0020    +0x0038    +0x0020    } | .PerstDelayRequested
                                                                 
        // Windows 11                                            
        //                                                       
        _m06 struct nt::kevent_t       lock;                       //{ +0x0010    } | .Lock
        _m07 d3_cold_aux_power_ctrl_t  d3_cold_aux_power_ctrl;     //{ +0x0040    } | .D3ColdAuxPowerCtrl
                                                                 
        SDK_MAGIC_PROPERTIES( "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.$", 0x28, true, 0x80cd7614c73781c7 );                          
        SDK_DYNAMIC_SIZE( d3cold_aux_power_and_timing_device_info_t );                          
    };                                                           
};
#include "magic/d3cold_aux_power_and_timing_device_info_t.end.hpp"
