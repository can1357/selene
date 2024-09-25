#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpu_quota_query_entry_t.start.hpp"
namespace ps
{
    // [struct _PS_CPU_QUOTA_QUERY_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cpu_quota_query_entry_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t session_id;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
        _m01 uint32_t weight;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Weight
                                  
        SDK_MAGIC_PROPERTIES( "_PS_CPU_QUOTA_QUERY_ENTRY.$", 0x8, true, 0x5c070cc1700739af );           
        SDK_FIXED_SIZE( cpu_quota_query_entry_t, 0x8 );           
    };                            
};
#include "magic/cpu_quota_query_entry_t.end.hpp"
SDK_VERIFY( struct ps::cpu_quota_query_entry_t, 0x8 );
