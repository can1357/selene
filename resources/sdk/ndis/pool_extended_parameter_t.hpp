#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/pool_priority_t.hpp"

#include "magic/pool_extended_parameter_t.start.hpp"
namespace ndis
{
    struct pool_extended_params_secure_pool_t;

    // [struct _POOL_EXTENDED_PARAMETER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pool_extended_parameter_t                                             
    {                                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                       
        _m00 uint8_t                                          type;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Type
        _m01 uint1_t                                          optional;            //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Optional
        _m02 enum ex::pool_priority_t                         priority;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Priority
                                                                                 
        // Windows 11                                                            
        //                                                                       
        _m03 struct ndis::pool_extended_params_secure_pool_t* secure_pool_params;  //{ +0x0008    } | .SecurePoolParams
        _m04 uint32_t                                         preferred_node;      //{ +0x0008    } | .PreferredNode
                                                                                 
        SDK_NONVOL_PROPERTIES( "_POOL_EXTENDED_PARAMETER.$", 0x10, true, 0x6c56165bdb16fe00 );                   
        SDK_FIXED_SIZE( pool_extended_parameter_t, 0x10 );                       
    };                                                                           
};
#include "magic/pool_extended_parameter_t.end.hpp"
SDK_VERIFY( struct ndis::pool_extended_parameter_t, 0x10 );
