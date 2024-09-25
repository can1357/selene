#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_session_process_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SESSION_PROCESS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_session_process_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t session_id;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
        _m01 uint32_t size_of_buf;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfBuf
        _m02 void*    buffer;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SESSION_PROCESS_INFORMATION.$", 0x10, true, 0x2e07e77b0af33bc8 );            
        SDK_FIXED_SIZE( system_session_process_information_t, 0x10 );            
    };                                         
};
#include "magic/system_session_process_information_t.end.hpp"
SDK_VERIFY( struct win::system_session_process_information_t, 0x10 );
