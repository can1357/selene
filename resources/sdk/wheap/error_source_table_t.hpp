#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/error_source_table_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_ERROR_SOURCE_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_source_table_t              
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 uint32_t            signature;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 int32_t             count;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 nt::list_entry_t    items;        //{ +0x0008    +0x0010    +0x0010    +0x0010    } | .Items
        _m03 struct nt::kevent_t insert_lock;  //{ +0x0018    +0x0020    +0x0020    +0x0020    } | .InsertLock
                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m04 uint32_t            next_id;      //{ +0x0008    +0x0008    +0x0008    } | .NextId
                                             
        SDK_MAGIC_PROPERTIES( "_WHEAP_ERROR_SOURCE_TABLE.$", 0x38, true, 0x8cedee957f3d34cb );            
        SDK_DYNAMIC_SIZE( error_source_table_t );            
    };                                       
};
#include "magic/error_source_table_t.end.hpp"
