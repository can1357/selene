#pragma once
#include <sdkgen/support_library.hpp>

namespace verifier { struct shared_export_thunk_t; }

#include "magic/target_all_shared_export_thunks_t.start.hpp"
namespace verf
{
    // [struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct target_all_shared_export_thunks_t                                              
    {                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                
        _m00 struct verifier::shared_export_thunk_t* shared_export_thunks;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SharedExportThunks
        _m01 struct verifier::shared_export_thunk_t* pool_shared_export_thunks;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PoolSharedExportThunks
        _m02 struct verifier::shared_export_thunk_t* xdv_shared_export_thunks;              //{ +0x0018    +0x0018    +0x0010    +0x0018    } | .XdvSharedExportThunks
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                     
        //                                                                                
        _m03 struct verifier::shared_export_thunk_t* order_dependent_shared_export_thunks;  //{ +0x0010    +0x0010    +0x0010    } | .OrderDependentSharedExportThunks
                                                                                          
        SDK_MAGIC_PROPERTIES( "_VF_TARGET_ALL_SHARED_EXPORT_THUNKS.$", 0x20, true, 0x315f56a20d8612e3 );                                     
        SDK_DYNAMIC_SIZE( target_all_shared_export_thunks_t );                                     
    };                                                                                    
};
#include "magic/target_all_shared_export_thunks_t.end.hpp"
