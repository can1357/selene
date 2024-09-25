#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_header_name_info_t.start.hpp"
namespace nt
{
    struct object_directory_t;

    // [struct _OBJECT_HEADER_NAME_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_name_info_t                        
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                  
        _m00 struct nt::object_directory_t* directory;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Directory
        _m01 nt::unicode_view               name;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Name
        _m02 int32_t                        reference_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReferenceCount
                                                            
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER_NAME_INFO.$", 0x20, true, 0x1a8842c8526aed2c );                
        SDK_FIXED_SIZE( object_header_name_info_t, 0x20 );                
    };                                                      
};
#include "magic/object_header_name_info_t.end.hpp"
SDK_VERIFY( struct nt::object_header_name_info_t, 0x20 );
