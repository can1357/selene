#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_usage_entry_t.start.hpp"
namespace rtl
{
    struct heap_usage_entry_t;

    // [struct _RTL_HEAP_USAGE_ENTRY]
    // => WDK 10 (NV)
    //
    struct heap_usage_entry_t                                           
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 struct rtl::heap_usage_entry_t* next;                        //{ +0x0000    } | .Next
        _m01 void*                           address;                     //{ +0x0008    } | .Address
        _m02 uint64_t                        size;                        //{ +0x0010    } | .Size
        _m03 uint16_t                        allocator_back_trace_index;  //{ +0x0018    } | .AllocatorBackTraceIndex
        _m04 uint16_t                        tag_index;                   //{ +0x001a    } | .TagIndex
                                                                        
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_USAGE_ENTRY.$", 0x0, false, 0xeeebf905edf2c8af );                           
        SDK_FIXED_SIZE( heap_usage_entry_t, 0x20 );                           
    };                                                                  
};
#include "magic/heap_usage_entry_t.end.hpp"
SDK_VERIFY( struct rtl::heap_usage_entry_t, 0x20 );
