#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_objectid_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_OBJECTID_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_objectid_information_t          
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 sdk::array<uint8_t, 16> object_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectId
        _m01 sdk::array<uint8_t, 48> extended_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExtendedInfo
                                                   
        SDK_NONVOL_PROPERTIES( "_FILE_FS_OBJECTID_INFORMATION.$", 0x40, true, 0x3d6b961c4c28e185 );              
        SDK_FIXED_SIZE( file_fs_objectid_information_t, 0x40 );              
    };                                             
};
#include "magic/file_fs_objectid_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_objectid_information_t, 0x40 );
