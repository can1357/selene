#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/d3dgpu_physical_address_t.hpp"

#include "magic/buildpagingbuffer_notifyresidency_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BUILDPAGINGBUFFER_NOTIFYRESIDENCY]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_notifyresidency_t                     
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 void*                                h_allocation;      //{ +0x0000    } | .hAllocation
        _m01 struct nt::d3dgpu_physical_address_t physical_address;  //{ +0x0008    } | .PhysicalAddress
        _m02 uint1_t                              resident;          //{ +0x0018@0  } | .Resident
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_NOTIFYRESIDENCY.$", 0x0, false, 0x14e12a32479d8b8d );                 
        SDK_FIXED_SIZE( buildpagingbuffer_notifyresidency_t, 0x20 );                 
    };                                                             
};
#include "magic/buildpagingbuffer_notifyresidency_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_notifyresidency_t, 0x20 );
