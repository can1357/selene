#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pebs_ds_save_area64_t.start.hpp"
namespace nt
{
    // [struct _PEBS_DS_SAVE_AREA64]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pebs_ds_save_area64_t                              
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint64_t                bts_buffer_base;           //{ +0x0000    +0x0000    +0x0000    } | .BtsBufferBase
        _m01 uint64_t                bts_index;                 //{ +0x0008    +0x0008    +0x0008    } | .BtsIndex
        _m02 uint64_t                bts_absolute_maximum;      //{ +0x0010    +0x0010    +0x0010    } | .BtsAbsoluteMaximum
        _m03 uint64_t                bts_interrupt_threshold;   //{ +0x0018    +0x0018    +0x0018    } | .BtsInterruptThreshold
        _m04 uint64_t                pebs_buffer_base;          //{ +0x0020    +0x0020    +0x0020    } | .PebsBufferBase
        _m05 uint64_t                pebs_index;                //{ +0x0028    +0x0028    +0x0028    } | .PebsIndex
        _m06 uint64_t                pebs_absolute_maximum;     //{ +0x0030    +0x0030    +0x0030    } | .PebsAbsoluteMaximum
        _m07 uint64_t                pebs_interrupt_threshold;  //{ +0x0038    +0x0038    +0x0038    } | .PebsInterruptThreshold
        _m08 sdk::array<uint64_t, 8> pebs_gp_counter_reset;     //{ +0x0040    +0x0040    +0x0040    } | .PebsGpCounterReset
        _m09 sdk::array<uint64_t, 4> pebs_fixed_counter_reset;  //{ +0x0080    +0x0080    +0x0080    } | .PebsFixedCounterReset
                                                              
        SDK_MAGIC_PROPERTIES( "_PEBS_DS_SAVE_AREA64.$", 0xa0, true, 0x4d993cc5f690e5de );                         
        SDK_FIXED_SIZE( pebs_ds_save_area64_t, 0xa0 );                         
    };                                                        
};
#include "magic/pebs_ds_save_area64_t.end.hpp"
SDK_VERIFY( struct nt::pebs_ds_save_area64_t, 0xa0 );
