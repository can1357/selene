#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_offload_write_output_t.start.hpp"
namespace win
{
    // [struct _FSCTL_OFFLOAD_WRITE_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_offload_write_output_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint64_t length_written;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LengthWritten
                                       
        SDK_NONVOL_PROPERTIES( "_FSCTL_OFFLOAD_WRITE_OUTPUT.$", 0x10, true, 0x3e0b16989e058a0e );               
        SDK_FIXED_SIZE( fsctl_offload_write_output_t, 0x10 );               
    };                                 
};
#include "magic/fsctl_offload_write_output_t.end.hpp"
SDK_VERIFY( struct win::fsctl_offload_write_output_t, 0x10 );
