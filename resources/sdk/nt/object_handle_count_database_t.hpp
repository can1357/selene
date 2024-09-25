#pragma once
#include <sdkgen/support_library.hpp>
#include "object_handle_count_entry_t.hpp"

#include "magic/object_handle_count_database_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_HANDLE_COUNT_DATABASE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_handle_count_database_t                 
    {                                                     
        using handle_count_entries_t = sdk::array<struct nt::object_handle_count_entry_t, 1>;                     
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint32_t                count_entries;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CountEntries
        _m01 handle_count_entries_t  handle_count_entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleCountEntries
                                                          
        SDK_MAGIC_PROPERTIES( "_OBJECT_HANDLE_COUNT_DATABASE.$", 0x18, true, 0x56fde4f35fa9e166 );                     
        SDK_FIXED_SIZE( object_handle_count_database_t, 0x18 );                     
    };                                                    
};
#include "magic/object_handle_count_database_t.end.hpp"
SDK_VERIFY( struct nt::object_handle_count_database_t, 0x18 );
