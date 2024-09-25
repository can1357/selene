#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rearrange_file_data32_t.start.hpp"
namespace win
{
    // [struct _REARRANGE_FILE_DATA32]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rearrange_file_data32_t           
    {                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t source_starting_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceStartingOffset
        _m01 uint64_t target_offset;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetOffset
        _m02 uint32_t source_file_handle;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SourceFileHandle
        _m03 uint32_t length;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Length
        _m04 uint32_t flags;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                             
        SDK_NONVOL_PROPERTIES( "_REARRANGE_FILE_DATA32.$", 0x20, true, 0xe1b8a63521691e03 );                       
        SDK_FIXED_SIZE( rearrange_file_data32_t, 0x20 );                       
    };                                       
};
#include "magic/rearrange_file_data32_t.end.hpp"
SDK_VERIFY( struct win::rearrange_file_data32_t, 0x20 );
