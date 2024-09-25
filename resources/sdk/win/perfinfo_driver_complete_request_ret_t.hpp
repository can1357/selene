#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_driver_complete_request_ret_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DRIVER_COMPLETE_REQUEST_RET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_driver_complete_request_ret_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 void*    irp;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 uint32_t uniq_match_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UniqMatchId
                                                 
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DRIVER_COMPLETE_REQUEST_RET.$", 0xc, true, 0x62725547436690f4 );              
        SDK_FIXED_SIZE( perfinfo_driver_complete_request_ret_t, 0xc );              
    };                                           
};
#include "magic/perfinfo_driver_complete_request_ret_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_driver_complete_request_ret_t, 0xc );
