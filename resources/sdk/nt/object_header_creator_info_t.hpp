#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_header_creator_info_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_HEADER_CREATOR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_creator_info_t                
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                             
        _m00 nt::list_entry_t type_list;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TypeList
        _m01 void*            creator_unique_process;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CreatorUniqueProcess
        _m02 uint16_t         creator_back_trace_index;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreatorBackTraceIndex
                                                       
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER_CREATOR_INFO.$", 0x20, true, 0x70cfec52f73b8449 );                         
        SDK_FIXED_SIZE( object_header_creator_info_t, 0x20 );                         
    };                                                 
};
#include "magic/object_header_creator_info_t.end.hpp"
SDK_VERIFY( struct nt::object_header_creator_info_t, 0x20 );
