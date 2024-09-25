#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remove_lock_dbg_block_t.start.hpp"
namespace io
{
    struct remove_lock_tracking_block_t;

    // [struct _IO_REMOVE_LOCK_DBG_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct remove_lock_dbg_block_t                                     
    {                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 int32_t                                  signature;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                                 high_watermark;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .HighWatermark
        _m02 int64_t                                  max_locked_ticks;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxLockedTicks
        _m03 int32_t                                  allocate_tag;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocateTag
        _m04 nt::list_entry_t                         lock_list;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LockList
        _m05 uint64_t                                 spin;              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Spin
        _m06 int32_t                                  low_memory_count;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .LowMemoryCount
        _m07 struct io::remove_lock_tracking_block_t* blocks;            //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Blocks
                                                                       
        SDK_NONVOL_PROPERTIES( "_IO_REMOVE_LOCK_DBG_BLOCK.$", 0x58, true, 0xb87e6fa2cf5e9f43 );                 
        SDK_FIXED_SIZE( remove_lock_dbg_block_t, 0x58 );                 
    };                                                                 
};
#include "magic/remove_lock_dbg_block_t.end.hpp"
SDK_VERIFY( struct io::remove_lock_dbg_block_t, 0x58 );
