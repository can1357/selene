#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wire_extent_t.start.hpp"
namespace win
{
    // [struct WireExtent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_extent_t                      
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 uint32_t            rounded_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .rounded_size
        _m01 struct nt::guid_t   id;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .id
        _m02 uint32_t            size;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .size
                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m03 sdk::array<uint8_t> data;          //{ +0x0018    +0x0018    +0x0018    } | .data
                                              
        SDK_MAGIC_PROPERTIES( "WireExtent.$", 0x18, true, 0x1739cd5701fba560 );             
        SDK_FIXED_SIZE( wire_extent_t, 0x18 );             
    };                                        
};
#include "magic/wire_extent_t.end.hpp"
SDK_VERIFY( struct win::wire_extent_t, 0x18 );
