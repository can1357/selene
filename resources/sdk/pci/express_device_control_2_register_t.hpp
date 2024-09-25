#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_device_control_2_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_device_control_2_register_t     
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint4_t  completion_timeout_value;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CompletionTimeoutValue
        _m01 uint1_t  completion_timeout_disable;   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CompletionTimeoutDisable
        _m02 uint1_t  ari_forwarding_enable;        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .AriForwardingEnable
        _m03 uint1_t  atomic_op_requester_enable;   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .AtomicOpRequesterEnable
        _m04 uint1_t  atomic_op_egres_blocking;     //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .AtomicOpEgresBlocking
        _m05 uint1_t  ido_request_enable;           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .IDORequestEnable
        _m06 uint1_t  ido_completion_enable;        //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .IDOCompletionEnable
        _m07 uint1_t  ltr_mechanism_enable;         //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .LTRMechanismEnable
        _m08 uint2_t  rsvd;                         //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Rsvd
        _m09 uint2_t  obff_enable;                  //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .OBFFEnable
        _m10 uint1_t  end_end_tlp_prefix_blocking;  //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .EndEndTLPPrefixBlocking
        _m11 uint16_t as_ushort;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.$", 0x2, true, 0xa0f422723c8b2b04 );                            
        SDK_FIXED_SIZE( express_device_control_2_register_t, 0x2 );                            
    };                                            
};
#include "magic/express_device_control_2_register_t.end.hpp"
SDK_VERIFY( union pci::express_device_control_2_register_t, 0x2 );
