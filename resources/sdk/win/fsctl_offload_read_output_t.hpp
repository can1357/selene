#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_offload_read_output_t.start.hpp"
namespace win
{
    // [struct _FSCTL_OFFLOAD_READ_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_offload_read_output_t                
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 uint32_t                 size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                 flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint64_t                 transfer_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TransferLength
        _m03 sdk::array<uint8_t, 512> token;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Token
                                                      
        SDK_NONVOL_PROPERTIES( "_FSCTL_OFFLOAD_READ_OUTPUT.$", 0x210, true, 0xbc07c5cc8e1802b4 );                
        SDK_FIXED_SIZE( fsctl_offload_read_output_t, 0x210 );                
    };                                                
};
#include "magic/fsctl_offload_read_output_t.end.hpp"
SDK_VERIFY( struct win::fsctl_offload_read_output_t, 0x210 );
