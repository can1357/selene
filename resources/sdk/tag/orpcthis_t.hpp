#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "comversion_t.hpp"

#include "magic/orpcthis_t.start.hpp"
namespace tag
{
    struct orpc_extent_array_t;

    // [struct tagORPCTHIS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct orpcthis_t                                    
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                               
        _m00 struct tag::comversion_t         version;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .version
        _m01 uint32_t                         flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .flags
        _m02 struct nt::guid_t                cid;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cid
        _m03 struct tag::orpc_extent_array_t* extensions;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .extensions
                                                         
        SDK_MAGIC_PROPERTIES( "tagORPCTHIS.$", 0x28, true, 0x72cac9783a6b5311 );           
        SDK_FIXED_SIZE( orpcthis_t, 0x28 );              
    };                                                   
};
#include "magic/orpcthis_t.end.hpp"
SDK_VERIFY( struct tag::orpcthis_t, 0x28 );
