#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_packaged_com_catalog_t.start.hpp"
namespace win
{
    // [class CPackagedComCatalog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_packaged_com_catalog_t                                         
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
        //                                                                 
        _m00 const bool current_package_only;                                //{ +0x0010    +0x0030    +0x0030    +0x0030    } | ._currentPackageOnly
                                                                           
        // Windows 10 v2004, Windows 10 v20H2                                                   
        //                                                                 
        _m01 const bool is_user_hive_ok;                                     //{ +0x0031    +0x0031    } | ._isUserHiveOk
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m02 const bool is_user_hive_ok_for_all_packages_subject_to_policy;  //{ +0x0031    } | ._isUserHiveOkForAllPackagesSubjectToPolicy
                                                                           
        SDK_MAGIC_PROPERTIES( "CPackagedComCatalog.$", 0x38, true, 0x5221e0a4afbcf8b6 );                                                   
        SDK_DYNAMIC_SIZE( c_packaged_com_catalog_t );                                                   
    };                                                                     
};
#include "magic/c_packaged_com_catalog_t.end.hpp"
