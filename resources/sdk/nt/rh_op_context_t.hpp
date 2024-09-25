#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rh_op_context_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct ethread_t;
    struct eprocess_t;
    struct file_object_t;

    // [struct _RH_OP_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rh_op_context_t                                        
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                        
        _m00 nt::list_entry_t          links;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 struct nt::irp_t*         oplock_request_irp;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OplockRequestIrp
        _m02 struct nt::file_object_t* oplock_request_file_object;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OplockRequestFileObject
        _m03 struct nt::eprocess_t*    oplock_request_process;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OplockRequestProcess
        _m04 struct nt::ethread_t*     oplock_owner_thread;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OplockOwnerThread
        _m05 uint32_t                  flags;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
        _m06 nt::list_entry_t          atomic_links;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AtomicLinks
                                                                  
        SDK_MAGIC_PROPERTIES( "_RH_OP_CONTEXT.$", 0x48, true, 0xd20068513d76809e );                           
        SDK_FIXED_SIZE( rh_op_context_t, 0x48 );                           
    };                                                            
};
#include "magic/rh_op_context_t.end.hpp"
SDK_VERIFY( struct nt::rh_op_context_t, 0x48 );
