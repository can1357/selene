#pragma once
#include <sdkgen/support_library.hpp>
#include "create_disk_gpt_t.hpp"
#include "create_disk_mbr_t.hpp"
#include "partition_style_t.hpp"

#include "magic/create_disk_t.start.hpp"
namespace nt
{
    // [struct _CREATE_DISK]
    // => WDK 10 (NV)
    //
    struct create_disk_t                                  
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 enum nt::partition_style_t   partition_style;  //{ +0x0000    } | .PartitionStyle
        _m01 struct nt::create_disk_mbr_t mbr;              //{ +0x0004    } | .Mbr
        _m02 struct nt::create_disk_gpt_t gpt;              //{ +0x0004    } | .Gpt
                                                          
        SDK_NONVOL_PROPERTIES( "_CREATE_DISK.$", 0x0, false, 0x3fc42a64a97cdb76 );                
        SDK_FIXED_SIZE( create_disk_t, 0x18 );                
    };                                                    
};
#include "magic/create_disk_t.end.hpp"
SDK_VERIFY( struct nt::create_disk_t, 0x18 );
