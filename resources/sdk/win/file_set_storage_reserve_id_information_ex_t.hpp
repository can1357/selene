#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_reserve_id_t.hpp"

#include "magic/file_set_storage_reserve_id_information_ex_t.start.hpp"
namespace win
{
    // [struct _FILE_SET_STORAGE_RESERVE_ID_INFORMATION_EX]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_set_storage_reserve_id_information_ex_t        
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 enum win::storage_reserve_id_t storage_reserve_id;  //{ +0x0000    +0x0000    +0x0000    } | .StorageReserveId
        _m01 uint32_t                       flags;               //{ +0x0004    +0x0004    +0x0004    } | .Flags
                                                               
        SDK_MAGIC_PROPERTIES( "_FILE_SET_STORAGE_RESERVE_ID_INFORMATION_EX.$", 0x8, true, 0x46affbf56aba4534 );                   
        SDK_FIXED_SIZE( file_set_storage_reserve_id_information_ex_t, 0x8 );                   
    };                                                         
};
#include "magic/file_set_storage_reserve_id_information_ex_t.end.hpp"
SDK_VERIFY( struct win::file_set_storage_reserve_id_information_ex_t, 0x8 );
