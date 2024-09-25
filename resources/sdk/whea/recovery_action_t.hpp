#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/recovery_action_t.start.hpp"
namespace whea
{
    // [union _WHEA_RECOVERY_ACTION]
    // => Windows 11
    //
    union recovery_action_t             
    {                                   
        // Windows 11                   
        //                              
        _m00 uint1_t  none_attempted;     //{ +0x0000@0  } | .NoneAttempted
        _m01 uint1_t  terminate_process;  //{ +0x0000@1  } | .TerminateProcess
        _m02 uint1_t  forwarded_to_vm;    //{ +0x0000@2  } | .ForwardedToVm
        _m03 uint1_t  mark_page_bad;      //{ +0x0000@3  } | .MarkPageBad
        _m04 uint32_t as_ulong;           //{ +0x0000    } | .AsULONG
                                        
        SDK_MAGIC_PROPERTIES( "_WHEA_RECOVERY_ACTION.$", 0x0, false, 0x935b78ad1bf5d942 );                  
        SDK_FIXED_SIZE( recovery_action_t, 0x8 );                  
    };                                  
};
#include "magic/recovery_action_t.end.hpp"
SDK_VERIFY( union whea::recovery_action_t, 0x8 );
