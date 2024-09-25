#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_handle_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HANDLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_handle_information_t           
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t handle_count;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleCount
        _m01 uint32_t handle_count_high_watermark;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HandleCountHighWatermark
                                                  
        SDK_MAGIC_PROPERTIES( "_PROCESS_HANDLE_INFORMATION.$", 0x8, true, 0x37d02025abba90d3 );                            
        SDK_FIXED_SIZE( process_handle_information_t, 0x8 );                            
    };                                            
};
#include "magic/process_handle_information_t.end.hpp"
SDK_VERIFY( struct win::process_handle_information_t, 0x8 );
