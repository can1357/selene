#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/object_directory_t.start.hpp"
namespace nt
{
    struct device_map_t;
    struct object_directory_t;
    struct object_directory_entry_t;

    // [struct _OBJECT_DIRECTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_directory_t                                
    {                                                        
        using hash_buckets_t = sdk::array<struct nt::object_directory_entry_t*, 37>;                 
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 hash_buckets_t                 hash_buckets;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashBuckets
        _m01 struct ex::push_lock_t         lock;              //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .Lock
        _m02 struct nt::device_map_t*       device_map;        //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .DeviceMap
        _m03 struct nt::object_directory_t* shadow_directory;  //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .ShadowDirectory
        _m04 void*                          namespace_entry;   //{ +0x0148    +0x0140    +0x0140    +0x0140    } | .NamespaceEntry
        _m05 void*                          session_object;    //{ +0x0150    +0x0148    +0x0148    +0x0148    } | .SessionObject
        _m06 uint32_t                       flags;             //{ +0x0158    +0x0150    +0x0150    +0x0150    } | .Flags
        _m07 uint32_t                       session_id;        //{ +0x0140    +0x0154    +0x0154    +0x0154    } | .SessionId
                                                             
        SDK_MAGIC_PROPERTIES( "_OBJECT_DIRECTORY.$", 0x158, true, 0x73b256480057404d );                 
        SDK_DYNAMIC_SIZE( object_directory_t );                 
    };                                                       
};
#include "magic/object_directory_t.end.hpp"
