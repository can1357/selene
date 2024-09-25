#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_uncorrectable_error_mask_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_uncorrectable_error_mask_t       
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint1_t  undefined;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Undefined
        _m01 uint1_t  data_link_protocol_error;      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .DataLinkProtocolError
        _m02 uint1_t  surprise_down_error;           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .SurpriseDownError
        _m03 uint1_t  poisoned_tlp;                  //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PoisonedTLP
        _m04 uint1_t  flow_control_protocol_error;   //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .FlowControlProtocolError
        _m05 uint1_t  completion_timeout;            //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .CompletionTimeout
        _m06 uint1_t  completer_abort;               //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .CompleterAbort
        _m07 uint1_t  unexpected_completion;         //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .UnexpectedCompletion
        _m08 uint1_t  receiver_overflow;             //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .ReceiverOverflow
        _m09 uint1_t  malformed_tlp;                 //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .MalformedTLP
        _m10 uint1_t  ecrc_error;                    //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .ECRCError
        _m11 uint1_t  unsupported_request_error;     //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .UnsupportedRequestError
        _m12 uint1_t  acs_violation;                 //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .AcsViolation
        _m13 uint1_t  uncorrectable_internal_error;  //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .UncorrectableInternalError
        _m14 uint1_t  mc_blocked_tlp;                //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .MCBlockedTlp
        _m15 uint1_t  atomic_op_egress_blocked;      //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .AtomicOpEgressBlocked
        _m16 uint1_t  tlp_prefix_blocked;            //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .TlpPrefixBlocked
        _m17 uint32_t as_ulong;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                   
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.$", 0x4, true, 0x4962a7ac44260403 );                             
        SDK_FIXED_SIZE( express_uncorrectable_error_mask_t, 0x4 );                             
    };                                             
};
#include "magic/express_uncorrectable_error_mask_t.end.hpp"
SDK_VERIFY( union pci::express_uncorrectable_error_mask_t, 0x4 );
