#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/fsrtl_advanced_fcb_header_t.start.hpp"
namespace nt
{
    struct eresource_t;
    struct fast_mutex_t;

    // [struct _FSRTL_ADVANCED_FCB_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsrtl_advanced_fcb_header_t                                                   
    {                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                               
        _m00 int16_t                                        node_type_code;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                                        node_byte_size;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NodeByteSize
        _m02 uint8_t                                        flags;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 uint8_t                                        is_fast_io_possible;           //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .IsFastIoPossible
        _m04 uint8_t                                        flags2;                        //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Flags2
        _m05 uint4_t                                        version;                       //{ +0x0007@4  +0x0007@4  +0x0007@4  +0x0007@4  +0x0007@4  } | .Version
        _m06 struct nt::eresource_t*                        resource;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Resource
        _m07 struct nt::eresource_t*                        paging_io_resource;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PagingIoResource
        _m08 int64_t                                        allocation_size;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocationSize
        _m09 int64_t                                        file_size;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FileSize
        _m10 int64_t                                        valid_data_length;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ValidDataLength
        _m11 struct nt::fast_mutex_t*                       fast_mutex;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FastMutex
        _m12 nt::list_entry_t                               filter_contexts;               //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .FilterContexts
        _m13 sdk::variant<uint64_t, struct ex::push_lock_t> push_lock;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .PushLock
        _m14 void**                                         file_context_support_pointer;  //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .FileContextSupportPointer
        _m15 void*                                          oplock;                        //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Oplock
        _m16 void*                                          reserved_for_remote;           //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .ReservedForRemote
                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                             
        //                                                                               
        _m17 void*                                          reserved_context;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ReservedContext
                                                                                         
        // Windows 11                                                                    
        //                                                                               
        _m18 void*                                          ae_push_lock;                  //{ +0x0060    } | .AePushLock
        _m19 uint32_t                                       bypass_io_open_count;          //{ +0x0068    } | .BypassIoOpenCount
                                                                                         
        SDK_NONVOL_PROPERTIES( "_FSRTL_ADVANCED_FCB_HEADER.$", 0x68, true, 0xb304b9c1d4a39244 );                             
        SDK_DYNAMIC_SIZE( fsrtl_advanced_fcb_header_t );                                 
    };                                                                                   
};
#include "magic/fsrtl_advanced_fcb_header_t.end.hpp"
