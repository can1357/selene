#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_sec_uncorrectable_error_severity_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_sec_uncorrectable_error_severity_t            
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                      
        _m00 uint1_t  target_abort_on_split_completion;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TargetAbortOnSplitCompletion
        _m01 uint1_t  master_abort_on_split_completion;           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .MasterAbortOnSplitCompletion
        _m02 uint1_t  received_target_abort;                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ReceivedTargetAbort
        _m03 uint1_t  received_master_abort;                      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ReceivedMasterAbort
        _m04 uint1_t  rsvd_z;                                     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RsvdZ
        _m05 uint1_t  unexpected_split_completion_error;          //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .UnexpectedSplitCompletionError
        _m06 uint1_t  uncorrectable_split_completion;             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .UncorrectableSplitCompletion
        _m07 uint1_t  uncorrectable_data_error;                   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .UncorrectableDataError
        _m08 uint1_t  uncorrectable_attribute_error;              //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .UncorrectableAttributeError
        _m09 uint1_t  uncorrectable_address_error;                //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .UncorrectableAddressError
        _m10 uint1_t  delayed_transaction_discard_timer_expired;  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .DelayedTransactionDiscardTimerExpired
        _m11 uint1_t  perr_asserted;                              //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .PERRAsserted
        _m12 uint1_t  serr_asserted;                              //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .SERRAsserted
        _m13 uint1_t  internal_bridge_error;                      //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .InternalBridgeError
        _m14 uint32_t as_ulong;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                                
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.$", 0x4, true, 0x374b1d2d7f1d2186 );                                          
        SDK_FIXED_SIZE( express_sec_uncorrectable_error_severity_t, 0x4 );                                          
    };                                                          
};
#include "magic/express_sec_uncorrectable_error_severity_t.end.hpp"
SDK_VERIFY( union pci::express_sec_uncorrectable_error_severity_t, 0x4 );
