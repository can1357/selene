#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/byrefhdr_t.start.hpp"
namespace tag
{
    // [struct tagBYREFHDR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct byrefhdr_t            
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t process_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProcessId
                                 
        SDK_MAGIC_PROPERTIES( "tagBYREFHDR.$", 0x8, true, 0xb5925c0fb3c8d865 );           
        SDK_FIXED_SIZE( byrefhdr_t, 0x8 );           
    };                           
};
#include "magic/byrefhdr_t.end.hpp"
SDK_VERIFY( struct tag::byrefhdr_t, 0x8 );
