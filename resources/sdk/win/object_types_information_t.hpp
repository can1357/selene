#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_types_information_t.start.hpp"
namespace win
{
    // [struct _OBJECT_TYPES_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_types_information_t 
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t number_of_types;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfTypes
                                      
        SDK_MAGIC_PROPERTIES( "_OBJECT_TYPES_INFORMATION.$", 0x4, true, 0x332d1d90d741312b );                
        SDK_FIXED_SIZE( object_types_information_t, 0x4 );                
    };                                
};
#include "magic/object_types_information_t.end.hpp"
SDK_VERIFY( struct win::object_types_information_t, 0x4 );
