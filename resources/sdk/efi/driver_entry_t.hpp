#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_entry_t.start.hpp"
namespace efi
{
    // [struct _EFI_DRIVER_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct driver_entry_t                     
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t version;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t length;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint32_t id;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Id
        _m03 uint32_t friendly_name_offset;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FriendlyNameOffset
        _m04 uint32_t driver_file_path_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DriverFilePathOffset
                                              
        SDK_NONVOL_PROPERTIES( "_EFI_DRIVER_ENTRY.$", 0x14, true, 0x34aa1d0795c1e92 );                        
        SDK_FIXED_SIZE( driver_entry_t, 0x14 );                        
    };                                        
};
#include "magic/driver_entry_t.end.hpp"
SDK_VERIFY( struct efi::driver_entry_t, 0x14 );
