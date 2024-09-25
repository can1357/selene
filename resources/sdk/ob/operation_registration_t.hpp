#pragma once
#include <sdkgen/support_library.hpp>
#include "preop_callback_status_t.hpp"

namespace nt { struct object_type_t; }

#include "magic/operation_registration_t.start.hpp"
namespace ob
{
    struct pre_operation_information_t;
    struct post_operation_information_t;

    // [struct _OB_OPERATION_REGISTRATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct operation_registration_t                        
    {                                                      
        using pob_pre_operation_callback_t =  sdk::function<enum ob::preop_callback_status_t(void*, struct ob::pre_operation_information_t*)>*;               
        using pob_post_operation_callback_t = sdk::function<void(void*, struct ob::post_operation_information_t*)>*;               
                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 struct nt::object_type_t**     object_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m01 uint32_t                       operations;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Operations
        _m02 pob_pre_operation_callback_t   pre_operation;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PreOperation
        _m03 pob_post_operation_callback_t  post_operation;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PostOperation
                                                           
        SDK_NONVOL_PROPERTIES( "_OB_OPERATION_REGISTRATION.$", 0x20, true, 0x2ebb00e2e5c2a7f7 );               
        SDK_FIXED_SIZE( operation_registration_t, 0x20 );               
    };                                                     
};
#include "magic/operation_registration_t.end.hpp"
SDK_VERIFY( struct ob::operation_registration_t, 0x20 );
