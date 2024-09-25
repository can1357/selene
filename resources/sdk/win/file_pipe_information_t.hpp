#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_information_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_information_t    
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t read_mode;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadMode
        _m01 uint32_t completion_mode;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .CompletionMode
                                      
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_INFORMATION.$", 0x8, true, 0x57786a572203cafd );                
        SDK_FIXED_SIZE( file_pipe_information_t, 0x8 );                
    };                                
};
#include "magic/file_pipe_information_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_information_t, 0x8 );
