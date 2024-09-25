#pragma once
#include <sdkgen/support_library.hpp>
#include "quad_t.hpp"
#include "../ex/push_lock_t.hpp"

#include "magic/object_header_t.start.hpp"
namespace nt
{
    struct object_create_information_t;

    // [struct _OBJECT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_t                                                  
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                  
        _m00 int64_t                                 pointer_count;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PointerCount
        _m01 int64_t                                 handle_count;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleCount
        _m02 void*                                   next_to_free;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextToFree
        _m03 struct ex::push_lock_t                  lock;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lock
        _m04 uint8_t                                 type_index;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TypeIndex
        _m05 uint8_t                                 trace_flags;             //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .TraceFlags
        _m06 uint1_t                                 dbg_ref_trace;           //{ +0x0019@0  +0x0019@0  +0x0019@0  +0x0019@0  } | .DbgRefTrace
        _m07 uint1_t                                 dbg_trace_permanent;     //{ +0x0019@1  +0x0019@1  +0x0019@1  +0x0019@1  } | .DbgTracePermanent
        _m08 uint8_t                                 info_mask;               //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .InfoMask
        _m09 uint8_t                                 flags;                   //{ +0x001b    +0x001b    +0x001b    +0x001b    } | .Flags
        _m10 uint1_t                                 new_object;              //{ +0x001b@0  +0x001b@0  +0x001b@0  +0x001b@0  } | .NewObject
        _m11 uint1_t                                 kernel_object;           //{ +0x001b@1  +0x001b@1  +0x001b@1  +0x001b@1  } | .KernelObject
        _m12 uint1_t                                 kernel_only_access;      //{ +0x001b@2  +0x001b@2  +0x001b@2  +0x001b@2  } | .KernelOnlyAccess
        _m13 uint1_t                                 exclusive_object;        //{ +0x001b@3  +0x001b@3  +0x001b@3  +0x001b@3  } | .ExclusiveObject
        _m14 uint1_t                                 permanent_object;        //{ +0x001b@4  +0x001b@4  +0x001b@4  +0x001b@4  } | .PermanentObject
        _m15 uint1_t                                 default_security_quota;  //{ +0x001b@5  +0x001b@5  +0x001b@5  +0x001b@5  } | .DefaultSecurityQuota
        _m16 uint1_t                                 single_handle_entry;     //{ +0x001b@6  +0x001b@6  +0x001b@6  +0x001b@6  } | .SingleHandleEntry
        _m17 uint1_t                                 deleted_inline;          //{ +0x001b@7  +0x001b@7  +0x001b@7  +0x001b@7  } | .DeletedInline
        _m18 struct nt::object_create_information_t* object_create_info;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ObjectCreateInfo
        _m19 void*                                   quota_block_charged;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .QuotaBlockCharged
        _m20 void*                                   security_descriptor;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SecurityDescriptor
        _m21 struct nt::quad_t                       body;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Body
                                                                            
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER.$", 0x38, true, 0xb7161a2fd76de859 );                       
        SDK_FIXED_SIZE( object_header_t, 0x38 );                            
    };                                                                      
};
#include "magic/object_header_t.end.hpp"
SDK_VERIFY( struct nt::object_header_t, 0x38 );
