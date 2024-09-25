#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_status_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DPC_STATUS_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_dpc_status_register_t        
    {                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint1_t  trigger_status;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TriggerStatus
        _m01 uint2_t  trigger_reason;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TriggerReason
        _m02 uint1_t  interrupt_status;          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .InterruptStatus
        _m03 uint1_t  rp_busy;                   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RpBusy
        _m04 uint2_t  trigger_reason_extension;  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .TriggerReasonExtension
        _m05 uint5_t  pio_first_err_pointer;     //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PioFirstErrPointer
        _m06 uint16_t as_ushort;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DPC_STATUS_REGISTER.$", 0x2, true, 0x7bfc01109a96334 );                         
        SDK_FIXED_SIZE( express_dpc_status_register_t, 0x2 );                         
    };                                         
};
#include "magic/express_dpc_status_register_t.end.hpp"
SDK_VERIFY( union pci::express_dpc_status_register_t, 0x2 );
