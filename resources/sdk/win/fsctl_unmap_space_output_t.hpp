#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_unmap_space_output_t.start.hpp"
namespace win
{
    // [struct _FSCTL_UNMAP_SPACE_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_unmap_space_output_t
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 int64_t bytes_unmapped;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BytesUnmapped
                                     
        SDK_NONVOL_PROPERTIES( "_FSCTL_UNMAP_SPACE_OUTPUT.$", 0x8, true, 0x1e09a65fff2648f0 );               
        SDK_FIXED_SIZE( fsctl_unmap_space_output_t, 0x8 );               
    };                               
};
#include "magic/fsctl_unmap_space_output_t.end.hpp"
SDK_VERIFY( struct win::fsctl_unmap_space_output_t, 0x8 );
