#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/cont_resource_list_t.start.hpp"
namespace io
{
    // [struct _IO_CONT_RESOURCE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cont_resource_list_t                                    
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                         
        _m00 union nt::slist_header_t    header;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union nt::slist_header_t**  hash;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hash
        _m02 uint32_t                    hash_size;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HashSize
        _m03 uint32_t                    maximum_processor_count;    //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .MaximumProcessorCount
        _m04 uint32_t                    resource_count;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ResourceCount
        _m05 uint32_t                    min_count;                  //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .MinCount
        _m06 uint32_t                    max_count;                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MaxCount
        _m07 uint32_t                    resource_size;              //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ResourceSize
        _m08 struct nt::device_object_t* device_object;              //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DeviceObject
        _m09 uint32_t                    mem_alloc_failure_count;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MemAllocFailureCount
        _m10 uint32_t                    consecutive_failure_count;  //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .ConsecutiveFailureCount
        _m11 int64_t                     suspend_tick;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SuspendTick
        _m12 uint32_t                    suspend_count;              //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SuspendCount
        _m13 uint32_t                    compat_srb_size;            //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .CompatSrbSize
        _m14 uint8_t                     is_virtual_miniport;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .IsVirtualMiniport
        _m15 volatile int32_t            adding_new_resource;        //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .AddingNewResource
                                                                   
        SDK_MAGIC_PROPERTIES( "_IO_CONT_RESOURCE_LIST.$", 0x80, true, 0x7073f43eff19c443 );                          
        SDK_FIXED_SIZE( cont_resource_list_t, 0x80 );                          
    };                                                             
};
#include "magic/cont_resource_list_t.end.hpp"
SDK_VERIFY( struct io::cont_resource_list_t, 0x80 );
