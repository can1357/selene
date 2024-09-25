#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"
#include "../nt/section_image_information_t.hpp"

#include "magic/user_process_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_USER_PROCESS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct user_process_information_t                                 
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m00 uint32_t                               length;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 struct nt::client_id_t                 client_id;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ClientId
        _m02 struct nt::section_image_information_t image_information;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ImageInformation
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m03 void*                                  process;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Process
        _m04 void*                                  thread;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Thread
                                                                      
        // WDK 10                                                     
        //                                                            
        _m05 void*                                  process_handle;     //{ +0x0008    } | .ProcessHandle
        _m06 void*                                  thread_handle;      //{ +0x0010    } | .ThreadHandle
                                                                      
        SDK_NONVOL_PROPERTIES( "_RTL_USER_PROCESS_INFORMATION.$", 0x68, true, 0xe7ab26c3e063c76c );                  
        SDK_FIXED_SIZE( user_process_information_t, 0x68 );                  
    };                                                                
};
#include "magic/user_process_information_t.end.hpp"
SDK_VERIFY( struct rtl::user_process_information_t, 0x68 );
