#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_zero_data_information_ex_t.start.hpp"
namespace win
{
    // [struct _FILE_ZERO_DATA_INFORMATION_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_zero_data_information_ex_t
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 int64_t  file_offset;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 int64_t  beyond_final_zero;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BeyondFinalZero
        _m02 uint32_t flags;                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                          
        SDK_NONVOL_PROPERTIES( "_FILE_ZERO_DATA_INFORMATION_EX.$", 0x18, true, 0xf3b5fc30b0d57ea6 );                  
        SDK_FIXED_SIZE( file_zero_data_information_ex_t, 0x18 );                  
    };                                    
};
#include "magic/file_zero_data_information_ex_t.end.hpp"
SDK_VERIFY( struct win::file_zero_data_information_ex_t, 0x18 );
