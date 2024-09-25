#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfmemory_offset_v1_5_t.start.hpp"
namespace wdf
{
    // [struct _WDFMEMORY_OFFSET_V1_5]
    // => Windows 10 v1607
    //
    struct wdfmemory_offset_v1_5_t  
    {                               
        // Windows 10 v1607              
        //                          
        _m00 uint64_t buffer_offset;  //{ +0x0000    } | .BufferOffset
        _m01 uint64_t buffer_length;  //{ +0x0008    } | .BufferLength
                                    
        SDK_MAGIC_PROPERTIES( "_WDFMEMORY_OFFSET_V1_5.$", 0x0, false, 0x7b8795af1da36310 );              
        SDK_FIXED_SIZE( wdfmemory_offset_v1_5_t, 0x10 );              
    };                              
};
#include "magic/wdfmemory_offset_v1_5_t.end.hpp"
SDK_VERIFY( struct wdf::wdfmemory_offset_v1_5_t, 0x10 );
