#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/info_block_t.start.hpp"
namespace wheap
{
    struct work_queue_t;
    struct error_source_table_t;

    // [struct _WHEAP_INFO_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct info_block_t                                             
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 uint32_t                            error_source_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ErrorSourceCount
        _m01 struct wheap::error_source_table_t* error_source_table;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ErrorSourceTable
        _m02 struct wheap::work_queue_t*         work_queue;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WorkQueue
                                                                    
        SDK_MAGIC_PROPERTIES( "_WHEAP_INFO_BLOCK.$", 0x18, true, 0xcd11fa0bdac09fcd );                   
        SDK_FIXED_SIZE( info_block_t, 0x18 );                       
    };                                                              
};
#include "magic/info_block_t.end.hpp"
SDK_VERIFY( struct wheap::info_block_t, 0x18 );
