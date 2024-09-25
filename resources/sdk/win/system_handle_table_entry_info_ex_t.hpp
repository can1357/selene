#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_handle_table_entry_info_ex_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_handle_table_entry_info_ex_t 
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 void*    object;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint64_t unique_process_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UniqueProcessId
        _m02 uint64_t handle_value;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HandleValue
        _m03 uint32_t granted_access;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GrantedAccess
        _m04 uint16_t creator_back_trace_index;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CreatorBackTraceIndex
        _m05 uint16_t object_type_index;         //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .ObjectTypeIndex
        _m06 uint32_t handle_attributes;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HandleAttributes
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX.$", 0x28, true, 0x49a17793003e3b15 );                         
        SDK_FIXED_SIZE( system_handle_table_entry_info_ex_t, 0x28 );                         
    };                                         
};
#include "magic/system_handle_table_entry_info_ex_t.end.hpp"
SDK_VERIFY( struct win::system_handle_table_entry_info_ex_t, 0x28 );
