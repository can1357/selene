#pragma once
#include <sdkgen/support_library.hpp>
#include "partition_information_ex_t.hpp"
#include "drive_layout_information_gpt_t.hpp"
#include "drive_layout_information_mbr_t.hpp"

#include "magic/drive_layout_information_ex_t.start.hpp"
namespace nt
{
    // [struct _DRIVE_LAYOUT_INFORMATION_EX]
    // => WDK 10 (NV)
    //
    struct drive_layout_information_ex_t                               
    {                                                                  
        using partition_entry_t = sdk::array<struct nt::partition_information_ex_t, 1>;                
                                                                       
        // WDK 10                                                      
        //                                                             
        _m00 uint32_t                                  partition_style;  //{ +0x0000    } | .PartitionStyle
        _m01 uint32_t                                  partition_count;  //{ +0x0004    } | .PartitionCount
        _m02 struct nt::drive_layout_information_mbr_t mbr;              //{ +0x0008    } | .Mbr
        _m03 struct nt::drive_layout_information_gpt_t gpt;              //{ +0x0008    } | .Gpt
        _m04 partition_entry_t                         partition_entry;  //{ +0x0030    } | .PartitionEntry
                                                                       
        SDK_NONVOL_PROPERTIES( "_DRIVE_LAYOUT_INFORMATION_EX.$", 0x0, false, 0x2b77f635f2091c3 );                
        SDK_FIXED_SIZE( drive_layout_information_ex_t, 0xc0 );                
    };                                                                 
};
#include "magic/drive_layout_information_ex_t.end.hpp"
SDK_VERIFY( struct nt::drive_layout_information_ex_t, 0xc0 );
