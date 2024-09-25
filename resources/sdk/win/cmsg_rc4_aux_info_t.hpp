#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmsg_rc4_aux_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_RC4_AUX_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_rc4_aux_info_t   
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t cb_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_bit_len;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwBitLen
                                 
        SDK_MAGIC_PROPERTIES( "_CMSG_RC4_AUX_INFO.$", 0x8, true, 0xa422ef3f333af7d2 );           
        SDK_FIXED_SIZE( cmsg_rc4_aux_info_t, 0x8 );           
    };                           
};
#include "magic/cmsg_rc4_aux_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_rc4_aux_info_t, 0x8 );
