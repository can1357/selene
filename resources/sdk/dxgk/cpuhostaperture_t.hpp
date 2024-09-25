#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpuhostaperture_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CPUHOSTAPERTURE]
    // => WDK 10 (NV)
    //
    struct cpuhostaperture_t           
    {                                  
        // WDK 10                      
        //                             
        _m00 uint64_t physical_address;  //{ +0x0000    } | .PhysicalAddress
        _m01 uint32_t size_in_pages;     //{ +0x0008    } | .SizeInPages
                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_CPUHOSTAPERTURE.$", 0x0, false, 0xfd1713a9053d2761 );                 
        SDK_FIXED_SIZE( cpuhostaperture_t, 0x10 );                 
    };                                 
};
#include "magic/cpuhostaperture_t.end.hpp"
SDK_VERIFY( struct dxgk::cpuhostaperture_t, 0x10 );
