#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/b_crypt_buffer_t.start.hpp"
namespace win
{
    // [struct _BCryptBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct b_crypt_buffer_t       
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t cb_buffer;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbBuffer
        _m01 uint32_t buffer_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BufferType
        _m02 void*    pv_buffer;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvBuffer
                                  
        SDK_MAGIC_PROPERTIES( "_BCryptBuffer.$", 0x10, true, 0x3cf1154ab18a4820 );            
        SDK_FIXED_SIZE( b_crypt_buffer_t, 0x10 );            
    };                            
};
#include "magic/b_crypt_buffer_t.end.hpp"
SDK_VERIFY( struct win::b_crypt_buffer_t, 0x10 );
