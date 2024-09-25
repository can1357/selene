#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_special_calls_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_QUERY_SPECIAL_CALLS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_special_calls_t              
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t number_of_special_calls;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfSpecialCalls
                                              
        SDK_MAGIC_PROPERTIES( "_DBGKD_QUERY_SPECIAL_CALLS.$", 0x4, true, 0xa59990d25059e891 );                        
        SDK_FIXED_SIZE( query_special_calls_t, 0x4 );                        
    };                                        
};
#include "magic/query_special_calls_t.end.hpp"
SDK_VERIFY( struct dbgkd::query_special_calls_t, 0x4 );
