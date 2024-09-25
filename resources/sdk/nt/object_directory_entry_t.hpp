#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_directory_entry_t.start.hpp"
namespace nt
{
    struct object_directory_entry_t;

    // [struct _OBJECT_DIRECTORY_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_directory_entry_t                          
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                   
        _m00 struct nt::object_directory_entry_t* chain_link;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ChainLink
        _m01 void*                                object;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Object
        _m02 uint32_t                             hash_value;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HashValue
                                                             
        SDK_MAGIC_PROPERTIES( "_OBJECT_DIRECTORY_ENTRY.$", 0x18, true, 0x271ed2e17d72f585 );           
        SDK_FIXED_SIZE( object_directory_entry_t, 0x18 );           
    };                                                       
};
#include "magic/object_directory_entry_t.end.hpp"
SDK_VERIFY( struct nt::object_directory_entry_t, 0x18 );
