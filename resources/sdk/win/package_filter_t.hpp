#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/package_filter_t.start.hpp"
namespace win
{
    // [class PackageFilter]
    // => Windows 11
    //
    class package_filter_t                                             
    {                                                                  
        // Windows 11                                                  
        //                                                             
        _m00 const class win::opaque_string_t single_package_full_name;  //{ +0x0000    } | ._singlePackageFullName
                                                                       
        SDK_MAGIC_PROPERTIES( "PackageFilter.$", 0x0, false, 0x6a078e3784140baf );                         
        SDK_FIXED_SIZE( package_filter_t, 0x18 );                         
    };                                                                 
};
#include "magic/package_filter_t.end.hpp"
SDK_VERIFY( class win::package_filter_t, 0x18 );
