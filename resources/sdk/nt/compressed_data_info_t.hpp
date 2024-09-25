#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/compressed_data_info_t.start.hpp"
namespace nt
{
    // [struct _COMPRESSED_DATA_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct compressed_data_info_t                                  
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                         
        _m00 uint16_t                compression_format_and_engine;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CompressionFormatAndEngine
        _m01 uint8_t                 compression_unit_shift;         //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .CompressionUnitShift
        _m02 uint8_t                 chunk_shift;                    //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .ChunkShift
        _m03 uint8_t                 cluster_shift;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ClusterShift
        _m04 uint16_t                number_of_chunks;               //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .NumberOfChunks
        _m05 sdk::array<uint32_t, 1> compressed_chunk_sizes;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CompressedChunkSizes
                                                                   
        SDK_NONVOL_PROPERTIES( "_COMPRESSED_DATA_INFO.$", 0xc, true, 0x118800c4fbbebeb9 );                              
        SDK_FIXED_SIZE( compressed_data_info_t, 0xc );                              
    };                                                             
};
#include "magic/compressed_data_info_t.end.hpp"
SDK_VERIFY( struct nt::compressed_data_info_t, 0xc );
