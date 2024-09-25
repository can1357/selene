#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ethread_t; }

#include "magic/rw_lock_ex_t.start.hpp"
namespace ndis
{
    struct pndis_per_processor_slot_t;

    // [struct _NDIS_RW_LOCK_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rw_lock_ex_t                                              
    {                                                                
        // Windows 10 v1607                                          
        //                                                           
        _m00 void*                                    source_handle;   //{ +0x0000    } | .SourceHandle
        _m01 uint64_t                                 write_lock;      //{ +0x0008    } | .WriteLock
        _m02 struct nt::ethread_t*                    owner;           //{ +0x0010    } | .Owner
        _m03 struct ndis::pndis_per_processor_slot_t* ref_count_slot;  //{ +0x0018    } | .RefCountSlot
        _m04 sdk::array<uint32_t*, 1>                 ref_count;       //{ +0x0020    } | .RefCount
                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_RW_LOCK_EX.$", 0x0, true, 0x2845f96f10df645e );               
        SDK_DYNAMIC_SIZE( rw_lock_ex_t );                            
    };                                                               
};
#include "magic/rw_lock_ex_t.end.hpp"
