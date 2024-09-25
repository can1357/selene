#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_device_capabilities_2_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_device_capabilities_2_register_t         
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                 
        _m00 uint4_t  completion_timeout_ranges_supported;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CompletionTimeoutRangesSupported
        _m01 uint1_t  completion_timeout_disable_supported;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CompletionTimeoutDisableSupported
        _m02 uint1_t  ari_forwarding_supported;              //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .AriForwardingSupported
        _m03 uint1_t  atomic_op_routing_supported;           //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .AtomicOpRoutingSupported
        _m04 uint1_t  atomic_op_completer_supported32_bit;   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .AtomicOpCompleterSupported32Bit
        _m05 uint1_t  atomic_op_completer_supported64_bit;   //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .AtomicOpCompleterSupported64Bit
        _m06 uint1_t  cas_completer_supported128_bit;        //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .CASCompleterSupported128Bit
        _m07 uint1_t  no_ro_enabled_prpr_passing;            //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .NoROEnabledPRPRPassing
        _m08 uint1_t  ltr_mechanism_supported;               //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .LTRMechanismSupported
        _m09 uint2_t  tph_completer_supported;               //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .TPHCompleterSupported
        _m10 uint4_t  rsvd;                                  //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .Rsvd
        _m11 uint2_t  obff_supported;                        //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .OBFFSupported
        _m12 uint1_t  extended_fmt_field_suported;           //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .ExtendedFmtFieldSuported
        _m13 uint1_t  end_end_tlp_prefix_supported;          //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .EndEndTLPPrefixSupported
        _m14 uint2_t  max_end_end_tlp_prefixes;              //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .MaxEndEndTLPPrefixes
        _m15 uint8_t  rsvd2;                                 //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Rsvd2
        _m16 uint32_t as_ulong;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                           
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.$", 0x4, true, 0x81c51beea23e0ad2 );                                     
        SDK_FIXED_SIZE( express_device_capabilities_2_register_t, 0x4 );                                     
    };                                                     
};
#include "magic/express_device_capabilities_2_register_t.end.hpp"
SDK_VERIFY( union pci::express_device_capabilities_2_register_t, 0x4 );
