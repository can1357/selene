#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_sessioncreate_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SESSIONCREATE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_sessioncreate_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t unique_session_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueSessionId
        _m01 uint32_t session_id;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SessionId
                                               
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SESSIONCREATE_INFORMATION.$", 0x10, true, 0xb559edf3692b7fc0 );                  
        SDK_FIXED_SIZE( perfinfo_sessioncreate_information_t, 0x10 );                  
    };                                         
};
#include "magic/perfinfo_sessioncreate_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_sessioncreate_information_t, 0x10 );
