#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_entry_t.hpp"

#include "magic/dph_block_information_t.start.hpp"
namespace ntdll
{
    // [struct _DPH_BLOCK_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dph_block_information_t                   
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint32_t                 start_stamp;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartStamp
        _m01 void*                    heap;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Heap
        _m02 uint64_t                 requested_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequestedSize
        _m03 uint64_t                 actual_size;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ActualSize
        _m04 nt::list_entry_t         free_queue;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeQueue
        _m05 struct nt::slist_entry_t free_push_list;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreePushList
        _m06 uint16_t                 trace_index;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TraceIndex
        _m07 void*                    stack_trace;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .StackTrace
        _m08 uint32_t                 end_stamp;       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .EndStamp
                                                     
        SDK_MAGIC_PROPERTIES( "_DPH_BLOCK_INFORMATION.$", 0x40, true, 0x142d419d29cf2c8d );               
        SDK_FIXED_SIZE( dph_block_information_t, 0x40 );               
    };                                               
};
#include "magic/dph_block_information_t.end.hpp"
SDK_VERIFY( struct ntdll::dph_block_information_t, 0x40 );
