#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/envoydata_t.start.hpp"
namespace tag
{
    // [struct tagENVOYDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct envoydata_t                    
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                
        _m00 struct nt::guid_t context_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .contextId
        _m01 uint32_t          ul_junk1;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulJunk1
        _m02 uint32_t          ul_junk2;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ulJunk2
                                          
        SDK_MAGIC_PROPERTIES( "tagENVOYDATA.$", 0x18, true, 0x1910473e8d9f3e30 );           
        SDK_FIXED_SIZE( envoydata_t, 0x18 );           
    };                                    
};
#include "magic/envoydata_t.end.hpp"
SDK_VERIFY( struct tag::envoydata_t, 0x18 );
