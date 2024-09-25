#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ccswap_buffer_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CCSWAP_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ccswap_buffer_t                        
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 int64_t                  first_time_stamp;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FirstTimeStamp
        _m01 sdk::array<uint32_t, 16> tid_table;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TidTable
        _m02 sdk::array<int8_t, 16>   thread_base_priority;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ThreadBasePriority
                                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CCSWAP_BUFFER.$", 0x58, true, 0x1599bcb83ce967ff );                     
        SDK_FIXED_SIZE( perfinfo_ccswap_buffer_t, 0x58 );                     
    };                                                     
};
#include "magic/perfinfo_ccswap_buffer_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ccswap_buffer_t, 0x58 );
