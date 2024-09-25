#pragma once
#include <sdkgen/support_library.hpp>
#include "flowspec_t.hpp"
#include "co_specific_parameters_t.hpp"

#include "magic/co_call_manager_parameters_t.start.hpp"
namespace ndis
{
    // [struct _CO_CALL_MANAGER_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_call_manager_parameters_t                              
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 struct ndis::flowspec_t               transmit;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Transmit
        _m01 struct ndis::flowspec_t               receive;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Receive
        _m02 struct ndis::co_specific_parameters_t call_mgr_specific;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CallMgrSpecific
                                                                     
        SDK_MAGIC_PROPERTIES( "_CO_CALL_MANAGER_PARAMETERS.$", 0x4c, true, 0x7ed3064240a6f593 );                  
        SDK_FIXED_SIZE( co_call_manager_parameters_t, 0x4c );                  
    };                                                               
};
#include "magic/co_call_manager_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::co_call_manager_parameters_t, 0x4c );
