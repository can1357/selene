#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/area_info_t.start.hpp"
namespace boot
{
    // [struct _BOOT_AREA_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct area_info_t                                          
    {                                                           
        struct u0_boot_sectors_t                                
        {                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                                  
            _m01 int64_t offset;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
                                                                
            SDK_NONVOL_PROPERTIES( "_BOOT_AREA_INFO.BootSectors.$", 0x8, true, 0x7d7a25303d32fa04 );                         
            SDK_FIXED_SIZE( u0_boot_sectors_t, 0x8 );                         
        };                                                      
                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                      
        _m00 uint32_t                         boot_sector_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BootSectorCount
        _m02 sdk::array<u0_boot_sectors_t, 2> boot_sectors;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BootSectors
                                                                
        SDK_NONVOL_PROPERTIES( "_BOOT_AREA_INFO.$", 0x18, true, 0xe5c0a455a4e041fd );                  
        SDK_FIXED_SIZE( area_info_t, 0x18 );                    
    };                                                          
};
#include "magic/area_info_t.end.hpp"
SDK_VERIFY( struct boot::area_info_t::u0_boot_sectors_t, 0x8 );
SDK_VERIFY( struct boot::area_info_t, 0x18 );
