#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/shuffle_file_data_t.start.hpp"
namespace win
{
    // [struct _SHUFFLE_FILE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct shuffle_file_data_t        
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  starting_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingOffset
        _m01 int64_t  length;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m02 uint32_t flags;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                      
        SDK_NONVOL_PROPERTIES( "_SHUFFLE_FILE_DATA.$", 0x18, true, 0x7b32cd464c28217c );                
        SDK_FIXED_SIZE( shuffle_file_data_t, 0x18 );                
    };                                
};
#include "magic/shuffle_file_data_t.end.hpp"
SDK_VERIFY( struct win::shuffle_file_data_t, 0x18 );
