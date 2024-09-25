#pragma once
#include <sdkgen/support_library.hpp>
#include "srwlock_t.hpp"
#include "hash_table_t.hpp"

#include "magic/stackdb_context_t.start.hpp"
namespace rtl
{
    // [struct _RTL_STACKDB_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stackdb_context_t                                               
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m00 struct rtl::hash_table_t               stack_segment_table;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StackSegmentTable
        _m01 struct rtl::hash_table_t               stack_entry_table;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StackEntryTable
        _m02 struct rtl::srwlock_t                  stack_entry_table_lock;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StackEntryTableLock
        _m03 struct rtl::srwlock_t                  segment_table_lock;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SegmentTableLock
        _m04 sdk::function<void*(uint64_t, void*)>* allocate;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Allocate
        _m05 sdk::function<void(void*, void*)>*     free;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Free
        _m06 void*                                  allocator_context;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AllocatorContext
                                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_STACKDB_CONTEXT.$", 0x48, true, 0x404715347a77a6fe );                       
        SDK_FIXED_SIZE( stackdb_context_t, 0x48 );                         
    };                                                                     
};
#include "magic/stackdb_context_t.end.hpp"
SDK_VERIFY( struct rtl::stackdb_context_t, 0x48 );
