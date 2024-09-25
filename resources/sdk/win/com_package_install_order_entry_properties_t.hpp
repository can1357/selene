#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/com_package_install_order_entry_properties_t.start.hpp"
namespace win
{
    // [struct ComPackageInstallOrderEntryProperties]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_package_install_order_entry_properties_t
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t install_order;                     //{ +0x0000    +0x0000    +0x0000    } | .InstallOrder
                                                       
        SDK_MAGIC_PROPERTIES( "ComPackageInstallOrderEntryProperties.$", 0x4, true, 0xf3757e43ea51ab37 );              
        SDK_FIXED_SIZE( com_package_install_order_entry_properties_t, 0x4 );              
    };                                                 
};
#include "magic/com_package_install_order_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::com_package_install_order_entry_properties_t, 0x4 );
