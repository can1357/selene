#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_offload_read_input_t.start.hpp"
namespace win
{
    // [struct _FSCTL_OFFLOAD_READ_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_offload_read_input_t    
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t token_time_to_live;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TokenTimeToLive
        _m03 uint64_t file_offset;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileOffset
        _m04 uint64_t copy_length;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CopyLength
                                         
        SDK_NONVOL_PROPERTIES( "_FSCTL_OFFLOAD_READ_INPUT.$", 0x20, true, 0xc0cd533007a1a122 );                   
        SDK_FIXED_SIZE( fsctl_offload_read_input_t, 0x20 );                   
    };                                   
};
#include "magic/fsctl_offload_read_input_t.end.hpp"
SDK_VERIFY( struct win::fsctl_offload_read_input_t, 0x20 );
