#pragma once
#include <sdkgen/support_library.hpp>
#include "object_handle_count_entry_t.hpp"

#include "magic/object_header_handle_info_t.start.hpp"
namespace nt
{
    struct object_handle_count_database_t;

    // [struct _OBJECT_HEADER_HANDLE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_handle_info_t                                         
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                     
        _m00 struct nt::object_handle_count_database_t* handle_count_data_base;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleCountDataBase
        _m01 struct nt::object_handle_count_entry_t     single_entry;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SingleEntry
                                                                               
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER_HANDLE_INFO.$", 0x10, true, 0xa6f6c95ecacb6a83 );                       
        SDK_FIXED_SIZE( object_header_handle_info_t, 0x10 );                       
    };                                                                         
};
#include "magic/object_header_handle_info_t.end.hpp"
SDK_VERIFY( struct nt::object_header_handle_info_t, 0x10 );
