#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/range_information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_RANGE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct range_information_t                       
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint64_t address;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint64_t size;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint32_t type;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Type
        _m03 uint32_t protection;                      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Protection
        _m04 uint64_t first_block_information_offset;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FirstBlockInformationOffset
        _m05 uint64_t next_range_information_offset;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NextRangeInformationOffset
                                                     
        SDK_MAGIC_PROPERTIES( "_HEAP_RANGE_INFORMATION.$", 0x28, true, 0x15c4042c5dfb7af1 );                               
        SDK_FIXED_SIZE( range_information_t, 0x28 );                               
    };                                               
};
#include "magic/range_information_t.end.hpp"
SDK_VERIFY( struct heap::range_information_t, 0x28 );
