#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_special_pool_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SPECIAL_POOL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_special_pool_information_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t pool_tag;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PoolTag
        _m01 uint32_t flags;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SPECIAL_POOL_INFORMATION.$", 0x8, true, 0x6707b0168e725eee );         
        SDK_FIXED_SIZE( system_special_pool_information_t, 0x8 );         
    };                                      
};
#include "magic/system_special_pool_information_t.end.hpp"
SDK_VERIFY( struct win::system_special_pool_information_t, 0x8 );
