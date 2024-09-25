#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/serversilo_state_t.hpp"

#include "magic/serversilo_basic_information_t.start.hpp"
namespace win
{
    // [struct _SERVERSILO_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct serversilo_basic_information_t                       
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                      
        _m00 uint32_t                    service_session_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ServiceSessionId
        _m01 enum nt::serversilo_state_t state;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .State
        _m02 int32_t                     exit_status;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExitStatus
                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                      
        _m03 uint8_t                     is_downlevel_container;  //{ +0x000c    +0x000c    +0x000c    } | .IsDownlevelContainer
        _m04 void*                       api_set_schema;          //{ +0x0010    +0x0010    +0x0010    } | .ApiSetSchema
        _m05 void*                       host_api_set_schema;     //{ +0x0018    +0x0018    +0x0018    } | .HostApiSetSchema
                                                                
        SDK_MAGIC_PROPERTIES( "_SERVERSILO_BASIC_INFORMATION.$", 0x20, true, 0xcfa79529ef6cc2ef );                       
        SDK_DYNAMIC_SIZE( serversilo_basic_information_t );                       
    };                                                          
};
#include "magic/serversilo_basic_information_t.end.hpp"
