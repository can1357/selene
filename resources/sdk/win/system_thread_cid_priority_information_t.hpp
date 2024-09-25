#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"

#include "magic/system_thread_cid_priority_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_THREAD_CID_PRIORITY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_thread_cid_priority_information_t
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 struct nt::client_id_t client_id;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientId
        _m01 int32_t                priority;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Priority
                                                   
        SDK_MAGIC_PROPERTIES( "_SYSTEM_THREAD_CID_PRIORITY_INFORMATION.$", 0x18, true, 0x4c126e6979eecbce );          
        SDK_FIXED_SIZE( system_thread_cid_priority_information_t, 0x18 );          
    };                                             
};
#include "magic/system_thread_cid_priority_information_t.end.hpp"
SDK_VERIFY( struct win::system_thread_cid_priority_information_t, 0x18 );
