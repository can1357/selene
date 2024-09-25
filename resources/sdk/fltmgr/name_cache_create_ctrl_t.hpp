#pragma once
#include <sdkgen/support_library.hpp>
#include "name_cache_list_ctrl_t.hpp"

#include "magic/name_cache_create_ctrl_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;

    // [struct _NAME_CACHE_CREATE_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_cache_create_ctrl_t                                      
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                               
        _m00 uint32_t                              flags;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 int32_t                               error_status;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ErrorStatus
        _m02 struct fltmgr::flt_instance_t*        error_instance;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ErrorInstance
        _m03 struct fltmgr::flt_instance_t*        completing_instance;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CompletingInstance
        _m04 struct fltmgr::name_cache_list_ctrl_t normalized_name_cache;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NormalizedNameCache
        _m05 struct fltmgr::name_cache_list_ctrl_t opened_name_cache;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OpenedNameCache
                                                                         
        SDK_MAGIC_PROPERTIES( "_NAME_CACHE_CREATE_CTRL.$", 0x38, true, 0x5af245248d3f8a28 );                      
        SDK_FIXED_SIZE( name_cache_create_ctrl_t, 0x38 );                      
    };                                                                   
};
#include "magic/name_cache_create_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::name_cache_create_ctrl_t, 0x38 );
