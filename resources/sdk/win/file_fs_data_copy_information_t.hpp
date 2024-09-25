#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_data_copy_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_DATA_COPY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_data_copy_information_t
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t number_of_copies;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfCopies
                                          
        SDK_NONVOL_PROPERTIES( "_FILE_FS_DATA_COPY_INFORMATION.$", 0x4, true, 0xdba295bbccd8d3ba );                 
        SDK_FIXED_SIZE( file_fs_data_copy_information_t, 0x4 );                 
    };                                    
};
#include "magic/file_fs_data_copy_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_data_copy_information_t, 0x4 );
