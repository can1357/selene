#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "handle_table_free_list_t.hpp"

#include "magic/handle_table_t.start.hpp"
namespace nt
{
    struct eprocess_t;
    struct handle_trace_debug_info_t;

    // [struct _HANDLE_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_table_t                                                                     
    {                                                                                         
        using free_lists_t = sdk::array<struct nt::handle_table_free_list_t, 1>;                                           
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                    
        _m00 uint32_t                              next_handle_needing_pool;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextHandleNeedingPool
        _m01 int32_t                               extra_info_pages;                            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ExtraInfoPages
        _m02 volatile uint64_t                     table_code;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TableCode
        _m03 struct nt::eprocess_t*                quota_process;                               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QuotaProcess
        _m04 nt::list_entry_t                      handle_table_list;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HandleTableList
        _m05 uint32_t                              unique_process_id;                           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .UniqueProcessId
        _m06 uint32_t                              flags;                                       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
        _m07 uint1_t                               strict_fifo;                                 //{ +0x002c@0  +0x002c@0  +0x002c@0  +0x002c@0  } | .StrictFIFO
        _m08 uint1_t                               enable_handle_exceptions;                    //{ +0x002c@1  +0x002c@1  +0x002c@1  +0x002c@1  } | .EnableHandleExceptions
        _m09 uint1_t                               rundown;                                     //{ +0x002c@2  +0x002c@2  +0x002c@2  +0x002c@2  } | .Rundown
        _m10 uint1_t                               duplicated;                                  //{ +0x002c@3  +0x002c@3  +0x002c@3  +0x002c@3  } | .Duplicated
        _m11 uint1_t                               raise_um_exception_on_invalid_handle_close;  //{ +0x002c@4  +0x002c@4  +0x002c@4  +0x002c@4  } | .RaiseUMExceptionOnInvalidHandleClose
        _m12 struct ex::push_lock_t                handle_contention_event;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HandleContentionEvent
        _m13 struct ex::push_lock_t                handle_table_lock;                           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HandleTableLock
        _m14 free_lists_t                          free_lists;                                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .FreeLists
        _m15 sdk::array<uint8_t, 32>               actual_entry;                                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ActualEntry
        _m16 struct nt::handle_trace_debug_info_t* debug_info;                                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DebugInfo
                                                                                              
        SDK_MAGIC_PROPERTIES( "_HANDLE_TABLE.$", 0x80, true, 0x94c78f85235eff6f );                                           
        SDK_FIXED_SIZE( handle_table_t, 0x80 );                                               
    };                                                                                        
};
#include "magic/handle_table_t.end.hpp"
SDK_VERIFY( struct nt::handle_table_t, 0x80 );
