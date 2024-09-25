#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thread_tls_information_t.start.hpp"
namespace win
{
    // [struct _THREAD_TLS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_tls_information_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t flags;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 void*    new_tls_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NewTlsData
        _m02 void*    old_tls_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OldTlsData
        _m03 void*    thread_id;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThreadId
                                   
        SDK_MAGIC_PROPERTIES( "_THREAD_TLS_INFORMATION.$", 0x18, true, 0xf2226d8a6d37e473 );             
        SDK_FIXED_SIZE( thread_tls_information_t, 0x18 );             
    };                             
};
#include "magic/thread_tls_information_t.end.hpp"
SDK_VERIFY( struct win::thread_tls_information_t, 0x18 );
