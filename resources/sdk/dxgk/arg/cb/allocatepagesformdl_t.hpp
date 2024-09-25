#pragma once
#include <sdkgen/support_library.hpp>
#include "../../memory_caching_type_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/allocatepagesformdl_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_ALLOCATEPAGESFORMDL]
    // => WDK 10 (NV)
    //
    struct allocatepagesformdl_t                              
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 int64_t                          low_address;      //{ +0x0000    } | .LowAddress
        _m01 int64_t                          high_address;     //{ +0x0008    } | .HighAddress
        _m02 int64_t                          skip_bytes;       //{ +0x0010    } | .SkipBytes
        _m03 uint64_t                         total_bytes;      //{ +0x0018    } | .TotalBytes
        _m04 enum dxgk::memory_caching_type_t cache_type;       //{ +0x0020    } | .CacheType
        _m05 uint32_t                         flags;            //{ +0x0024    } | .Flags
        _m06 void*                            h_memory_handle;  //{ +0x0028    } | .hMemoryHandle
        _m07 struct nt::mdl_t*                p_mdl;            //{ +0x0030    } | .pMdl
                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_ALLOCATEPAGESFORMDL.$", 0x0, false, 0x79d9608e003f57c5 );                
        SDK_FIXED_SIZE( allocatepagesformdl_t, 0x38 );                
    };                                                        
};
#include "magic/allocatepagesformdl_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::allocatepagesformdl_t, 0x38 );
