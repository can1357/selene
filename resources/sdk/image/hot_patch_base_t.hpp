#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hot_patch_base_t.start.hpp"
namespace image
{
    // [struct _IMAGE_HOT_PATCH_BASE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hot_patch_base_t                    
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t sequence_number;           //{ +0x0000    +0x0000    +0x0000    } | .SequenceNumber
        _m01 uint32_t flags;                     //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t original_time_date_stamp;  //{ +0x0008    +0x0008    +0x0008    } | .OriginalTimeDateStamp
        _m03 uint32_t original_check_sum;        //{ +0x000c    +0x000c    +0x000c    } | .OriginalCheckSum
        _m04 uint32_t code_integrity_info;       //{ +0x0010    +0x0010    +0x0010    } | .CodeIntegrityInfo
        _m05 uint32_t code_integrity_size;       //{ +0x0014    +0x0014    +0x0014    } | .CodeIntegritySize
        _m06 uint32_t patch_table;               //{ +0x0018    +0x0018    +0x0018    } | .PatchTable
        _m07 uint32_t buffer_offset;             //{ +0x001c    +0x001c    +0x001c    } | .BufferOffset
                                               
        SDK_MAGIC_PROPERTIES( "_IMAGE_HOT_PATCH_BASE.$", 0x20, true, 0x615ca3f9325045a4 );                         
        SDK_FIXED_SIZE( hot_patch_base_t, 0x20 );                         
    };                                         
};
#include "magic/hot_patch_base_t.end.hpp"
SDK_VERIFY( struct image::hot_patch_base_t, 0x20 );
