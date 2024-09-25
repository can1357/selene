#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_long_dpc_mitigation_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_LONG_DPC_MITIGATION_INFORMATION]
    // => Windows 11
    //
    struct perfinfo_long_dpc_mitigation_information_t
    {                                                
        // Windows 11                         
        //                                    
        _m00 uint32_t current_thread_id;               //{ +0x0000    } | .CurrentThreadId
        _m01 uint32_t next_thread_id;                  //{ +0x0004    } | .NextThreadId
        _m02 int8_t   current_thread_priority;         //{ +0x0008    } | .CurrentThreadPriority
        _m03 int8_t   next_thread_priority;            //{ +0x0009    } | .NextThreadPriority
        _m04 uint8_t  schedule_dpc_delegate;           //{ +0x000a    } | .ScheduleDpcDelegate
        _m05 uint8_t  swap_to_dpc_delegate;            //{ +0x000b    } | .SwapToDpcDelegate
                                                     
        SDK_MAGIC_PROPERTIES( "_PERFINFO_LONG_DPC_MITIGATION_INFORMATION.$", 0x0, false, 0xc5cf6066aaa0c4e1 );                        
        SDK_FIXED_SIZE( perfinfo_long_dpc_mitigation_information_t, 0xc );                        
    };                                               
};
#include "magic/perfinfo_long_dpc_mitigation_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_long_dpc_mitigation_information_t, 0xc );
