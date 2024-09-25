#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_preop_callback_status_t.hpp"
#include "flt_postop_callback_status_t.hpp"

#include "magic/flt_verifier_operations_t.start.hpp"
namespace fltmgr
{
    struct flt_callback_data_t;
    struct flt_related_objects_t;

    // [struct FLT_VERIFIER_OPERATIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_verifier_operations_t          
    {                                         
        using pre_operation_t =  sdk::function<enum fltmgr::flt_preop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void**)>*;               
        using post_operation_t = sdk::function<enum fltmgr::flt_postop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*;               
                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 pre_operation_t   pre_operation;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreOperation
        _m01 post_operation_t  post_operation;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostOperation
                                              
        SDK_MAGIC_PROPERTIES( "FLT_VERIFIER_OPERATIONS.$", 0x10, true, 0xa10d76513f1567a7 );               
        SDK_FIXED_SIZE( flt_verifier_operations_t, 0x10 );               
    };                                        
};
#include "magic/flt_verifier_operations_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_verifier_operations_t, 0x10 );
