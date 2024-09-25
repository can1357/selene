#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_post_operation_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_POST_OPERATION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_post_operation_information_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 void*   object;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 int32_t status;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m02 void*   pre_information;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PreInformation
        _m03 int32_t return_status;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ReturnStatus
        _m04 void*   call_context;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CallContext
        _m05 void*   object_context;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ObjectContext
                                           
        SDK_NONVOL_PROPERTIES( "_REG_POST_OPERATION_INFORMATION.$", 0x38, true, 0x77d4e5a404322689 );                
        SDK_FIXED_SIZE( reg_post_operation_information_t, 0x38 );                
    };                                     
};
#include "magic/reg_post_operation_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_post_operation_information_t, 0x38 );
