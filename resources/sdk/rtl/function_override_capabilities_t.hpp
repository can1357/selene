#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/function_override_capabilities_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES]
    // => Windows 11
    //
    struct function_override_capabilities_t                    
    {                                                          
        // Windows 11                                          
        //                                                     
        _m00 sdk::array<uint8_t, 40> amd64_capabilities;         //{ +0x0000    } | .AMD64Capabilities
        _m01 sdk::array<uint8_t, 40> amd64_kernel_capabilities;  //{ +0x0028    } | .AMD64KernelCapabilities
                                                               
        SDK_MAGIC_PROPERTIES( "_RTL_FUNCTION_OVERRIDE_CAPABILITIES.$", 0x0, false, 0xe62c405a560deaae );                          
        SDK_FIXED_SIZE( function_override_capabilities_t, 0x50 );                          
    };                                                         
};
#include "magic/function_override_capabilities_t.end.hpp"
SDK_VERIFY( struct rtl::function_override_capabilities_t, 0x50 );
