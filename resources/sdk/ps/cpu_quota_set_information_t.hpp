#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpu_quota_set_information_t.start.hpp"
namespace ps
{
    // [struct _PS_CPU_QUOTA_SET_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cpu_quota_set_information_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 int64_t  session_handle;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionHandle
        _m01 uint32_t weight;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Weight
                                      
        SDK_MAGIC_PROPERTIES( "_PS_CPU_QUOTA_SET_INFORMATION.$", 0x10, true, 0x840c0e6958d5768a );               
        SDK_FIXED_SIZE( cpu_quota_set_information_t, 0x10 );               
    };                                
};
#include "magic/cpu_quota_set_information_t.end.hpp"
SDK_VERIFY( struct ps::cpu_quota_set_information_t, 0x10 );
