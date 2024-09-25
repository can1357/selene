#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/push_request_container_passthrough_data_t.start.hpp"
namespace win
{
    struct wire_container_this_t;

    // [class PushRequestContainerPassthroughData]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class push_request_container_passthrough_data_t                                                 
    {                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                                          
        _m00 const struct win::wire_container_this_t* saved_request_container_passthrough_data;       //{ +0x0000    +0x0000    +0x0000    } | ._savedRequestContainerPassthroughData
        _m01 uint32_t                                 saved_request_container_passthrough_data_size;  //{ +0x0008    +0x0008    +0x0008    } | ._savedRequestContainerPassthroughDataSize
        _m02 int32_t                                  saved_free_request_container_passthrough_data;  //{ +0x000c    +0x000c    +0x000c    } | ._savedFreeRequestContainerPassthroughData
                                                                                                    
        SDK_MAGIC_PROPERTIES( "PushRequestContainerPassthroughData.$", 0x10, true, 0xd5b2046c9df27ac2 );                                              
        SDK_FIXED_SIZE( push_request_container_passthrough_data_t, 0x10 );                                              
    };                                                                                              
};
#include "magic/push_request_container_passthrough_data_t.end.hpp"
SDK_VERIFY( class win::push_request_container_passthrough_data_t, 0x10 );
