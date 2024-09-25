#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_cxl_dvsec_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER]
    // => Windows 11
    //
    union express_cxl_dvsec_control_register_t
    {                                         
        // Windows 11                      
        //                                 
        _m00 uint1_t  cache_enable;             //{ +0x0000@0  } | .CacheEnable
        _m01 uint1_t  io_enable;                //{ +0x0000@1  } | .IoEnable
        _m02 uint1_t  mem_enable;               //{ +0x0000@2  } | .MemEnable
        _m03 uint5_t  cache_sf_coverage;        //{ +0x0000@3  } | .CacheSFCoverage
        _m04 uint3_t  cache_sf_granularity;     //{ +0x0000@8  } | .CacheSFGranularity
        _m05 uint1_t  cache_clean_eviction;     //{ +0x0000@11 } | .CacheCleanEviction
        _m06 uint1_t  viral_enable;             //{ +0x0000@14 } | .ViralEnable
        _m07 uint16_t as_ushort;                //{ +0x0000    } | .AsUSHORT
                                              
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.$", 0x0, false, 0x720798fd44e918a0 );                     
        SDK_FIXED_SIZE( express_cxl_dvsec_control_register_t, 0x2 );                     
    };                                        
};
#include "magic/express_cxl_dvsec_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_cxl_dvsec_control_register_t, 0x2 );
