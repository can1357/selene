#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_client_process_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_CLIENT_PROCESS_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_client_process_buffer_t
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* client_session;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientSession
        _m01 void* client_process;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ClientProcess
                                            
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_CLIENT_PROCESS_BUFFER.$", 0x10, true, 0x4fe1d855ab565706 );               
        SDK_FIXED_SIZE( file_pipe_client_process_buffer_t, 0x10 );               
    };                                      
};
#include "magic/file_pipe_client_process_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_client_process_buffer_t, 0x10 );
