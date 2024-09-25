#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_debug_information_info_t.start.hpp"
namespace rtl
{
    // [struct _RTL_QUERY_DEBUG_INFORMATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_debug_information_info_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t unique_process_id;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcessId
        _m01 uint32_t flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint64_t buffer;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                                         
        SDK_MAGIC_PROPERTIES( "_RTL_QUERY_DEBUG_INFORMATION_INFO.$", 0x10, true, 0x6b44b7609d65a262 );                  
        SDK_FIXED_SIZE( query_debug_information_info_t, 0x10 );                  
    };                                   
};
#include "magic/query_debug_information_info_t.end.hpp"
SDK_VERIFY( struct rtl::query_debug_information_info_t, 0x10 );
