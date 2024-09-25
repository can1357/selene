#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_unmap_space_input_buffer_t.start.hpp"
namespace win
{
    // [struct _FSCTL_UNMAP_SPACE_INPUT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_unmap_space_input_buffer_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 int64_t bytes_to_unmap;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BytesToUnmap
                                           
        SDK_NONVOL_PROPERTIES( "_FSCTL_UNMAP_SPACE_INPUT_BUFFER.$", 0x8, true, 0x402934101ec49609 );               
        SDK_FIXED_SIZE( fsctl_unmap_space_input_buffer_t, 0x8 );               
    };                                     
};
#include "magic/fsctl_unmap_space_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::fsctl_unmap_space_input_buffer_t, 0x8 );
