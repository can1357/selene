#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/region_information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_REGION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct region_information_t                      
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint64_t address;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint64_t reserve_size;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReserveSize
        _m02 uint64_t commit_size;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommitSize
        _m03 uint64_t first_range_information_offset;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FirstRangeInformationOffset
        _m04 uint64_t next_region_information_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NextRegionInformationOffset
                                                     
        SDK_MAGIC_PROPERTIES( "_HEAP_REGION_INFORMATION.$", 0x28, true, 0x1ef76dfd27dbc7c6 );                               
        SDK_FIXED_SIZE( region_information_t, 0x28 );                               
    };                                               
};
#include "magic/region_information_t.end.hpp"
SDK_VERIFY( struct heap::region_information_t, 0x28 );
