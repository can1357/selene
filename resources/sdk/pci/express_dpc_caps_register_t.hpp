#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_caps_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DPC_CAPS_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_dpc_caps_register_t                        
    {                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                   
        _m00 uint5_t  interrupt_msg_number;                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .InterruptMsgNumber
        _m01 uint1_t  rp_extensions_for_dpc;                   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .RpExtensionsForDpc
        _m02 uint1_t  poisoned_tlp_egress_blocking_supported;  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PoisonedTlpEgressBlockingSupported
        _m03 uint1_t  dpc_software_triggering_supported;       //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .DpcSoftwareTriggeringSupported
        _m04 uint4_t  rp_pio_log_size;                         //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .RpPioLogSize
        _m05 uint1_t  dl_active_err_cor_signaling_supported;   //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .DlActiveErrCorSignalingSupported
        _m06 uint16_t as_ushort;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                             
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DPC_CAPS_REGISTER.$", 0x2, true, 0x97ed33ab7436b2b4 );                                       
        SDK_FIXED_SIZE( express_dpc_caps_register_t, 0x2 );                                       
    };                                                       
};
#include "magic/express_dpc_caps_register_t.end.hpp"
SDK_VERIFY( union pci::express_dpc_caps_register_t, 0x2 );
