#pragma once
#include <sdkgen/support_library.hpp>
#include "partition_style_t.hpp"
#include "partition_information_gpt_t.hpp"
#include "partition_information_mbr_t.hpp"

#include "magic/partition_information_ex_t.start.hpp"
namespace nt
{
    // [struct _PARTITION_INFORMATION_EX]
    // => WDK 10 (NV)
    //
    struct partition_information_ex_t                                    
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 enum nt::partition_style_t             partition_style;       //{ +0x0000    } | .PartitionStyle
        _m01 int64_t                                starting_offset;       //{ +0x0008    } | .StartingOffset
        _m02 int64_t                                partition_length;      //{ +0x0010    } | .PartitionLength
        _m03 uint32_t                               partition_number;      //{ +0x0018    } | .PartitionNumber
        _m04 uint8_t                                rewrite_partition;     //{ +0x001c    } | .RewritePartition
        _m05 uint8_t                                is_service_partition;  //{ +0x001d    } | .IsServicePartition
        _m06 struct nt::partition_information_mbr_t mbr;                   //{ +0x0020    } | .Mbr
        _m07 struct nt::partition_information_gpt_t gpt;                   //{ +0x0020    } | .Gpt
                                                                         
        SDK_NONVOL_PROPERTIES( "_PARTITION_INFORMATION_EX.$", 0x0, false, 0x797b0f375f183b16 );                     
        SDK_FIXED_SIZE( partition_information_ex_t, 0x90 );                     
    };                                                                   
};
#include "magic/partition_information_ex_t.end.hpp"
SDK_VERIFY( struct nt::partition_information_ex_t, 0x90 );
