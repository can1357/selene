#pragma once
#include <sdkgen/support_library.hpp>
#include "fast_mutex_t.hpp"
#include "handle_trace_db_entry_t.hpp"

#include "magic/handle_trace_debug_info_t.start.hpp"
namespace nt
{
    // [struct _HANDLE_TRACE_DEBUG_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_trace_debug_info_t                       
    {                                                      
        using trace_db_t = sdk::array<struct nt::handle_trace_db_entry_t, 1>;                      
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 int32_t                 ref_count;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCount
        _m01 uint32_t                table_size;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TableSize
        _m02 uint32_t                bit_mask_flags;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BitMaskFlags
        _m03 struct nt::fast_mutex_t close_compaction_lock;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CloseCompactionLock
        _m04 uint32_t                current_stack_index;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CurrentStackIndex
        _m05 trace_db_t              trace_db;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .TraceDb
                                                           
        SDK_MAGIC_PROPERTIES( "_HANDLE_TRACE_DEBUG_INFO.$", 0xf0, true, 0x76dc2ea181534e9e );                      
        SDK_FIXED_SIZE( handle_trace_debug_info_t, 0xf0 );                      
    };                                                     
};
#include "magic/handle_trace_debug_info_t.end.hpp"
SDK_VERIFY( struct nt::handle_trace_debug_info_t, 0xf0 );
