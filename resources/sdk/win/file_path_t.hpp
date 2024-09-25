#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_path_t.start.hpp"
namespace win
{
    // [struct _FILE_PATH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_path_t                        
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 uint32_t               version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t               length;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint32_t               type;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m03 sdk::array<uint8_t, 1> file_path;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FilePath
                                              
        SDK_NONVOL_PROPERTIES( "_FILE_PATH.$", 0x10, true, 0xa92262a409b9bb10 );          
        SDK_FIXED_SIZE( file_path_t, 0x10 );          
    };                                        
};
#include "magic/file_path_t.end.hpp"
SDK_VERIFY( struct win::file_path_t, 0x10 );
