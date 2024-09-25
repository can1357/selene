#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_offload_write_input_t.start.hpp"
namespace win
{
    // [struct _FSCTL_OFFLOAD_WRITE_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_offload_write_input_t                
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 uint32_t                 size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                 flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint64_t                 file_offset;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileOffset
        _m03 uint64_t                 copy_length;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CopyLength
        _m04 uint64_t                 transfer_offset;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .TransferOffset
        _m05 sdk::array<uint8_t, 512> token;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Token
                                                      
        SDK_NONVOL_PROPERTIES( "_FSCTL_OFFLOAD_WRITE_INPUT.$", 0x220, true, 0x5a44d196fb29d483 );                
        SDK_FIXED_SIZE( fsctl_offload_write_input_t, 0x220 );                
    };                                                
};
#include "magic/fsctl_offload_write_input_t.end.hpp"
SDK_VERIFY( struct win::fsctl_offload_write_input_t, 0x220 );
