#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_silo_arrival_input_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_SILO_ARRIVAL_INPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_silo_arrival_input_t
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                    
        _m00 void* job_handle;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .JobHandle
                                         
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_SILO_ARRIVAL_INPUT.$", 0x8, true, 0xd6b9f96b545aa2ae );           
        SDK_FIXED_SIZE( file_pipe_silo_arrival_input_t, 0x8 );           
    };                                   
};
#include "magic/file_pipe_silo_arrival_input_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_silo_arrival_input_t, 0x8 );
