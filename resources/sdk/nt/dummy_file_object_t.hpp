#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dummy_file_object_t.start.hpp"
namespace nt
{
    // [struct _DUMMY_FILE_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dummy_file_object_t                           
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 struct nt::object_header_t object_header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectHeader
        _m01 sdk::array<char, 216>      file_object_body;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FileObjectBody
                                                         
        SDK_MAGIC_PROPERTIES( "_DUMMY_FILE_OBJECT.$", 0x110, true, 0x32fcd8157dce6d75 );                 
        SDK_FIXED_SIZE( dummy_file_object_t, 0x110 );                 
    };                                                   
};
#include "magic/dummy_file_object_t.end.hpp"
SDK_VERIFY( struct nt::dummy_file_object_t, 0x110 );
