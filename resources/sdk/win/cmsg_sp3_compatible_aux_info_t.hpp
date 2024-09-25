#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmsg_sp3_compatible_aux_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_SP3_COMPATIBLE_AUX_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_sp3_compatible_aux_info_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t cb_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
                                         
        SDK_MAGIC_PROPERTIES( "_CMSG_SP3_COMPATIBLE_AUX_INFO.$", 0x8, true, 0x9c88cb96238a89a9 );         
        SDK_FIXED_SIZE( cmsg_sp3_compatible_aux_info_t, 0x8 );         
    };                                   
};
#include "magic/cmsg_sp3_compatible_aux_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_sp3_compatible_aux_info_t, 0x8 );
