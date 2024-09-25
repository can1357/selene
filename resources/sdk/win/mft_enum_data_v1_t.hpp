#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mft_enum_data_v1_t.start.hpp"
namespace win
{
    // [struct MFT_ENUM_DATA_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mft_enum_data_v1_t                     
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint64_t start_file_reference_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartFileReferenceNumber
        _m01 int64_t  low_usn;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LowUsn
        _m02 int64_t  high_usn;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HighUsn
        _m03 uint16_t min_major_version;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinMajorVersion
        _m04 uint16_t max_major_version;            //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .MaxMajorVersion
                                                  
        SDK_MAGIC_PROPERTIES( "MFT_ENUM_DATA_V1.$", 0x20, true, 0xe11429dc770da62a );                            
        SDK_FIXED_SIZE( mft_enum_data_v1_t, 0x20 );                            
    };                                            
};
#include "magic/mft_enum_data_v1_t.end.hpp"
SDK_VERIFY( struct win::mft_enum_data_v1_t, 0x20 );
