#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buildpagingbuffer_fillvirtual_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_fillvirtual_t        
    {                                             
        // WDK 10                                 
        //                                        
        _m00 void*    h_allocation;                 //{ +0x0000    } | .hAllocation
        _m01 uint64_t allocation_offset_in_bytes;   //{ +0x0008    } | .AllocationOffsetInBytes
        _m02 uint64_t fill_size_in_bytes;           //{ +0x0010    } | .FillSizeInBytes
        _m03 uint32_t fill_pattern;                 //{ +0x0018    } | .FillPattern
        _m04 uint64_t destination_virtual_address;  //{ +0x0020    } | .DestinationVirtualAddress
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL.$", 0x0, false, 0x6350fa957256dee7 );                            
        SDK_FIXED_SIZE( buildpagingbuffer_fillvirtual_t, 0x28 );                            
    };                                            
};
#include "magic/buildpagingbuffer_fillvirtual_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_fillvirtual_t, 0x28 );
