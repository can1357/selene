#pragma once
#include <sdkgen/support_library.hpp>
#include "avl_tree_node_ex_t.hpp"
#include "target_all_shared_export_thunks_t.hpp"

namespace nt { struct driver_object_t; }

#include "magic/target_driver_t.start.hpp"
namespace verf
{
    struct target_verified_driver_data_t;

    // [struct _VF_TARGET_DRIVER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct target_driver_t                                                           
    {                                                                                
        struct u0_flags_t                                                            
        {                                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                       
            _m02 uint1_t snap_shared_exports_failed;                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SnapSharedExportsFailed
                                                                                     
            SDK_MAGIC_PROPERTIES( "_VF_TARGET_DRIVER.Flags.$", 0x4, true, 0x49c1425104da4ed5 );                                                    
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                    
        };                                                                           
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                           
        _m00 struct verf::avl_tree_node_ex_t                tree_node;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TreeNode
        _m01 struct verf::target_all_shared_export_thunks_t all_shared_export_thunks;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllSharedExportThunks
        _m03 u0_flags_t                                     flags;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m04 struct verf::target_verified_driver_data_t*    verified_data;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .VerifiedData
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m05 struct nt::driver_object_t*                    driver_object;             //{ +0x0030    } | .DriverObject
                                                                                     
        SDK_MAGIC_PROPERTIES( "_VF_TARGET_DRIVER.$", 0x40, true, 0xfc75ac2254d88040 );                         
        SDK_FIXED_SIZE( target_driver_t, 0x40 );                                     
    };                                                                               
};
#include "magic/target_driver_t.end.hpp"
SDK_VERIFY( struct verf::target_driver_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct verf::target_driver_t, 0x40 );
