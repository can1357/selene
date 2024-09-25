#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mft_enum_data_v0_t.start.hpp"
namespace win
{
    // [struct MFT_ENUM_DATA_V0]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mft_enum_data_v0_t                     
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint64_t start_file_reference_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartFileReferenceNumber
        _m01 int64_t  low_usn;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LowUsn
        _m02 int64_t  high_usn;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HighUsn
                                                  
        SDK_MAGIC_PROPERTIES( "MFT_ENUM_DATA_V0.$", 0x18, true, 0xd50a705ef120f671 );                            
        SDK_FIXED_SIZE( mft_enum_data_v0_t, 0x18 );                            
    };                                            
};
#include "magic/mft_enum_data_v0_t.end.hpp"
SDK_VERIFY( struct win::mft_enum_data_v0_t, 0x18 );
