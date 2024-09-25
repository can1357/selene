#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_label_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_LABEL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_label_information_t                  
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint32_t               volume_label_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VolumeLabelLength
        _m01 sdk::array<wchar_t, 1> volume_label;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .VolumeLabel
                                                        
        SDK_NONVOL_PROPERTIES( "_FILE_FS_LABEL_INFORMATION.$", 0x8, true, 0x4c977bf8e71748b5 );                    
        SDK_FIXED_SIZE( file_fs_label_information_t, 0x8 );                    
    };                                                  
};
#include "magic/file_fs_label_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_label_information_t, 0x8 );
