#pragma once
#include <sdkgen/support_library.hpp>

namespace etwp { struct notification_header_t; }

#include "magic/queue_entry_t.start.hpp"
namespace etw
{
    struct reg_entry_t;

    // [struct _ETW_QUEUE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct queue_entry_t                                        
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                      
        _m00 nt::list_entry_t                    list_entry;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct etwp::notification_header_t* data_block;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataBlock
        _m02 struct etw::reg_entry_t*            reg_entry;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RegEntry
        _m03 struct etw::reg_entry_t*            reply_object;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReplyObject
        _m04 void*                               wake_reference;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .WakeReference
        _m05 uint16_t                            reg_index;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RegIndex
        _m06 uint16_t                            reply_index;     //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .ReplyIndex
        _m07 uint32_t                            flags;           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Flags
                                                                
        SDK_MAGIC_PROPERTIES( "_ETW_QUEUE_ENTRY.$", 0x38, true, 0x29e022c56224e096 );               
        SDK_FIXED_SIZE( queue_entry_t, 0x38 );                  
    };                                                          
};
#include "magic/queue_entry_t.end.hpp"
SDK_VERIFY( struct etw::queue_entry_t, 0x38 );
