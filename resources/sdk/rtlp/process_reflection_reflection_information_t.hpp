#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"

#include "magic/process_reflection_reflection_information_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_reflection_reflection_information_t        
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                    
        _m00 void*                  reflection_process_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReflectionProcessHandle
        _m01 void*                  reflection_thread_handle;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ReflectionThreadHandle
        _m02 struct nt::client_id_t reflection_client_id;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ReflectionClientId
                                                              
        SDK_NONVOL_PROPERTIES( "_RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION.$", 0x20, true, 0x2094cf3135efb6cc );                          
        SDK_FIXED_SIZE( process_reflection_reflection_information_t, 0x20 );                          
    };                                                        
};
#include "magic/process_reflection_reflection_information_t.end.hpp"
SDK_VERIFY( struct rtlp::process_reflection_reflection_information_t, 0x20 );
