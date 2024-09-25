#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vad_sequential_info_t.start.hpp"
namespace mi
{
    // [struct _MI_VAD_SEQUENTIAL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vad_sequential_info_t
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint12_t length;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Length
        _m01 uint52_t vpn;        //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Vpn
                                
        SDK_MAGIC_PROPERTIES( "_MI_VAD_SEQUENTIAL_INFO.$", 0x8, true, 0xb00dedf95b2910f1 );       
        SDK_FIXED_SIZE( vad_sequential_info_t, 0x8 );       
    };                          
};
#include "magic/vad_sequential_info_t.end.hpp"
SDK_VERIFY( struct mi::vad_sequential_info_t, 0x8 );
