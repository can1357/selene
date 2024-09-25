#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_memory_channel_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_MEMORY_CHANNEL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_memory_channel_information_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t channel_number;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ChannelNumber
        _m01 uint32_t channel_heat_index;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ChannelHeatIndex
        _m02 uint64_t total_page_count;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalPageCount
        _m03 uint64_t zero_page_count;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ZeroPageCount
        _m04 uint64_t free_page_count;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FreePageCount
        _m05 uint64_t standby_page_count;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StandbyPageCount
                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_MEMORY_CHANNEL_INFORMATION.$", 0x28, true, 0xa78e7d97981a80a8 );                   
        SDK_FIXED_SIZE( system_memory_channel_information_t, 0x28 );                   
    };                                        
};
#include "magic/system_memory_channel_information_t.end.hpp"
SDK_VERIFY( struct win::system_memory_channel_information_t, 0x28 );
