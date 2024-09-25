#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_preop_callback_status_t.hpp"
#include "flt_postop_callback_status_t.hpp"

#include "magic/flt_operation_registration_t.start.hpp"
namespace fltmgr
{
    struct flt_callback_data_t;
    struct flt_related_objects_t;

    // [struct _FLT_OPERATION_REGISTRATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_operation_registration_t       
    {                                         
        using pre_operation_t =  sdk::function<enum fltmgr::flt_preop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void**)>*;               
        using post_operation_t = sdk::function<enum fltmgr::flt_postop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*;               
                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 uint8_t           major_function;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorFunction
        _m01 uint32_t          flags;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 pre_operation_t   pre_operation;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PreOperation
        _m03 post_operation_t  post_operation;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PostOperation
                                              
        SDK_MAGIC_PROPERTIES( "_FLT_OPERATION_REGISTRATION.$", 0x20, true, 0xa4e5da94f041ac57 );               
        SDK_FIXED_SIZE( flt_operation_registration_t, 0x20 );               
    };                                        
};
#include "magic/flt_operation_registration_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_operation_registration_t, 0x20 );
