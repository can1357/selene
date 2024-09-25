#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hook_process_info_t.start.hpp"
namespace verf
{
    // [struct _VF_HOOK_PROCESS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hook_process_info_t            
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t ddi_call_status;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DdiCallStatus
        _m01 uint8_t  donot_call_kmdf_lib;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DonotCallKmdfLib
                                          
        SDK_MAGIC_PROPERTIES( "_VF_HOOK_PROCESS_INFO.$", 0x8, true, 0x188a2475c137449 );                    
        SDK_FIXED_SIZE( hook_process_info_t, 0x8 );                    
    };                                    
};
#include "magic/hook_process_info_t.end.hpp"
SDK_VERIFY( struct verf::hook_process_info_t, 0x8 );
