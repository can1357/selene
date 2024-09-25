#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_memory_policy_t.hpp"

#include "magic/physical_memory_info_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PHYSICAL_MEMORY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct physical_memory_info_t                      
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                             
        _m00 enum rtl::physical_memory_policy_t policy;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Policy
                                                       
        SDK_MAGIC_PROPERTIES( "_RTL_PHYSICAL_MEMORY_INFO.$", 0x4, true, 0xb3af6c462493cc16 );       
        SDK_FIXED_SIZE( physical_memory_info_t, 0x4 );       
    };                                                 
};
#include "magic/physical_memory_info_t.end.hpp"
SDK_VERIFY( struct rtl::physical_memory_info_t, 0x4 );
