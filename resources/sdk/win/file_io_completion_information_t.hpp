#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/status_block_t.hpp"

#include "magic/file_io_completion_information_t.start.hpp"
namespace win
{
    // [struct _FILE_IO_COMPLETION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_io_completion_information_t            
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                             
        _m00 void*                     key_context;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyContext
        _m01 void*                     apc_context;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ApcContext
        _m02 struct io::status_block_t io_status_block;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .IoStatusBlock
                                                       
        SDK_NONVOL_PROPERTIES( "_FILE_IO_COMPLETION_INFORMATION.$", 0x20, true, 0xa682bd307242f03a );                
        SDK_FIXED_SIZE( file_io_completion_information_t, 0x20 );                
    };                                                 
};
#include "magic/file_io_completion_information_t.end.hpp"
SDK_VERIFY( struct win::file_io_completion_information_t, 0x20 );
