#pragma once
#include <sdkgen/support_library.hpp>
#include "xsave_vendor_t.hpp"

#include "magic/xsave_vendors_t.start.hpp"
namespace win
{
    // [struct _XSAVE_VENDORS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xsave_vendors_t                                               
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                               
        _m00 uint32_t                                  number_of_vendors;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfVendors
        _m01 sdk::array<struct win::xsave_vendor_t, 1> vendor;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Vendor
                                                                         
        SDK_MAGIC_PROPERTIES( "_XSAVE_VENDORS.$", 0x40, true, 0xd784dd3e1fd83333 );                  
        SDK_FIXED_SIZE( xsave_vendors_t, 0x40 );                         
    };                                                                   
};
#include "magic/xsave_vendors_t.end.hpp"
SDK_VERIFY( struct win::xsave_vendors_t, 0x40 );
