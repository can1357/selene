#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"
#include "completion_list_state_t.hpp"

#include "magic/completion_list_header_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_COMPLETION_LIST_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct completion_list_header_t                    
    {                                                  
        using state_t = sdk::variant<struct alpc::completion_list_state_t, volatile struct alpc::completion_list_state_t>;                    
                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                             
        _m00 uint64_t              start_magic;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartMagic
        _m01 uint32_t              total_size;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalSize
        _m02 uint32_t              list_offset;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ListOffset
        _m03 uint32_t              list_size;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ListSize
        _m04 uint32_t              bitmap_offset;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .BitmapOffset
        _m05 uint32_t              bitmap_size;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BitmapSize
        _m06 uint32_t              data_offset;          //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .DataOffset
        _m07 uint32_t              data_size;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DataSize
        _m08 uint32_t              attribute_flags;      //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .AttributeFlags
        _m09 uint32_t              attribute_size;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .AttributeSize
        _m10 state_t               state;                //{ +0x0080    +0x0040    +0x0040    +0x0040    +0x0040    } | .State
        _m11 volatile uint32_t     last_message_id;      //{ +0x0088    +0x0048    +0x0048    +0x0048    +0x0048    } | .LastMessageId
        _m12 volatile uint32_t     last_callback_id;     //{ +0x008c    +0x004c    +0x004c    +0x004c    +0x004c    } | .LastCallbackId
        _m13 volatile uint32_t     post_count;           //{ +0x0100    +0x0080    +0x0080    +0x0080    +0x0080    } | .PostCount
        _m14 volatile uint32_t     return_count;         //{ +0x0180    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .ReturnCount
        _m15 volatile uint32_t     log_sequence_number;  //{ +0x0200    +0x0100    +0x0100    +0x0100    +0x0100    } | .LogSequenceNumber
        _m16 struct rtl::srwlock_t user_lock;            //{ +0x0280    +0x0140    +0x0140    +0x0140    +0x0140    } | .UserLock
        _m17 uint64_t              end_magic;            //{ +0x0288    +0x0148    +0x0148    +0x0148    +0x0148    } | .EndMagic
                                                       
        SDK_MAGIC_PROPERTIES( "_ALPC_COMPLETION_LIST_HEADER.$", 0x180, true, 0x69a9e52e4ae8ea36 );                    
        SDK_DYNAMIC_SIZE( completion_list_header_t );                    
    };                                                 
};
#include "magic/completion_list_header_t.end.hpp"
