#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_pme_requestor_id_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_PME_REQUESTOR_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_pme_requestor_id_t  
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint3_t  function_number;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FunctionNumber
        _m01 uint5_t  device_number;    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DeviceNumber
        _m02 uint8_t  bus_number;       //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .BusNumber
        _m03 uint16_t as_ushort;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                      
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_PME_REQUESTOR_ID.$", 0x2, true, 0x508d3bb865ffb08e );                
        SDK_FIXED_SIZE( express_pme_requestor_id_t, 0x2 );                
    };                                
};
#include "magic/express_pme_requestor_id_t.end.hpp"
SDK_VERIFY( union pci::express_pme_requestor_id_t, 0x2 );
