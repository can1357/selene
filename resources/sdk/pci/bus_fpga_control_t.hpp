#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "express_device_control_register_t.hpp"

#include "magic/bus_fpga_control_t.start.hpp"
namespace pci
{
    // [struct _PCI_BUS_FPGA_CONTROL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bus_fpga_control_t                                                           
    {                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                              
        _m00 struct nt::kevent_t                          scan_bus_count_lock;            //{ +0x0000    +0x0000    +0x0000    } | .ScanBusCountLock
        _m01 uint32_t                                     scan_bus_count;                 //{ +0x0018    +0x0018    +0x0018    } | .ScanBusCount
        _m02 union pci::express_device_control_register_t saved_device_control_register;  //{ +0x001c    +0x001c    +0x001c    } | .SavedDeviceControlRegister
        _m03 uint32_t                                     saved_uncorrectable_mask;       //{ +0x0020    +0x0020    +0x0020    } | .SavedUncorrectableMask
        _m04 uint32_t                                     saved_correctable_mask;         //{ +0x0024    +0x0024    +0x0024    } | .SavedCorrectableMask
                                                                                        
        SDK_MAGIC_PROPERTIES( "_PCI_BUS_FPGA_CONTROL.$", 0x28, true, 0x6e6379829f58b61 );                              
        SDK_FIXED_SIZE( bus_fpga_control_t, 0x28 );                                     
    };                                                                                  
};
#include "magic/bus_fpga_control_t.end.hpp"
SDK_VERIFY( struct pci::bus_fpga_control_t, 0x28 );
