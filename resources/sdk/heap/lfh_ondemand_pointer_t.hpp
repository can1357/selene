#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_ondemand_pointer_t.start.hpp"
namespace heap
{
    // [union _HEAP_LFH_ONDEMAND_POINTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union lfh_ondemand_pointer_t             
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint1_t  invalid;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Invalid
        _m01 uint1_t  allocation_in_progress;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AllocationInProgress
        _m02 uint16_t usage_data;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .UsageData
        _m03 void*    all_bits;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllBits
                                             
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_ONDEMAND_POINTER.$", 0x8, true, 0xd5f214b8f5a8ec3b );                       
        SDK_FIXED_SIZE( lfh_ondemand_pointer_t, 0x8 );                       
    };                                       
};
#include "magic/lfh_ondemand_pointer_t.end.hpp"
SDK_VERIFY( union heap::lfh_ondemand_pointer_t, 0x8 );
