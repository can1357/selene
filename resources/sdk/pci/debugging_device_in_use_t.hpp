#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debugging_device_in_use_t.start.hpp"
namespace pci
{
    // [struct _PCI_DEBUGGING_DEVICE_IN_USE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct debugging_device_in_use_t
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint16_t segment;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Segment
        _m01 uint32_t bus;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Bus
        _m02 uint32_t slot;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Slot
                                    
        SDK_NONVOL_PROPERTIES( "_PCI_DEBUGGING_DEVICE_IN_USE.$", 0xc, true, 0x138774a403e20be3 );        
        SDK_FIXED_SIZE( debugging_device_in_use_t, 0xc );        
    };                              
};
#include "magic/debugging_device_in_use_t.end.hpp"
SDK_VERIFY( struct pci::debugging_device_in_use_t, 0xc );
