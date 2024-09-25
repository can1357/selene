#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_entry_t.hpp"

#include "magic/event_pool_entry_t.start.hpp"
namespace win
{
    // [class EventPoolEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class event_pool_entry_t                                
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 volatile uint32_t        dw_event_state;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._dwEventState
        _m01 volatile int32_t         b_reader_signaled;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._bReaderSignaled
        _m02 void*                    h_reader_event;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._hReaderEvent
        _m03 struct nt::slist_entry_t list_entry;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._listEntry
        _m04 void*                    h_writer_event;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._hWriterEvent
        _m05 volatile uint32_t        dw_spinning_writer_id;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._dwSpinningWriterID
                                                            
        SDK_MAGIC_PROPERTIES( "EventPoolEntry.$", 0x30, true, 0x32fbb4641cb773c1 );                      
        SDK_FIXED_SIZE( event_pool_entry_t, 0x30 );                      
    };                                                      
};
#include "magic/event_pool_entry_t.end.hpp"
SDK_VERIFY( class win::event_pool_entry_t, 0x30 );
