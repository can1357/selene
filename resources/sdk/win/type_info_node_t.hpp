#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

#include "magic/type_info_node_t.start.hpp"
namespace win
{
    // [struct __type_info_node]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct type_info_node_t                  
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 union nt::slist_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Header
                                             
        SDK_MAGIC_PROPERTIES( "__type_info_node.$", 0x10, true, 0xa17fdf66fc27f8b1 );       
        SDK_FIXED_SIZE( type_info_node_t, 0x10 );       
    };                                       
};
#include "magic/type_info_node_t.end.hpp"
SDK_VERIFY( struct win::type_info_node_t, 0x10 );
