#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_unused_bytes_info_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LFH_UNUSED_BYTES_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_unused_bytes_info_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 uint14_t               unused_bytes;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UnusedBytes
        _m01 uint1_t                extra_present;    //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .ExtraPresent
        _m02 uint1_t                one_byte_unused;  //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .OneByteUnused
        _m03 sdk::array<uint8_t, 2> bytes;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bytes
                                                    
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_UNUSED_BYTES_INFO.$", 0x2, true, 0xb004aa457d47b3c5 );                
        SDK_FIXED_SIZE( lfh_unused_bytes_info_t, 0x2 );                
    };                                              
};
#include "magic/lfh_unused_bytes_info_t.end.hpp"
SDK_VERIFY( struct heap::lfh_unused_bytes_info_t, 0x2 );
