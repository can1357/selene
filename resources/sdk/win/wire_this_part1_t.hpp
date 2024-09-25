#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../tag/comversion_t.hpp"

#include "magic/wire_this_part1_t.start.hpp"
namespace win
{
    // [struct WireThisPart1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_this_part1_t                  
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                    
        _m00 struct tag::comversion_t version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .version
        _m01 uint32_t                 flags;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .flags
        _m02 struct nt::guid_t        cid;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cid
        _m03 uint32_t                 unique;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .unique
                                              
        SDK_MAGIC_PROPERTIES( "WireThisPart1.$", 0x20, true, 0x597fa0830872cb82 );        
        SDK_FIXED_SIZE( wire_this_part1_t, 0x20 );        
    };                                        
};
#include "magic/wire_this_part1_t.end.hpp"
SDK_VERIFY( struct win::wire_this_part1_t, 0x20 );
