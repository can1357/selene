#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_device_status_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DEVICE_STATUS_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_device_status_register_t         
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint1_t  correctable_error_detected;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CorrectableErrorDetected
        _m01 uint1_t  non_fatal_error_detected;      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NonFatalErrorDetected
        _m02 uint1_t  fatal_error_detected;          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .FatalErrorDetected
        _m03 uint1_t  unsupported_request_detected;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UnsupportedRequestDetected
        _m04 uint1_t  aux_power_detected;            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .AuxPowerDetected
        _m05 uint1_t  transactions_pending;          //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .TransactionsPending
        _m06 uint10_t rsvd;                          //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Rsvd
        _m07 uint16_t as_ushort;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                   
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DEVICE_STATUS_REGISTER.$", 0x2, true, 0xd3642d1931fdb2f8 );                             
        SDK_FIXED_SIZE( express_device_status_register_t, 0x2 );                             
    };                                             
};
#include "magic/express_device_status_register_t.end.hpp"
SDK_VERIFY( union pci::express_device_status_register_t, 0x2 );
