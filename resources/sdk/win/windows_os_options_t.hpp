#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/windows_os_options_t.start.hpp"
namespace win
{
    // [struct _WINDOWS_OS_OPTIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct windows_os_options_t                         
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 sdk::array<uint8_t, 8> signature;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t               version;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Version
        _m02 uint32_t               length;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Length
        _m03 uint32_t               os_load_path_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OsLoadPathOffset
        _m04 sdk::array<wchar_t, 1> os_load_options;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OsLoadOptions
                                                        
        SDK_MAGIC_PROPERTIES( "_WINDOWS_OS_OPTIONS.$", 0x18, true, 0x12ee8dd50f6747f1 );                    
        SDK_FIXED_SIZE( windows_os_options_t, 0x18 );                    
    };                                                  
};
#include "magic/windows_os_options_t.end.hpp"
SDK_VERIFY( struct win::windows_os_options_t, 0x18 );
