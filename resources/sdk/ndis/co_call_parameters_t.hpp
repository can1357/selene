#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_call_parameters_t.start.hpp"
namespace ndis
{
    struct co_media_parameters_t;
    struct co_call_manager_parameters_t;

    // [struct _CO_CALL_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_call_parameters_t                                             
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                  
        _m00 uint32_t                                   flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct ndis::co_call_manager_parameters_t* call_mgr_parameters;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CallMgrParameters
        _m02 struct ndis::co_media_parameters_t*        media_parameters;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MediaParameters
                                                                            
        SDK_MAGIC_PROPERTIES( "_CO_CALL_PARAMETERS.$", 0x18, true, 0x458104b4a641728e );                    
        SDK_FIXED_SIZE( co_call_parameters_t, 0x18 );                       
    };                                                                      
};
#include "magic/co_call_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::co_call_parameters_t, 0x18 );
