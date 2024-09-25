#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_random_data_t.start.hpp"
namespace ntdll
{
    // [union _LFH_RANDOM_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union lfh_random_data_t                      
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                       
        _m00 sdk::array<uint8_t, 256>  bytes;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bytes
        _m01 sdk::array<uint16_t, 128> words;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Words
        _m02 sdk::array<uint64_t, 32>  quadwords;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Quadwords
                                                 
        SDK_MAGIC_PROPERTIES( "_LFH_RANDOM_DATA.$", 0x100, true, 0x42dfda441dd5c255 );          
        SDK_FIXED_SIZE( lfh_random_data_t, 0x100 );          
    };                                           
};
#include "magic/lfh_random_data_t.end.hpp"
SDK_VERIFY( union ntdll::lfh_random_data_t, 0x100 );
