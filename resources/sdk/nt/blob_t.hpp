#pragma once
#include <sdkgen/support_library.hpp>
#include "slist_entry_t.hpp"
#include "../ex/push_lock_t.hpp"

#include "magic/blob_t.start.hpp"
namespace nt
{
    // [struct _BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct blob_t                                       
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 nt::list_entry_t         resource_list;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResourceList
        _m01 struct nt::slist_entry_t free_list_entry;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeListEntry
        _m02 uint1_t                  reference_cache;    //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .ReferenceCache
        _m03 uint1_t                  lookaside;          //{ +0x0010@1  +0x0010@1  +0x0010@1  +0x0010@1  } | .Lookaside
        _m04 uint1_t                  initializing;       //{ +0x0010@2  +0x0010@2  +0x0010@2  +0x0010@2  } | .Initializing
        _m05 uint1_t                  deleted;            //{ +0x0010@3  +0x0010@3  +0x0010@3  +0x0010@3  } | .Deleted
        _m06 uint8_t                  flags;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m07 uint8_t                  resource_id;        //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .ResourceId
        _m08 int16_t                  cached_references;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .CachedReferences
        _m09 int64_t                  reference_count;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReferenceCount
        _m10 struct ex::push_lock_t   lock;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Lock
                                                        
        SDK_MAGIC_PROPERTIES( "_BLOB.$", 0x30, true, 0x9b609662952f473a );                  
        SDK_FIXED_SIZE( blob_t, 0x30 );                  
    };                                                  
};
#include "magic/blob_t.end.hpp"
SDK_VERIFY( struct nt::blob_t, 0x30 );
