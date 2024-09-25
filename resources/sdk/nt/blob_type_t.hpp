#pragma once
#include <sdkgen/support_library.hpp>
#include "blob_id_t.hpp"

#include "magic/blob_type_t.start.hpp"
namespace nt
{
    struct blob_counters_t;

    // [struct _BLOB_TYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct blob_type_t                                        
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 enum nt::blob_id_t             resource_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResourceId
        _m01 uint32_t                       pool_tag;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PoolTag
        _m02 uint32_t                       lookaside_index;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LookasideIndex
        _m03 uint32_t                       flags;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 struct nt::blob_counters_t*    counters;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Counters
        _m05 sdk::function<void(void*)>*    delete_procedure;   //{ +0x0018    +0x0020    +0x0020    +0x0020    } | .DeleteProcedure
        _m06 sdk::function<int32_t(void*)>* destroy_procedure;  //{ +0x0020    +0x0028    +0x0028    +0x0028    } | .DestroyProcedure
        _m07 uint64_t                       usual_size;         //{ +0x0028    +0x0030    +0x0030    +0x0030    } | .UsualSize
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m08 sdk::function<void(void*)>*    cleanup_procedure;  //{ +0x0018    +0x0018    +0x0018    } | .CleanupProcedure
                                                              
        SDK_MAGIC_PROPERTIES( "_BLOB_TYPE.$", 0x38, true, 0x43b8a59dae7203c4 );                  
        SDK_DYNAMIC_SIZE( blob_type_t );                      
    };                                                        
};
#include "magic/blob_type_t.end.hpp"
