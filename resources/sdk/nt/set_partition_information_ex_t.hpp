#pragma once
#include <sdkgen/support_library.hpp>
#include "partition_style_t.hpp"
#include "partition_information_gpt_t.hpp"
#include "set_partition_information_t.hpp"

#include "magic/set_partition_information_ex_t.start.hpp"
namespace nt
{
    // [struct _SET_PARTITION_INFORMATION_EX]
    // => WDK 10 (NV)
    //
    struct set_partition_information_ex_t                           
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 enum nt::partition_style_t             partition_style;  //{ +0x0000    } | .PartitionStyle
        _m01 struct nt::set_partition_information_t mbr;              //{ +0x0008    } | .Mbr
        _m02 struct nt::partition_information_gpt_t gpt;              //{ +0x0008    } | .Gpt
                                                                    
        SDK_NONVOL_PROPERTIES( "_SET_PARTITION_INFORMATION_EX.$", 0x0, false, 0xa6fe27b40a7fcdd4 );                
        SDK_FIXED_SIZE( set_partition_information_ex_t, 0x78 );                
    };                                                              
};
#include "magic/set_partition_information_ex_t.end.hpp"
SDK_VERIFY( struct nt::set_partition_information_ex_t, 0x78 );
