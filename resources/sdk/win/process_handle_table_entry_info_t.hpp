#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_handle_table_entry_info_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HANDLE_TABLE_ENTRY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_handle_table_entry_info_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 void*    handle_value;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleValue
        _m01 uint64_t handle_count;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleCount
        _m02 uint64_t pointer_count;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PointerCount
        _m03 uint32_t granted_access;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GrantedAccess
        _m04 uint32_t object_type_index;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ObjectTypeIndex
        _m05 uint32_t handle_attributes;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HandleAttributes
                                            
        SDK_MAGIC_PROPERTIES( "_PROCESS_HANDLE_TABLE_ENTRY_INFO.$", 0x28, true, 0xd9e82198c5e9e281 );                  
        SDK_FIXED_SIZE( process_handle_table_entry_info_t, 0x28 );                  
    };                                      
};
#include "magic/process_handle_table_entry_info_t.end.hpp"
SDK_VERIFY( struct win::process_handle_table_entry_info_t, 0x28 );
