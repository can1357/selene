#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/segmentpreference_t.hpp"
#include "../../d3d/ddi/updateallocproperty_flags_t.hpp"

#include "magic/validateupdateallocproperty_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_VALIDATEUPDATEALLOCPROPERTY]
    // => WDK 10 (NV)
    //
    struct validateupdateallocproperty_t                                            
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 void*                                        h_allocation;               //{ +0x0000    } | .hAllocation
        _m01 uint32_t                                     supported_segment_set;      //{ +0x0008    } | .SupportedSegmentSet
        _m02 struct d3d::ddi::segmentpreference_t         preferred_segment;          //{ +0x000c    } | .PreferredSegment
        _m03 struct d3d::ddi::updateallocproperty_flags_t flags;                      //{ +0x0010    } | .Flags
        _m04 uint1_t                                      set_accessed_physically;    //{ +0x0014@0  } | .SetAccessedPhysically
        _m05 uint1_t                                      set_supported_segment_set;  //{ +0x0014@1  } | .SetSupportedSegmentSet
        _m06 uint1_t                                      set_preferred_segment;      //{ +0x0014@2  } | .SetPreferredSegment
        _m07 uint32_t                                     property_mask_value;        //{ +0x0014    } | .PropertyMaskValue
                                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.$", 0x0, false, 0x1d5d5c88fd540032 );                          
        SDK_FIXED_SIZE( validateupdateallocproperty_t, 0x18 );                          
    };                                                                              
};
#include "magic/validateupdateallocproperty_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::validateupdateallocproperty_t, 0x18 );
