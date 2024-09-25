#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"

#include "magic/file_id_info_t.start.hpp"
namespace win
{
    // [struct _FILE_ID_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_id_info_t                                   
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                  
        _m00 uint64_t                  volume_serial_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VolumeSerialNumber
        _m01 struct win::file_id_128_t file_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileId
                                                            
        SDK_MAGIC_PROPERTIES( "_FILE_ID_INFO.$", 0x18, true, 0x26f6489db6e56c3d );                     
        SDK_FIXED_SIZE( file_id_info_t, 0x18 );                     
    };                                                      
};
#include "magic/file_id_info_t.end.hpp"
SDK_VERIFY( struct win::file_id_info_t, 0x18 );
