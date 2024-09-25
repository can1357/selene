#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/create_disk_gpt_t.start.hpp"
namespace nt
{
    // [struct _CREATE_DISK_GPT]
    // => WDK 10 (NV)
    //
    struct create_disk_gpt_t                       
    {                                              
        // WDK 10                                  
        //                                         
        _m00 struct nt::guid_t disk_id;              //{ +0x0000    } | .DiskId
        _m01 uint32_t          max_partition_count;  //{ +0x0010    } | .MaxPartitionCount
                                                   
        SDK_NONVOL_PROPERTIES( "_CREATE_DISK_GPT.$", 0x0, false, 0xf7fc25a468342ed9 );                    
        SDK_FIXED_SIZE( create_disk_gpt_t, 0x14 );                    
    };                                             
};
#include "magic/create_disk_gpt_t.end.hpp"
SDK_VERIFY( struct nt::create_disk_gpt_t, 0x14 );
