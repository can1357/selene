#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_process_id_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESS_ID_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_process_id_information_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                               
        _m00 void*            process_id;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 nt::unicode_view image_name;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageName
                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESS_ID_INFORMATION.$", 0x18, true, 0xf1a90e42dc9b3570 );           
        SDK_FIXED_SIZE( system_process_id_information_t, 0x18 );           
    };                                    
};
#include "magic/system_process_id_information_t.end.hpp"
SDK_VERIFY( struct win::system_process_id_information_t, 0x18 );
