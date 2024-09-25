#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/processinfoclass_t.hpp"

#include "magic/query_debug_virtual_process_t.start.hpp"
namespace rtl
{
    // [struct _RTL_QUERY_DEBUG_VIRTUAL_PROCESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_debug_virtual_process_t                            
    {                                                               
        using prtl_query_debug_virtual_process_read_memory_routine_t =       sdk::function<int32_t(void*, void*, void*, uint64_t, uint64_t*)>*;                          
        using read_memory_routine_t =                                        prtl_query_debug_virtual_process_read_memory_routine_t ;                          
        using prtl_query_debug_virtual_process_query_information_routine_t = sdk::function<int32_t(void*, enum win::processinfoclass_t, void*, uint32_t, uint32_t*)>*;                          
        using query_information_routine_t =                                  prtl_query_debug_virtual_process_query_information_routine_t ;                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 void*                        context;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Context
        _m01 read_memory_routine_t        read_memory_routine;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReadMemoryRoutine
        _m02 query_information_routine_t  query_information_routine;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QueryInformationRoutine
                                                                    
        SDK_MAGIC_PROPERTIES( "_RTL_QUERY_DEBUG_VIRTUAL_PROCESS.$", 0x18, true, 0x48e5bdb8213cdc6c );                          
        SDK_FIXED_SIZE( query_debug_virtual_process_t, 0x18 );                          
    };                                                              
};
#include "magic/query_debug_virtual_process_t.end.hpp"
SDK_VERIFY( struct rtl::query_debug_virtual_process_t, 0x18 );
