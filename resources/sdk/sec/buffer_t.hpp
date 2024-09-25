#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buffer_t.start.hpp"
namespace sec
{
    // [struct _SecBuffer]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct buffer_t               
    {                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t cb_buffer;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbBuffer
        _m01 uint32_t buffer_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BufferType
        _m02 void*    pv_buffer;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvBuffer
                                  
        SDK_NONVOL_PROPERTIES( "_SecBuffer.$", 0x10, true, 0xef4c98b3fe709d72 );            
        SDK_FIXED_SIZE( buffer_t, 0x10 );            
    };                            
};
#include "magic/buffer_t.end.hpp"
SDK_VERIFY( struct sec::buffer_t, 0x10 );
