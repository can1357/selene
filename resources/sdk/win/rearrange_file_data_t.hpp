#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rearrange_file_data_t.start.hpp"
namespace win
{
    // [struct _REARRANGE_FILE_DATA]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rearrange_file_data_t             
    {                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t source_starting_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceStartingOffset
        _m01 uint64_t target_offset;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetOffset
        _m02 void*    source_file_handle;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SourceFileHandle
        _m03 uint32_t length;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
        _m04 uint32_t flags;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Flags
                                             
        SDK_NONVOL_PROPERTIES( "_REARRANGE_FILE_DATA.$", 0x20, true, 0x63e672a58d40d3f4 );                       
        SDK_FIXED_SIZE( rearrange_file_data_t, 0x20 );                       
    };                                       
};
#include "magic/rearrange_file_data_t.end.hpp"
SDK_VERIFY( struct win::rearrange_file_data_t, 0x20 );
