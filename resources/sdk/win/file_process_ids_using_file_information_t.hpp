#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_process_ids_using_file_information_t.start.hpp"
namespace win
{
    // [struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_process_ids_using_file_information_t               
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                         
        _m00 uint32_t                number_of_process_ids_in_list;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfProcessIdsInList
        _m01 sdk::array<uint64_t, 1> process_id_list;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessIdList
                                                                   
        SDK_NONVOL_PROPERTIES( "_FILE_PROCESS_IDS_USING_FILE_INFORMATION.$", 0x10, true, 0xc3b8c1b4547ca7b );                              
        SDK_FIXED_SIZE( file_process_ids_using_file_information_t, 0x10 );                              
    };                                                             
};
#include "magic/file_process_ids_using_file_information_t.end.hpp"
SDK_VERIFY( struct win::file_process_ids_using_file_information_t, 0x10 );
