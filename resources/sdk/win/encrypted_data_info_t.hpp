#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/encrypted_data_info_t.start.hpp"
namespace win
{
    // [struct _ENCRYPTED_DATA_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct encrypted_data_info_t                                    
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m00 uint64_t                starting_file_offset;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingFileOffset
        _m01 uint32_t                output_buffer_offset;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .OutputBufferOffset
        _m02 uint32_t                bytes_within_file_size;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .BytesWithinFileSize
        _m03 uint32_t                bytes_within_valid_data_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BytesWithinValidDataLength
        _m04 uint16_t                compression_format;              //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .CompressionFormat
        _m05 uint8_t                 data_unit_shift;                 //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .DataUnitShift
        _m06 uint8_t                 chunk_shift;                     //{ +0x0017    +0x0017    +0x0017    +0x0017    +0x0017    } | .ChunkShift
        _m07 uint8_t                 cluster_shift;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ClusterShift
        _m08 uint8_t                 encryption_format;               //{ +0x0019    +0x0019    +0x0019    +0x0019    +0x0019    } | .EncryptionFormat
        _m09 uint16_t                number_of_data_blocks;           //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .NumberOfDataBlocks
        _m10 sdk::array<uint32_t, 1> data_block_size;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .DataBlockSize
                                                                    
        SDK_NONVOL_PROPERTIES( "_ENCRYPTED_DATA_INFO.$", 0x20, true, 0xc1ca968eac2fac04 );                               
        SDK_FIXED_SIZE( encrypted_data_info_t, 0x20 );                               
    };                                                              
};
#include "magic/encrypted_data_info_t.end.hpp"
SDK_VERIFY( struct win::encrypted_data_info_t, 0x20 );
