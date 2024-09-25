#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfmemory_offset_t.start.hpp"
namespace wdf
{
    // [struct _WDFMEMORY_OFFSET]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wdfmemory_offset_t       
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t buffer_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferOffset
        _m01 uint64_t buffer_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BufferLength
                                    
        SDK_NONVOL_PROPERTIES( "_WDFMEMORY_OFFSET.$", 0x10, true, 0xf774d714b1d57244 );              
        SDK_FIXED_SIZE( wdfmemory_offset_t, 0x10 );              
    };                              
};
#include "magic/wdfmemory_offset_t.end.hpp"
SDK_VERIFY( struct wdf::wdfmemory_offset_t, 0x10 );
