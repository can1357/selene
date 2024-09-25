#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_vhd_boot_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VHD_BOOT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_vhd_boot_information_t                    
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 uint8_t                os_disk_is_vhd;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OsDiskIsVhd
        _m01 uint32_t               os_vhd_file_path_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OsVhdFilePathOffset
        _m02 sdk::array<wchar_t, 1> os_vhd_parent_volume;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OsVhdParentVolume
                                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VHD_BOOT_INFORMATION.$", 0xc, true, 0xa0d5a5de65ab2936 );                        
        SDK_FIXED_SIZE( system_vhd_boot_information_t, 0xc );                        
    };                                                      
};
#include "magic/system_vhd_boot_information_t.end.hpp"
SDK_VERIFY( struct win::system_vhd_boot_information_t, 0xc );
