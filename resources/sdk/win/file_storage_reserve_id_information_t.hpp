#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_reserve_id_t.hpp"

#include "magic/file_storage_reserve_id_information_t.start.hpp"
namespace win
{
    // [struct _FILE_STORAGE_RESERVE_ID_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_storage_reserve_id_information_t               
    {                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 enum win::storage_reserve_id_t storage_reserve_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StorageReserveId
                                                               
        SDK_NONVOL_PROPERTIES( "_FILE_STORAGE_RESERVE_ID_INFORMATION.$", 0x4, true, 0x7a327b8848a44e77 );                   
        SDK_FIXED_SIZE( file_storage_reserve_id_information_t, 0x4 );                   
    };                                                         
};
#include "magic/file_storage_reserve_id_information_t.end.hpp"
SDK_VERIFY( struct win::file_storage_reserve_id_information_t, 0x4 );
