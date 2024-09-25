#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/orpc_extent_t.start.hpp"
namespace tag
{
    // [struct tagORPC_EXTENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct orpc_extent_t                 
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                               
        _m00 struct nt::guid_t      id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .id
        _m01 uint32_t               size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .size
        _m02 sdk::array<uint8_t, 1> data;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .data
                                         
        SDK_MAGIC_PROPERTIES( "tagORPC_EXTENT.$", 0x18, true, 0x12bf55ef548ccf54 );     
        SDK_FIXED_SIZE( orpc_extent_t, 0x18 );     
    };                                   
};
#include "magic/orpc_extent_t.end.hpp"
SDK_VERIFY( struct tag::orpc_extent_t, 0x18 );
