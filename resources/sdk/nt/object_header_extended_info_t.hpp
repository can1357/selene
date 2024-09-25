#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_header_extended_info_t.start.hpp"
namespace nt
{
    struct object_footer_t;

    // [struct _OBJECT_HEADER_EXTENDED_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_extended_info_t        
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                      
        _m00 struct nt::object_footer_t* footer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Footer
                                                
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER_EXTENDED_INFO.$", 0x10, true, 0x8f02acbdf94a7877 );       
        SDK_FIXED_SIZE( object_header_extended_info_t, 0x10 );       
    };                                          
};
#include "magic/object_header_extended_info_t.end.hpp"
SDK_VERIFY( struct nt::object_header_extended_info_t, 0x10 );
