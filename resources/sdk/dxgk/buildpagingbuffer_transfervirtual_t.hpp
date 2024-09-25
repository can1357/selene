#pragma once
#include <sdkgen/support_library.hpp>
#include "transfervirtualflags_t.hpp"
#include "memory_transfer_direction_t.hpp"

#include "magic/buildpagingbuffer_transfervirtual_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_transfervirtual_t                                  
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 void*                                  h_allocation;                 //{ +0x0000    } | .hAllocation
        _m01 uint64_t                               allocation_offset_in_bytes;   //{ +0x0008    } | .AllocationOffsetInBytes
        _m02 uint64_t                               transfer_size_in_bytes;       //{ +0x0010    } | .TransferSizeInBytes
        _m03 uint64_t                               source_virtual_address;       //{ +0x0018    } | .SourceVirtualAddress
        _m04 uint64_t                               destination_virtual_address;  //{ +0x0020    } | .DestinationVirtualAddress
        _m05 uint64_t                               source_page_table;            //{ +0x0028    } | .SourcePageTable
        _m06 enum dxgk::memory_transfer_direction_t transfer_direction;           //{ +0x0030    } | .TransferDirection
        _m07 struct dxgk::transfervirtualflags_t    flags;                        //{ +0x0034    } | .Flags
        _m08 uint64_t                               destination_page_table;       //{ +0x0038    } | .DestinationPageTable
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL.$", 0x0, false, 0x71293f4dba5c955a );                            
        SDK_FIXED_SIZE( buildpagingbuffer_transfervirtual_t, 0x40 );                            
    };                                                                          
};
#include "magic/buildpagingbuffer_transfervirtual_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_transfervirtual_t, 0x40 );
