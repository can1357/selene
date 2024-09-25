#pragma once
#include <sdkgen/support_library.hpp>
#include "vs_chunk_header_size_t.hpp"

#include "magic/vs_chunk_header_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VS_CHUNK_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vs_chunk_header_t                                                
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                  
        _m00 union heap::vs_chunk_header_size_t sizes;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sizes
        _m01 uint8_t                            encoded_segment_page_offset;  //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .EncodedSegmentPageOffset
        _m02 uint1_t                            unused_bytes;                 //{ +0x0008@8  +0x0008@8  +0x0008@8  +0x0008@8  } | .UnusedBytes
        _m03 uint1_t                            skip_during_walk;             //{ +0x0008@9  +0x0008@9  +0x0008@9  +0x0008@9  } | .SkipDuringWalk
        _m04 uint32_t                           allocated_chunk_bits;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatedChunkBits
                                                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_VS_CHUNK_HEADER.$", 0x10, true, 0xb9bfb6f06337720 );                            
        SDK_FIXED_SIZE( vs_chunk_header_t, 0x10 );                            
    };                                                                      
};
#include "magic/vs_chunk_header_t.end.hpp"
SDK_VERIFY( struct heap::vs_chunk_header_t, 0x10 );
