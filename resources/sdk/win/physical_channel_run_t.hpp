#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_channel_run_t.start.hpp"
namespace win
{
    // [struct _PHYSICAL_CHANNEL_RUN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct physical_channel_run_t    
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t node_number;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeNumber
        _m01 uint32_t channel_number;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ChannelNumber
        _m02 uint64_t base_page;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BasePage
        _m03 uint64_t page_count;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PageCount
        _m04 uint64_t flags;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                     
        SDK_MAGIC_PROPERTIES( "_PHYSICAL_CHANNEL_RUN.$", 0x20, true, 0x7c4856d5a206dc99 );               
        SDK_FIXED_SIZE( physical_channel_run_t, 0x20 );               
    };                               
};
#include "magic/physical_channel_run_t.end.hpp"
SDK_VERIFY( struct win::physical_channel_run_t, 0x20 );
