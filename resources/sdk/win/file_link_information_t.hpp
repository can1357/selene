#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_link_information_t.start.hpp"
namespace win
{
    // [struct _FILE_LINK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_link_information_t                    
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                replace_if_exists;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReplaceIfExists
        _m01 void*                  root_directory;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RootDirectory
        _m02 uint32_t               file_name_length;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileNameLength
        _m03 sdk::array<wchar_t, 1> file_name;          //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FileName
                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m04 uint32_t               flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                                      
        SDK_NONVOL_PROPERTIES( "_FILE_LINK_INFORMATION.$", 0x18, true, 0xa48a0f483dcf2e05 );                  
        SDK_FIXED_SIZE( file_link_information_t, 0x18 );                  
    };                                                
};
#include "magic/file_link_information_t.end.hpp"
SDK_VERIFY( struct win::file_link_information_t, 0x18 );
