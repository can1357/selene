#pragma once
#include <sdkgen/support_library.hpp>
#include "firmware_bus_caps_t.hpp"

#include "magic/firmware_bus_caps_return_buffer_t.start.hpp"
namespace pci
{
    // [struct _PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct firmware_bus_caps_return_buffer_t         
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                           
        _m00 uint16_t                        version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                        status;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Status
        _m02 uint32_t                        length;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m03 struct pci::firmware_bus_caps_t caps;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Caps
                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER.$", 0x18, true, 0x6b3cb6ec7650da8 );        
        SDK_FIXED_SIZE( firmware_bus_caps_return_buffer_t, 0x18 );        
    };                                               
};
#include "magic/firmware_bus_caps_return_buffer_t.end.hpp"
SDK_VERIFY( struct pci::firmware_bus_caps_return_buffer_t, 0x18 );
