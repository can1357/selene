#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xpf_recovery_info_t.start.hpp"
namespace nt
{
    // [struct _XPF_RECOVERY_INFO]
    // => Windows 11
    //
    struct xpf_recovery_info_t                                            
    {                                                                     
        struct u0_failure_reason_t                                        
        {                                                                 
            // Windows 11                                                 
            //                                                            
            _m00 uint1_t not_supported;                                     //{ +0x0000@0  } | .NotSupported
            _m01 uint1_t overflow;                                          //{ +0x0000@1  } | .Overflow
            _m02 uint1_t context_corrupt;                                   //{ +0x0000@2  } | .ContextCorrupt
            _m03 uint1_t restart_ip_error_ip_not_valid;                     //{ +0x0000@3  } | .RestartIpErrorIpNotValid
            _m04 uint1_t no_recovery_context;                               //{ +0x0000@4  } | .NoRecoveryContext
            _m05 uint1_t misc_or_addr_not_valid;                            //{ +0x0000@5  } | .MiscOrAddrNotValid
            _m06 uint1_t invalid_address_mode;                              //{ +0x0000@6  } | .InvalidAddressMode
            _m07 uint1_t high_irql;                                         //{ +0x0000@7  } | .HighIrql
            _m08 uint1_t interrupts_disabled;                               //{ +0x0000@8  } | .InterruptsDisabled
            _m09 uint1_t swap_busy;                                         //{ +0x0000@9  } | .SwapBusy
            _m10 uint1_t stack_overflow;                                    //{ +0x0000@10 } | .StackOverflow
                                                                          
            SDK_MAGIC_PROPERTIES( "_XPF_RECOVERY_INFO.FailureReason.$", 0x0, false, 0x5991a99b1fa384cf );                                                 
            SDK_FIXED_SIZE( u0_failure_reason_t, 0x4 );                                                 
        };                                                                
                                                                          
        struct u1_action_t                                                
        {                                                                 
            // Windows 11                                                 
            //                                                            
            _m12 uint1_t recovery_attempted;                                //{ +0x0000@0  } | .RecoveryAttempted
            _m13 uint1_t hv_handled;                                        //{ +0x0000@1  } | .HvHandled
                                                                          
            SDK_MAGIC_PROPERTIES( "_XPF_RECOVERY_INFO.Action.$", 0x0, false, 0x7654298edc7e778c );                                      
            SDK_FIXED_SIZE( u1_action_t, 0x4 );                                      
        };                                                                
                                                                          
        // Windows 11                                                     
        //                                                                
        _m11 u0_failure_reason_t                       failure_reason;      //{ +0x0000    } | .FailureReason
        _m14 u1_action_t                               action;              //{ +0x0004    } | .Action
        _m15 uint8_t                                   action_required;     //{ +0x0008    } | .ActionRequired
        _m16 uint8_t                                   recovery_succeeded;  //{ +0x0009    } | .RecoverySucceeded
        _m17 uint8_t                                   recovery_kernel;     //{ +0x000a    } | .RecoveryKernel
                                                                          
        SDK_MAGIC_PROPERTIES( "_XPF_RECOVERY_INFO.$", 0x0, false, 0xd6ae53a76b55a2f6 );                   
        SDK_FIXED_SIZE( xpf_recovery_info_t, 0x14 );                      
    };                                                                    
};
#include "magic/xpf_recovery_info_t.end.hpp"
SDK_VERIFY( struct nt::xpf_recovery_info_t::u0_failure_reason_t, 0x4 );
SDK_VERIFY( struct nt::xpf_recovery_info_t::u1_action_t, 0x4 );
SDK_VERIFY( struct nt::xpf_recovery_info_t, 0x14 );
