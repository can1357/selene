#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_client_process_buffer_ex_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_CLIENT_PROCESS_BUFFER_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_client_process_buffer_ex_t                  
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                       
        _m00 void*                   client_session;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientSession
        _m01 void*                   client_process;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ClientProcess
        _m02 uint16_t                client_computer_name_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ClientComputerNameLength
        _m03 sdk::array<wchar_t, 16> client_computer_buffer;       //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .ClientComputerBuffer
                                                                 
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_CLIENT_PROCESS_BUFFER_EX.$", 0x38, true, 0x8c2b240e0c946f28 );                            
        SDK_FIXED_SIZE( file_pipe_client_process_buffer_ex_t, 0x38 );                            
    };                                                           
};
#include "magic/file_pipe_client_process_buffer_ex_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_client_process_buffer_ex_t, 0x38 );
