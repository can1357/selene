#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_delete_symlink_input_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_DELETE_SYMLINK_INPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_delete_symlink_input_t
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint16_t name_offset;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NameOffset
        _m01 uint16_t name_length;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NameLength
                                           
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_DELETE_SYMLINK_INPUT.$", 0x4, true, 0x6ecdc660f6bca247 );            
        SDK_FIXED_SIZE( file_pipe_delete_symlink_input_t, 0x4 );            
    };                                     
};
#include "magic/file_pipe_delete_symlink_input_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_delete_symlink_input_t, 0x4 );
