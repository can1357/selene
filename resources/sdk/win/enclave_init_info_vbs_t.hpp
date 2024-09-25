#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_init_info_vbs_t.start.hpp"
namespace win
{
    // [struct _ENCLAVE_INIT_INFO_VBS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_init_info_vbs_t 
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t length;        //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t thread_count;  //{ +0x0004    +0x0004    +0x0004    } | .ThreadCount
                                   
        SDK_MAGIC_PROPERTIES( "_ENCLAVE_INIT_INFO_VBS.$", 0x8, true, 0x4dcdbd97532ca9a1 );             
        SDK_FIXED_SIZE( enclave_init_info_vbs_t, 0x8 );             
    };                             
};
#include "magic/enclave_init_info_vbs_t.end.hpp"
SDK_VERIFY( struct win::enclave_init_info_vbs_t, 0x8 );
