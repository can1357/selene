#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_description_t.hpp"

namespace dma { struct adapter_t; }

#include "magic/dma_description_t.start.hpp"
namespace fx
{
    // [struct _FxDmaDescription]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_description_t                                           
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                             
        _m00 struct nt::device_description_t device_description;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceDescription
        _m01 struct dma::adapter_t*          adapter_object;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AdapterObject
        _m02 uint64_t                        preallocated_sg_list_size;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PreallocatedSGListSize
        _m03 uint64_t                        maximum_fragment_length;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MaximumFragmentLength
        _m04 uint32_t                        number_of_map_registers;    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NumberOfMapRegisters
                                                                       
        SDK_MAGIC_PROPERTIES( "_FxDmaDescription.$", 0x60, true, 0x563692a9b0204359 );                          
        SDK_FIXED_SIZE( dma_description_t, 0x60 );                          
    };                                                                 
};
#include "magic/dma_description_t.end.hpp"
SDK_VERIFY( struct fx::dma_description_t, 0x60 );
