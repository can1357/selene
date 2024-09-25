#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_create_symlink_input_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_CREATE_SYMLINK_INPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_create_symlink_input_t  
    {                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint16_t name_offset;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NameOffset
        _m01 uint16_t name_length;             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NameLength
        _m02 uint16_t substitute_name_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SubstituteNameOffset
        _m03 uint16_t substitute_name_length;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .SubstituteNameLength
        _m04 uint32_t flags;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                             
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_CREATE_SYMLINK_INPUT.$", 0xc, true, 0x84f73d0204385786 );                       
        SDK_FIXED_SIZE( file_pipe_create_symlink_input_t, 0xc );                       
    };                                       
};
#include "magic/file_pipe_create_symlink_input_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_create_symlink_input_t, 0xc );
