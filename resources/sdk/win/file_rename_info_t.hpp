#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_rename_info_t.start.hpp"
namespace win
{
    // [struct _FILE_RENAME_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_rename_info_t                         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                replace_if_exists;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReplaceIfExists
        _m01 uint32_t               flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m02 void*                  root_directory;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RootDirectory
        _m03 uint32_t               file_name_length;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileNameLength
        _m04 sdk::array<wchar_t, 1> file_name;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FileName
                                                      
        SDK_MAGIC_PROPERTIES( "_FILE_RENAME_INFO.$", 0x18, true, 0xe562af073a693c4d );                  
        SDK_FIXED_SIZE( file_rename_info_t, 0x18 );                  
    };                                                
};
#include "magic/file_rename_info_t.end.hpp"
SDK_VERIFY( struct win::file_rename_info_t, 0x18 );
