#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sid_values_block_t.start.hpp"
namespace sep
{
    // [struct _SEP_SID_VALUES_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sid_values_block_t          
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t block_length;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BlockLength
        _m01 int64_t  reference_count;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReferenceCount
        _m02 uint32_t sid_count;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SidCount
        _m03 uint64_t sid_values_start;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SidValuesStart
                                       
        SDK_MAGIC_PROPERTIES( "_SEP_SID_VALUES_BLOCK.$", 0x20, true, 0x927e97f14a556c62 );                 
        SDK_FIXED_SIZE( sid_values_block_t, 0x20 );                 
    };                                 
};
#include "magic/sid_values_block_t.end.hpp"
SDK_VERIFY( struct sep::sid_values_block_t, 0x20 );
