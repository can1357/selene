#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/entry_t.start.hpp"
namespace boot
{
    // [struct _BOOT_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct entry_t                                        
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t               length;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint32_t               id;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Id
        _m03 uint32_t               attributes;             //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Attributes
        _m04 uint32_t               friendly_name_offset;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FriendlyNameOffset
        _m05 uint32_t               boot_file_path_offset;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .BootFilePathOffset
        _m06 uint32_t               os_options_length;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .OsOptionsLength
        _m07 sdk::array<uint8_t, 1> os_options;             //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .OsOptions
                                                          
        SDK_NONVOL_PROPERTIES( "_BOOT_ENTRY.$", 0x20, true, 0x9da8148ab00dff1e );                      
        SDK_FIXED_SIZE( entry_t, 0x20 );                      
    };                                                    
};
#include "magic/entry_t.end.hpp"
SDK_VERIFY( struct boot::entry_t, 0x20 );
