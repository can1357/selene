#pragma once
#include <sdkgen/support_library.hpp>
#include "recovery_type_t.hpp"
#include "recovery_action_t.hpp"
#include "recovery_failure_reason_t.hpp"

#include "magic/error_recovery_info_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_RECOVERY_INFO_SECTION]
    // => Windows 11
    //
    struct error_recovery_info_section_t                             
    {                                                                
        // Windows 11                                                
        //                                                           
        _m00 uint8_t                              recovery_kernel;     //{ +0x0000    } | .RecoveryKernel
        _m01 union whea::recovery_action_t        recovery_action;     //{ +0x0001    } | .RecoveryAction
        _m02 enum whea::recovery_type_t           recovery_type;       //{ +0x0009    } | .RecoveryType
        _m03 uint8_t                              irql;                //{ +0x000d    } | .Irql
        _m04 uint8_t                              recovery_succeeded;  //{ +0x000e    } | .RecoverySucceeded
        _m05 enum whea::recovery_failure_reason_t failure_reason;      //{ +0x000f    } | .FailureReason
        _m06 sdk::array<char, 20>                 process_name;        //{ +0x0013    } | .ProcessName
                                                                     
        SDK_MAGIC_PROPERTIES( "_WHEA_ERROR_RECOVERY_INFO_SECTION.$", 0x0, false, 0x1a4e26b7f4f88732 );                   
        SDK_FIXED_SIZE( error_recovery_info_section_t, 0x27 );                   
    };                                                               
};
#include "magic/error_recovery_info_section_t.end.hpp"
SDK_VERIFY( struct whea::error_recovery_info_section_t, 0x27 );
