#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id64_t.hpp"
#include "../win/section_image_information64_t.hpp"

#include "magic/user_process_information64_t.start.hpp"
namespace rtl
{
    // [struct _RTL_USER_PROCESS_INFORMATION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_process_information64_t                                  
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                               
        _m00 uint32_t                                  length;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 int64_t                                   process;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Process
        _m02 int64_t                                   thread;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Thread
        _m03 struct nt::client_id64_t                  client_id;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClientId
        _m04 struct win::section_image_information64_t image_information;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ImageInformation
                                                                         
        SDK_MAGIC_PROPERTIES( "_RTL_USER_PROCESS_INFORMATION64.$", 0x68, true, 0xf522d7f937df188 );                  
        SDK_FIXED_SIZE( user_process_information64_t, 0x68 );                  
    };                                                                   
};
#include "magic/user_process_information64_t.end.hpp"
SDK_VERIFY( struct rtl::user_process_information64_t, 0x68 );
