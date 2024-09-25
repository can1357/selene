#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/object_name_information_t.hpp"

#include "magic/system_object_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_OBJECT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_object_information_t                                     
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                 
        _m00 uint32_t                             next_entry_offset;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 void*                                object;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Object
        _m02 void*                                creator_unique_process;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CreatorUniqueProcess
        _m03 uint16_t                             creator_back_trace_index;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreatorBackTraceIndex
        _m04 uint16_t                             flags;                     //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .Flags
        _m05 int32_t                              pointer_count;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PointerCount
        _m06 int32_t                              handle_count;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HandleCount
        _m07 uint32_t                             paged_pool_charge;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PagedPoolCharge
        _m08 uint32_t                             non_paged_pool_charge;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NonPagedPoolCharge
        _m09 void*                                exclusive_process_id;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ExclusiveProcessId
        _m10 void*                                security_descriptor;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SecurityDescriptor
        _m11 struct nt::object_name_information_t name_info;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NameInfo
                                                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_OBJECT_INFORMATION.$", 0x50, true, 0x4ac51d59da47875c );                         
        SDK_FIXED_SIZE( system_object_information_t, 0x50 );                         
    };                                                                     
};
#include "magic/system_object_information_t.end.hpp"
SDK_VERIFY( struct win::system_object_information_t, 0x50 );
