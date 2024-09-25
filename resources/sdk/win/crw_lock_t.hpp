#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crw_lock_t.start.hpp"
namespace win
{
    class event_pool_entry_t;

    // [class CRWLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class crw_lock_t                                                   
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                             
        _m00 volatile uint64_t                       ul_lock_state;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._ulLockState
        _m01 volatile uint32_t                       dw_writer_seq_num;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._dwWriterSeqNum
        _m02 volatile uint32_t                       dw_writer_id;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._dwWriterID
        _m03 uint16_t                                w_flags;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._wFlags
        _m04 uint16_t                                w_writer_level;     //{ +0x0012    +0x0012    +0x0012    +0x0012    } | ._wWriterLevel
        _m05 volatile uint32_t                       dw_event_state;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._dwEventState
        _m06 volatile uint32_t                       dw_high_part;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._dwHighPart
        _m07 class win::event_pool_entry_t volatile* p_pool_entry;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pPoolEntry
                                                                       
        SDK_MAGIC_PROPERTIES( "CRWLock.$", 0x20, true, 0x8663c98c8604b9fc );                  
        SDK_FIXED_SIZE( crw_lock_t, 0x20 );                            
    };                                                                 
};
#include "magic/crw_lock_t.end.hpp"
SDK_VERIFY( class win::crw_lock_t, 0x20 );
