#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_handle_table_entry_info_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_handle_table_entry_info_t    
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint16_t unique_process_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcessId
        _m01 uint16_t creator_back_trace_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .CreatorBackTraceIndex
        _m02 uint8_t  object_type_index;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ObjectTypeIndex
        _m03 uint8_t  handle_attributes;         //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .HandleAttributes
        _m04 uint16_t handle_value;              //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .HandleValue
        _m05 void*    object;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Object
        _m06 uint32_t granted_access;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GrantedAccess
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HANDLE_TABLE_ENTRY_INFO.$", 0x18, true, 0x982d0f42c5ba6bb1 );                         
        SDK_FIXED_SIZE( system_handle_table_entry_info_t, 0x18 );                         
    };                                         
};
#include "magic/system_handle_table_entry_info_t.end.hpp"
SDK_VERIFY( struct win::system_handle_table_entry_info_t, 0x18 );
