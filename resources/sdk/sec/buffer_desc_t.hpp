#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buffer_desc_t.start.hpp"
namespace sec
{
    struct buffer_t;

    // [struct _SecBufferDesc]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct buffer_desc_t                      
    {                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                    
        _m00 uint32_t              ul_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulVersion
        _m01 uint32_t              c_buffers;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cBuffers
        _m02 struct sec::buffer_t* p_buffers;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pBuffers
                                              
        SDK_NONVOL_PROPERTIES( "_SecBufferDesc.$", 0x10, true, 0x657fe4e46137f6ef );           
        SDK_FIXED_SIZE( buffer_desc_t, 0x10 );           
    };                                        
};
#include "magic/buffer_desc_t.end.hpp"
SDK_VERIFY( struct sec::buffer_desc_t, 0x10 );
