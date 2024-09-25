#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_process_inswap_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PROCESS_INSWAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_process_inswap_t       
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint64_t directory_table_base;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DirectoryTableBase
        _m01 uint32_t process_id;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessId
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PROCESS_INSWAP.$", 0x10, true, 0xedec857201936dc1 );                     
        SDK_FIXED_SIZE( perfinfo_process_inswap_t, 0x10 );                     
    };                                     
};
#include "magic/perfinfo_process_inswap_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_process_inswap_t, 0x10 );
