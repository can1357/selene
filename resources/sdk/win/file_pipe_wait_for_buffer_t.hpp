#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_wait_for_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_WAIT_FOR_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_wait_for_buffer_t                
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 int64_t                timeout;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Timeout
        _m01 uint32_t               name_length;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NameLength
        _m02 uint8_t                timeout_specified;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .TimeoutSpecified
        _m03 sdk::array<wchar_t, 1> name;               //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .Name
                                                      
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_WAIT_FOR_BUFFER.$", 0x10, true, 0xd56a66274a4d7977 );                  
        SDK_FIXED_SIZE( file_pipe_wait_for_buffer_t, 0x10 );                  
    };                                                
};
#include "magic/file_pipe_wait_for_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_wait_for_buffer_t, 0x10 );
