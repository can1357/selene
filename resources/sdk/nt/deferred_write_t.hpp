#pragma once
#include <sdkgen/support_library.hpp>

namespace cc { struct partition_t; }

#include "magic/deferred_write_t.start.hpp"
namespace nt
{
    struct kevent_t;
    struct file_object_t;
    struct private_volume_cachemap_t;

    // [struct _DEFERRED_WRITE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct deferred_write_t                                                 
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                  
        _m00 int16_t                               node_type_code;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                               node_byte_size;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NodeByteSize
        _m02 struct nt::file_object_t*             file_object;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m03 uint32_t                              bytes_to_write;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BytesToWrite
        _m04 nt::list_entry_t                      deferred_write_links;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeferredWriteLinks
        _m05 struct nt::kevent_t*                  event;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Event
        _m06 sdk::function<void(void*, void*)>*    post_routine;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PostRoutine
        _m07 void*                                 context1;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Context1
        _m08 void*                                 context2;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Context2
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                  
        _m09 struct cc::partition_t*               partition;                 //{ +0x0048    +0x0048    +0x0048    } | .Partition
        _m10 uint8_t                               soft_throttle;             //{ +0x0050    +0x0058    +0x0050    } | .SoftThrottle
        _m11 int64_t                               time_added;                //{ +0x0058    +0x0060    +0x0058    } | .TimeAdded
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m12 struct nt::private_volume_cachemap_t* private_volume_cache_map;  //{ +0x0050    } | .PrivateVolumeCacheMap
                                                                            
        SDK_MAGIC_PROPERTIES( "_DEFERRED_WRITE.$", 0x60, true, 0xe83b0b9527537c44 );                         
        SDK_DYNAMIC_SIZE( deferred_write_t );                               
    };                                                                      
};
#include "magic/deferred_write_t.end.hpp"
