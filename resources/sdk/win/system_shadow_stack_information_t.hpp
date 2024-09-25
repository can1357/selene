#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_shadow_stack_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SHADOW_STACK_INFORMATION]
    // => Windows 11, Windows 10 v20H2
    //
    struct system_shadow_stack_information_t         
    {                                                
        // Windows 11, Windows 10 v20H2                              
        //                                           
        _m00 uint32_t  flags;                          //{ +0x0000    +0x0000    } | .Flags
        _m01 uint1_t   cet_capable;                    //{ +0x0000@0  +0x0000@0  } | .CetCapable
        _m02 uint1_t   user_cet_allowed;               //{ +0x0000@1  +0x0000@1  } | .UserCetAllowed
        _m03 uint6_t   reserved_for_user_cet;          //{ +0x0000@2  +0x0000@2  } | .ReservedForUserCet
        _m04 uint1_t   kernel_cet_enabled;             //{ +0x0000@8  +0x0000@8  } | .KernelCetEnabled
        _m05 varuint_t reserved_for_kernel_cet;        //{ +0x0000@10 +0x0000@9  } | .ReservedForKernelCet
                                                     
        // Windows 11                                
        //                                           
        _m06 uint1_t   kernel_cet_audit_mode_enabled;  //{ +0x0000@9  } | .KernelCetAuditModeEnabled
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SHADOW_STACK_INFORMATION.$", 0x4, true, 0x15ab3bb69f6eb5e7 );                              
        SDK_FIXED_SIZE( system_shadow_stack_information_t, 0x4 );                              
    };                                               
};
#include "magic/system_shadow_stack_information_t.end.hpp"
SDK_VERIFY( struct win::system_shadow_stack_information_t, 0x4 );
