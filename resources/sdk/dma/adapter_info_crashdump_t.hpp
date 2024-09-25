#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_description_t.hpp"

#include "magic/adapter_info_crashdump_t.start.hpp"
namespace dma
{
    // [struct _DMA_ADAPTER_INFO_CRASHDUMP]
    // => Windows 11
    //
    struct adapter_info_crashdump_t                             
    {                                                           
        // Windows 11                                           
        //                                                      
        _m00 struct nt::device_description_t device_description;  //{ +0x0000    } | .DeviceDescription
        _m01 uint64_t                        device_id_size;      //{ +0x0040    } | .DeviceIdSize
        _m02 void*                           device_id;           //{ +0x0048    } | .DeviceId
                                                                
        SDK_MAGIC_PROPERTIES( "_DMA_ADAPTER_INFO_CRASHDUMP.$", 0x0, false, 0x6669a6d9e9f09ae6 );                   
        SDK_FIXED_SIZE( adapter_info_crashdump_t, 0x50 );                   
    };                                                          
};
#include "magic/adapter_info_crashdump_t.end.hpp"
SDK_VERIFY( struct dma::adapter_info_crashdump_t, 0x50 );
