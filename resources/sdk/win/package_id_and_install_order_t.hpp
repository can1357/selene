#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/package_id_and_install_order_t.start.hpp"
namespace win
{
    // [struct PackageIdAndInstallOrder]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct package_id_and_install_order_t                                                     
    {                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                      
        //                                                                                    
        _m00 class win::opaque_string_t package_id;                                             //{ +0x0000    +0x0000    +0x0000    } | .packageId
        _m01 uint32_t                   install_order;                                          //{ +0x0008    +0x0008    +0x0008    } | .installOrder
                                                                                              
        // Windows 10 v2004, Windows 10 v20H2                                                      
        //                                                                                    
        _m02 bool                       is_machine_and_singleton_but_not_current_user_package;  //{ +0x000c    +0x000c    } | .isMachineAndSingletonButNotCurrentUserPackage
                                                                                              
        SDK_MAGIC_PROPERTIES( "PackageIdAndInstallOrder.$", 0x10, true, 0x48376699f08a9ade );                                                      
        SDK_FIXED_SIZE( package_id_and_install_order_t, 0x10 );                                                      
    };                                                                                        
};
#include "magic/package_id_and_install_order_t.end.hpp"
SDK_VERIFY( struct win::package_id_and_install_order_t, 0x10 );
