#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/b_crypt_buffer_desc_t.start.hpp"
namespace win
{
    struct b_crypt_buffer_t;

    // [struct _BCryptBufferDesc]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct b_crypt_buffer_desc_t                      
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                            
        _m00 uint32_t                      ul_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulVersion
        _m01 uint32_t                      c_buffers;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cBuffers
        _m02 struct win::b_crypt_buffer_t* p_buffers;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pBuffers
                                                      
        SDK_MAGIC_PROPERTIES( "_BCryptBufferDesc.$", 0x10, true, 0x2d09ea2c8eb83e5 );           
        SDK_FIXED_SIZE( b_crypt_buffer_desc_t, 0x10 );           
    };                                                
};
#include "magic/b_crypt_buffer_desc_t.end.hpp"
SDK_VERIFY( struct win::b_crypt_buffer_desc_t, 0x10 );
