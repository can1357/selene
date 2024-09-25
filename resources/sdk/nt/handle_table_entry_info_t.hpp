#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handle_table_entry_info_t.start.hpp"
namespace nt
{
    // [struct _HANDLE_TABLE_ENTRY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_table_entry_info_t           
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t audit_mask;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AuditMask
        _m01 uint32_t max_relative_access_mask;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxRelativeAccessMask
                                               
        SDK_MAGIC_PROPERTIES( "_HANDLE_TABLE_ENTRY_INFO.$", 0x8, true, 0x7e84f8b0aae9da5f );                         
        SDK_FIXED_SIZE( handle_table_entry_info_t, 0x8 );                         
    };                                         
};
#include "magic/handle_table_entry_info_t.end.hpp"
SDK_VERIFY( struct nt::handle_table_entry_info_t, 0x8 );
