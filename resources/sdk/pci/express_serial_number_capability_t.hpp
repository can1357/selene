#pragma once
#include <sdkgen/support_library.hpp>
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_serial_number_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_serial_number_capability_t                                    
    {                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                       
        _m00 struct pci::express_enhanced_capability_header_t header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                         low_serial_number;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LowSerialNumber
        _m02 uint32_t                                         high_serial_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HighSerialNumber
                                                                                 
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY.$", 0xc, true, 0x1c786176ce5eedb7 );                   
        SDK_FIXED_SIZE( express_serial_number_capability_t, 0xc );                   
    };                                                                           
};
#include "magic/express_serial_number_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_serial_number_capability_t, 0xc );
