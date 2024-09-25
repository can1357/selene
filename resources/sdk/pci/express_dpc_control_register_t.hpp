#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DPC_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_dpc_control_register_t                  
    {                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint2_t  trigger_enable;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TriggerEnable
        _m01 uint1_t  completion_control;                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .CompletionControl
        _m02 uint1_t  interrupt_enable;                     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .InterruptEnable
        _m03 uint1_t  err_cor_enable;                       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ErrCorEnable
        _m04 uint1_t  poisoned_tlp_egress_blocking_enable;  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PoisonedTlpEgressBlockingEnable
        _m05 uint1_t  software_trigger;                     //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .SoftwareTrigger
        _m06 uint1_t  dl_active_err_cor_enable;             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .DlActiveErrCorEnable
        _m07 uint16_t as_ushort;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                          
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DPC_CONTROL_REGISTER.$", 0x2, true, 0x417bba5425b00bc8 );                                    
        SDK_FIXED_SIZE( express_dpc_control_register_t, 0x2 );                                    
    };                                                    
};
#include "magic/express_dpc_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_dpc_control_register_t, 0x2 );
