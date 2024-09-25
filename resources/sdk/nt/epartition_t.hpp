#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "work_queue_item_t.hpp"

#include "magic/epartition_t.start.hpp"
namespace nt
{
    struct eprocess_t;
    struct epartition_t;

    // [struct _EPARTITION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct epartition_t                                          
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 void*                        mm_partition;            //{ +0x0000    +0x0000    +0x0000    } | .MmPartition
        _m01 void*                        cc_partition;            //{ +0x0008    +0x0008    +0x0008    } | .CcPartition
        _m02 void*                        ex_partition;            //{ +0x0010    +0x0010    +0x0010    } | .ExPartition
        _m03 int64_t                      hard_reference_count;    //{ +0x0018    +0x0020    +0x0018    } | .HardReferenceCount
        _m04 int64_t                      open_handle_count;       //{ +0x0020    +0x0028    +0x0020    } | .OpenHandleCount
        _m05 nt::list_entry_t             active_partition_links;  //{ +0x0028    +0x0030    +0x0028    } | .ActivePartitionLinks
        _m06 struct nt::epartition_t*     parent_partition;        //{ +0x0038    +0x0040    +0x0038    } | .ParentPartition
        _m07 struct nt::work_queue_item_t teardown_work_item;      //{ +0x0040    +0x0048    +0x0040    } | .TeardownWorkItem
        _m08 struct ex::push_lock_t       teardown_lock;           //{ +0x0060    +0x0068    +0x0060    } | .TeardownLock
        _m09 struct nt::eprocess_t*       system_process;          //{ +0x0068    +0x0070    +0x0068    } | .SystemProcess
        _m10 void*                        system_process_handle;   //{ +0x0070    +0x0078    +0x0070    } | .SystemProcessHandle
        _m11 uint32_t                     partition_flags;         //{ +0x0078    +0x0080    +0x0078    } | .PartitionFlags
        _m12 uint1_t                      paired_with_job;         //{ +0x0078@0  +0x0080@0  +0x0078@0  } | .PairedWithJob
                                                                 
        // Windows 11                                            
        //                                                       
        _m13 void*                        sm_partition;            //{ +0x0018    } | .SmPartition
                                                                 
        SDK_MAGIC_PROPERTIES( "_EPARTITION.$", 0x80, true, 0x3efce03aedeb2ee8 );                       
        SDK_DYNAMIC_SIZE( epartition_t );                        
    };                                                           
};
#include "magic/epartition_t.end.hpp"
