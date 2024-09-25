#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_rename_information_t.start.hpp"
namespace win
{
    // [struct _FILE_RENAME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_rename_information_t                  
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                replace_if_exists;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReplaceIfExists
        _m01 uint32_t               flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m02 void*                  root_directory;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RootDirectory
        _m03 uint32_t               file_name_length;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileNameLength
        _m04 sdk::array<wchar_t, 1> file_name;          //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FileName
                                                      
        SDK_NONVOL_PROPERTIES( "_FILE_RENAME_INFORMATION.$", 0x18, true, 0x5503a6d149a3e3e6 );                  
        SDK_FIXED_SIZE( file_rename_information_t, 0x18 );                  
    };                                                
};
#include "magic/file_rename_information_t.end.hpp"
SDK_VERIFY( struct win::file_rename_information_t, 0x18 );
