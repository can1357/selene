#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_directory_information_t.start.hpp"
namespace win
{
    // [struct _OBJECT_DIRECTORY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_directory_information_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 nt::unicode_view name;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 nt::unicode_view type_name;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TypeName
                                         
        SDK_MAGIC_PROPERTIES( "_OBJECT_DIRECTORY_INFORMATION.$", 0x20, true, 0xcead079802725d0d );          
        SDK_FIXED_SIZE( object_directory_information_t, 0x20 );          
    };                                   
};
#include "magic/object_directory_information_t.end.hpp"
SDK_VERIFY( struct win::object_directory_information_t, 0x20 );
