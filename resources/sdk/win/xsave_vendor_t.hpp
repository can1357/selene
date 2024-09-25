#pragma once
#include <sdkgen/support_library.hpp>
#include "xsave_supported_cpu_t.hpp"

#include "magic/xsave_vendor_t.start.hpp"
namespace win
{
    // [struct _XSAVE_VENDOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xsave_vendor_t                                    
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                   
        _m00 sdk::array<uint32_t, 3>           vendor_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VendorId
        _m01 struct win::xsave_supported_cpu_t supported_cpu;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SupportedCpu
                                                             
        SDK_MAGIC_PROPERTIES( "_XSAVE_VENDOR.$", 0x38, true, 0x2794c6b3c715b755 );              
        SDK_FIXED_SIZE( xsave_vendor_t, 0x38 );              
    };                                                       
};
#include "magic/xsave_vendor_t.end.hpp"
SDK_VERIFY( struct win::xsave_vendor_t, 0x38 );
