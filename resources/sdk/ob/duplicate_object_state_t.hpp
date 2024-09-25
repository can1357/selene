#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/handle_table_entry_info_t.hpp"

namespace nt { struct eprocess_t; }

#include "magic/duplicate_object_state_t.start.hpp"
namespace ob
{
    // [struct _OB_DUPLICATE_OBJECT_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct duplicate_object_state_t                                 
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                          
        _m00 struct nt::eprocess_t*               source_process;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceProcess
        _m01 void*                                source_handle;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceHandle
        _m02 void*                                object;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Object
        _m03 uint32_t                             target_access;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TargetAccess
        _m04 struct nt::handle_table_entry_info_t object_info;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ObjectInfo
        _m05 uint32_t                             handle_attributes;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .HandleAttributes
                                                                    
        SDK_MAGIC_PROPERTIES( "_OB_DUPLICATE_OBJECT_STATE.$", 0x28, true, 0xa53248be75e6cce1 );                  
        SDK_FIXED_SIZE( duplicate_object_state_t, 0x28 );                  
    };                                                              
};
#include "magic/duplicate_object_state_t.end.hpp"
SDK_VERIFY( struct ob::duplicate_object_state_t, 0x28 );
