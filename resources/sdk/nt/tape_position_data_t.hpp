#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_position_data_t.start.hpp"
namespace nt
{
    // [struct _TAPE_POSITION_DATA]
    // => WDK 10 (NV)
    //
    struct tape_position_data_t                                
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 uint1_t                block_position_unsupported;  //{ +0x0000@2  } | .BlockPositionUnsupported
        _m01 uint1_t                end_of_partition;            //{ +0x0000@6  } | .EndOfPartition
        _m02 uint1_t                beginning_of_partition;      //{ +0x0000@7  } | .BeginningOfPartition
        _m03 uint8_t                partition_number;            //{ +0x0001    } | .PartitionNumber
        _m04 sdk::array<uint8_t, 4> first_block;                 //{ +0x0004    } | .FirstBlock
        _m05 sdk::array<uint8_t, 4> last_block;                  //{ +0x0008    } | .LastBlock
        _m06 sdk::array<uint8_t, 3> number_of_blocks;            //{ +0x000d    } | .NumberOfBlocks
        _m07 sdk::array<uint8_t, 4> number_of_bytes;             //{ +0x0010    } | .NumberOfBytes
                                                               
        SDK_NONVOL_PROPERTIES( "_TAPE_POSITION_DATA.$", 0x0, false, 0x181c7e71b84c1128 );                           
        SDK_FIXED_SIZE( tape_position_data_t, 0x14 );                           
    };                                                         
};
#include "magic/tape_position_data_t.end.hpp"
SDK_VERIFY( struct nt::tape_position_data_t, 0x14 );
