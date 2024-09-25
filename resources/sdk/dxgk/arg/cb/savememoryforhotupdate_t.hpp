#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk { struct ksr_memory_range_t; }
namespace nt   { struct mdl_t;              }

#include "magic/savememoryforhotupdate_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_SAVEMEMORYFORHOTUPDATE]
    // => WDK 10 (NV)
    //
    struct savememoryforhotupdate_t                                  
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                         num_data_memory_ranges;  //{ +0x0000    } | .NumDataMemoryRanges
        _m01 struct dxgk::ksr_memory_range_t* p_data_memory_ranges;    //{ +0x0008    } | .pDataMemoryRanges
        _m02 struct nt::mdl_t*                p_data_mdl;              //{ +0x0010    } | .pDataMdl
        _m03 uint32_t                         data_size;               //{ +0x0018    } | .DataSize
        _m04 void*                            p_data;                  //{ +0x0020    } | .pData
        _m05 uint32_t                         meta_data_size;          //{ +0x0028    } | .MetaDataSize
        _m06 uint8_t*                         p_meta_data;             //{ +0x0030    } | .pMetaData
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_SAVEMEMORYFORHOTUPDATE.$", 0x0, false, 0x5373a0a2f3ad96cf );                       
        SDK_FIXED_SIZE( savememoryforhotupdate_t, 0x38 );                       
    };                                                               
};
#include "magic/savememoryforhotupdate_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::savememoryforhotupdate_t, 0x38 );
