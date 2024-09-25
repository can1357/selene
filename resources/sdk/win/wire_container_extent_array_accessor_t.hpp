#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_container_extent_array_accessor_t.start.hpp"
namespace win
{
    struct wire_container_extent_t;
    struct wire_container_extent_array_t;

    // [class WireContainerExtentArrayAccessor]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class wire_container_extent_array_accessor_t                                   
    {                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                         
        _m00 uint32_t                                         buffer_size;           //{ +0x0000    +0x0000    +0x0000    } | ._bufferSize
        _m01 const struct win::wire_container_extent_array_t* extent_array;          //{ +0x0008    +0x0008    +0x0008    } | ._extentArray
        _m02 const struct win::wire_container_extent_t*       first_extent;          //{ +0x0010    +0x0010    +0x0010    } | ._firstExtent
        _m03 uint32_t                                         current_extent_index;  //{ +0x0018    +0x0018    +0x0018    } | ._currentExtentIndex
        _m04 const struct win::wire_container_extent_t*       current_extent;        //{ +0x0020    +0x0020    +0x0020    } | ._currentExtent
                                                                                   
        SDK_MAGIC_PROPERTIES( "WireContainerExtentArrayAccessor.$", 0x28, true, 0xb4fd5659dfd7b430 );                     
        SDK_FIXED_SIZE( wire_container_extent_array_accessor_t, 0x28 );                     
    };                                                                             
};
#include "magic/wire_container_extent_array_accessor_t.end.hpp"
SDK_VERIFY( class win::wire_container_extent_array_accessor_t, 0x28 );
