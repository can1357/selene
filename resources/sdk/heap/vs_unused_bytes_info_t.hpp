#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vs_unused_bytes_info_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VS_UNUSED_BYTES_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vs_unused_bytes_info_t                   
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 uint13_t               unused_bytes;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UnusedBytes
        _m01 uint1_t                lfh_subsegment;   //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .LfhSubsegment
        _m02 uint1_t                extra_present;    //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .ExtraPresent
        _m03 uint1_t                one_byte_unused;  //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .OneByteUnused
        _m04 sdk::array<uint8_t, 2> bytes;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bytes
                                                    
        SDK_MAGIC_PROPERTIES( "_HEAP_VS_UNUSED_BYTES_INFO.$", 0x2, true, 0x7e048d9247c07d95 );                
        SDK_FIXED_SIZE( vs_unused_bytes_info_t, 0x2 );                
    };                                              
};
#include "magic/vs_unused_bytes_info_t.end.hpp"
SDK_VERIFY( struct heap::vs_unused_bytes_info_t, 0x2 );
