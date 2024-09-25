#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/break_on_status_buffer_t.start.hpp"
namespace win
{
    // [struct BREAK_ON_STATUS_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct break_on_status_buffer_t               
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                        
        _m00 int32_t              nt_status;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NtStatus
        _m01 uint32_t             win32_error;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Win32Error
        _m02 uint32_t             thread_id;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m03 uint32_t             process_id;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ProcessId
        _m04 sdk::array<char, 16> image_file_name;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageFileName
                                                  
        SDK_MAGIC_PROPERTIES( "BREAK_ON_STATUS_BUFFER.$", 0x20, true, 0x5ed4f1fc13ad698f );                
        SDK_FIXED_SIZE( break_on_status_buffer_t, 0x20 );                
    };                                            
};
#include "magic/break_on_status_buffer_t.end.hpp"
SDK_VERIFY( struct win::break_on_status_buffer_t, 0x20 );
