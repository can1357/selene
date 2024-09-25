#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/drive_layout_information_gpt_t.start.hpp"
namespace nt
{
    // [struct _DRIVE_LAYOUT_INFORMATION_GPT]
    // => WDK 10 (NV)
    //
    struct drive_layout_information_gpt_t             
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 struct nt::guid_t disk_id;                 //{ +0x0000    } | .DiskId
        _m01 int64_t           starting_usable_offset;  //{ +0x0010    } | .StartingUsableOffset
        _m02 int64_t           usable_length;           //{ +0x0018    } | .UsableLength
        _m03 uint32_t          max_partition_count;     //{ +0x0020    } | .MaxPartitionCount
                                                      
        SDK_NONVOL_PROPERTIES( "_DRIVE_LAYOUT_INFORMATION_GPT.$", 0x0, false, 0x7fe1940c2b29b7dc );                       
        SDK_FIXED_SIZE( drive_layout_information_gpt_t, 0x28 );                       
    };                                                
};
#include "magic/drive_layout_information_gpt_t.end.hpp"
SDK_VERIFY( struct nt::drive_layout_information_gpt_t, 0x28 );
