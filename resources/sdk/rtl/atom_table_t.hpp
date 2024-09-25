#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

namespace nt { struct handle_table_t; }

#include "magic/atom_table_t.start.hpp"
namespace rtl
{
    struct atom_table_entry_t;

    // [struct _RTL_ATOM_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct atom_table_t                                                       
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                    
        _m00 uint32_t                                       signature;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 volatile int32_t                               reference_count;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReferenceCount
        _m02 struct ex::push_lock_t                         push_lock;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PushLock
        _m03 struct nt::handle_table_t*                     ex_handle_table;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExHandleTable
        _m04 uint32_t                                       flags;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m05 uint32_t                                       number_of_buckets;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .NumberOfBuckets
        _m06 sdk::array<struct rtl::atom_table_entry_t*, 1> buckets;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Buckets
                                                                              
        SDK_MAGIC_PROPERTIES( "_RTL_ATOM_TABLE.$", 0x28, true, 0x3c1273271130c603 );                  
        SDK_FIXED_SIZE( atom_table_t, 0x28 );                                 
    };                                                                        
};
#include "magic/atom_table_t.end.hpp"
SDK_VERIFY( struct rtl::atom_table_t, 0x28 );
