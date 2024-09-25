#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_zero_data_information_t.start.hpp"
namespace win
{
    // [struct _FILE_ZERO_DATA_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_zero_data_information_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 int64_t file_offset;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 int64_t beyond_final_zero;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BeyondFinalZero
                                       
        SDK_NONVOL_PROPERTIES( "_FILE_ZERO_DATA_INFORMATION.$", 0x10, true, 0xa604cd866149f574 );                  
        SDK_FIXED_SIZE( file_zero_data_information_t, 0x10 );                  
    };                                 
};
#include "magic/file_zero_data_information_t.end.hpp"
SDK_VERIFY( struct win::file_zero_data_information_t, 0x10 );
