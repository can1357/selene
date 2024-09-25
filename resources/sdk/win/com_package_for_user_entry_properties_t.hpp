#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/com_package_for_user_entry_properties_t.start.hpp"
namespace win
{
    // [struct ComPackageForUserEntryProperties]
    // => Windows 10 v1607
    //
    struct com_package_for_user_entry_properties_t
    {                                             
        // Windows 10 v1607              
        //                          
        _m00 uint32_t install_order;                //{ +0x0000    } | .InstallOrder
                                                  
        SDK_MAGIC_PROPERTIES( "ComPackageForUserEntryProperties.$", 0x0, false, 0x678bdbbee42588ec );              
        SDK_FIXED_SIZE( com_package_for_user_entry_properties_t, 0x4 );              
    };                                            
};
#include "magic/com_package_for_user_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::com_package_for_user_entry_properties_t, 0x4 );
