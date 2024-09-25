#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/package_id_and_install_orders_t.start.hpp"
namespace win
{
    // [struct PackageIdAndInstallOrders]
    // => Windows 11
    //
    struct package_id_and_install_orders_t                    
    {                                                         
        // Windows 11                                         
        //                                                    
        _m00 class win::opaque_string_t package_id;             //{ +0x0000    } | .packageId
        _m01 uint32_t                   user_install_order;     //{ +0x0008    } | .userInstallOrder
        _m02 uint32_t                   machine_install_order;  //{ +0x000c    } | .machineInstallOrder
                                                              
        SDK_MAGIC_PROPERTIES( "PackageIdAndInstallOrders.$", 0x0, false, 0xe5b29f04bc6ba46 );                      
        SDK_FIXED_SIZE( package_id_and_install_orders_t, 0x10 );                      
    };                                                        
};
#include "magic/package_id_and_install_orders_t.end.hpp"
SDK_VERIFY( struct win::package_id_and_install_orders_t, 0x10 );
