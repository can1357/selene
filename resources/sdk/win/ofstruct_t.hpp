#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ofstruct_t.start.hpp"
namespace win
{
    // [struct _OFSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ofstruct_t                           
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                      
        _m00 uint8_t               c_bytes;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cBytes
        _m01 uint8_t               f_fixed_disk;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .fFixedDisk
        _m02 uint16_t              n_err_code;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .nErrCode
        _m03 sdk::array<char, 128> sz_path_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .szPathName
                                                
        SDK_MAGIC_PROPERTIES( "_OFSTRUCT.$", 0x88, true, 0xa60fda0aa4ae238 );             
        SDK_FIXED_SIZE( ofstruct_t, 0x88 );             
    };                                          
};
#include "magic/ofstruct_t.end.hpp"
SDK_VERIFY( struct win::ofstruct_t, 0x88 );
