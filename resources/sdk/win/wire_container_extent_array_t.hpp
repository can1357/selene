#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_container_extent_array_t.start.hpp"
namespace win
{
    // [struct WireContainerExtentArray]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_container_extent_array_t       
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                     
        _m00 uint32_t             size;          //{ +0x0000    +0x0000    +0x0000    } | .size
        _m01 uint32_t             ref;           //{ +0x0008    +0x0008    +0x0008    } | .ref
        _m02 uint32_t             rounded_size;  //{ +0x000c    +0x000c    +0x000c    } | .rounded_size
        _m03 sdk::array<uint32_t> unique_flag;   //{ +0x0010    +0x0010    +0x0010    } | .unique_flag
                                               
        SDK_MAGIC_PROPERTIES( "WireContainerExtentArray.$", 0x10, true, 0x639b89911068487e );             
        SDK_FIXED_SIZE( wire_container_extent_array_t, 0x10 );             
    };                                         
};
#include "magic/wire_container_extent_array_t.end.hpp"
SDK_VERIFY( struct win::wire_container_extent_array_t, 0x10 );
