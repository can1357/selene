#pragma once
#include <sdkgen/support_library.hpp>
#include "cpu_quota_query_entry_t.hpp"

#include "magic/cpu_quota_query_information_t.start.hpp"
namespace ps
{
    // [struct _PS_CPU_QUOTA_QUERY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cpu_quota_query_information_t                
    {                                                   
        using session_information_t = sdk::array<struct ps::cpu_quota_query_entry_t, 1>;                    
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint32_t               session_count;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionCount
        _m01 session_information_t  session_information;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SessionInformation
                                                        
        SDK_MAGIC_PROPERTIES( "_PS_CPU_QUOTA_QUERY_INFORMATION.$", 0xc, true, 0xe5f2c64a9295dfe4 );                    
        SDK_FIXED_SIZE( cpu_quota_query_information_t, 0xc );                    
    };                                                  
};
#include "magic/cpu_quota_query_information_t.end.hpp"
SDK_VERIFY( struct ps::cpu_quota_query_information_t, 0xc );
