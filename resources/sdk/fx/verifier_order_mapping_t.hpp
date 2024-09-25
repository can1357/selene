#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_order_mapping_t.start.hpp"
namespace fx
{
    // [struct FxVerifierOrderMapping]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_order_mapping_t     
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t object_type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m01 uint16_t object_lock_order;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ObjectLockOrder
                                        
        SDK_MAGIC_PROPERTIES( "FxVerifierOrderMapping.$", 0x4, true, 0x509726d02358d27d );                  
        SDK_FIXED_SIZE( verifier_order_mapping_t, 0x4 );                  
    };                                  
};
#include "magic/verifier_order_mapping_t.end.hpp"
SDK_VERIFY( struct fx::verifier_order_mapping_t, 0x4 );
