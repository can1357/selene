#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vs_chunk_header_size_t.start.hpp"
namespace heap
{
    // [union _HEAP_VS_CHUNK_HEADER_SIZE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union vs_chunk_header_size_t       
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint16_t memory_cost;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MemoryCost
        _m01 uint16_t unsafe_size;       //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .UnsafeSize
        _m02 uint16_t unsafe_prev_size;  //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .UnsafePrevSize
        _m03 uint8_t  allocated;         //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .Allocated
        _m04 uint16_t key_u_short;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyUShort
        _m05 uint32_t key_u_long;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyULong
        _m06 uint64_t header_bits;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeaderBits
                                       
        SDK_MAGIC_PROPERTIES( "_HEAP_VS_CHUNK_HEADER_SIZE.$", 0x8, true, 0x2c94c53e3c1f1550 );                 
        SDK_FIXED_SIZE( vs_chunk_header_size_t, 0x8 );                 
    };                                 
};
#include "magic/vs_chunk_header_size_t.end.hpp"
SDK_VERIFY( union heap::vs_chunk_header_size_t, 0x8 );
