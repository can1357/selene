#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_copy_offload_descriptor_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_COPY_OFFLOAD_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct device_copy_offload_descriptor_t                  
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t version;                                 //{ +0x0000    } | .Version
        _m01 uint32_t size;                                    //{ +0x0004    } | .Size
        _m02 uint32_t maximum_token_lifetime;                  //{ +0x0008    } | .MaximumTokenLifetime
        _m03 uint32_t default_token_lifetime;                  //{ +0x000c    } | .DefaultTokenLifetime
        _m04 uint64_t maximum_transfer_size;                   //{ +0x0010    } | .MaximumTransferSize
        _m05 uint64_t optimal_transfer_count;                  //{ +0x0018    } | .OptimalTransferCount
        _m06 uint32_t maximum_data_descriptors;                //{ +0x0020    } | .MaximumDataDescriptors
        _m07 uint32_t maximum_transfer_length_per_descriptor;  //{ +0x0024    } | .MaximumTransferLengthPerDescriptor
        _m08 uint32_t optimal_transfer_length_per_descriptor;  //{ +0x0028    } | .OptimalTransferLengthPerDescriptor
        _m09 uint16_t optimal_transfer_length_granularity;     //{ +0x002c    } | .OptimalTransferLengthGranularity
                                                             
        SDK_NONVOL_PROPERTIES( "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.$", 0x0, false, 0x44738e03fabd78b8 );                                       
        SDK_FIXED_SIZE( device_copy_offload_descriptor_t, 0x30 );                                       
    };                                                       
};
#include "magic/device_copy_offload_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::device_copy_offload_descriptor_t, 0x30 );
