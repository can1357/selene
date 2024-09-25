#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pebs_ds_save_area32_t.start.hpp"
namespace nt
{
    // [struct _PEBS_DS_SAVE_AREA32]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pebs_ds_save_area32_t                              
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint32_t                bts_buffer_base;           //{ +0x0000    +0x0000    +0x0000    } | .BtsBufferBase
        _m01 uint32_t                bts_index;                 //{ +0x0004    +0x0004    +0x0004    } | .BtsIndex
        _m02 uint32_t                bts_absolute_maximum;      //{ +0x0008    +0x0008    +0x0008    } | .BtsAbsoluteMaximum
        _m03 uint32_t                bts_interrupt_threshold;   //{ +0x000c    +0x000c    +0x000c    } | .BtsInterruptThreshold
        _m04 uint32_t                pebs_buffer_base;          //{ +0x0010    +0x0010    +0x0010    } | .PebsBufferBase
        _m05 uint32_t                pebs_index;                //{ +0x0014    +0x0014    +0x0014    } | .PebsIndex
        _m06 uint32_t                pebs_absolute_maximum;     //{ +0x0018    +0x0018    +0x0018    } | .PebsAbsoluteMaximum
        _m07 uint32_t                pebs_interrupt_threshold;  //{ +0x001c    +0x001c    +0x001c    } | .PebsInterruptThreshold
        _m08 sdk::array<uint64_t, 8> pebs_gp_counter_reset;     //{ +0x0020    +0x0020    +0x0020    } | .PebsGpCounterReset
        _m09 sdk::array<uint64_t, 4> pebs_fixed_counter_reset;  //{ +0x0060    +0x0060    +0x0060    } | .PebsFixedCounterReset
                                                              
        SDK_MAGIC_PROPERTIES( "_PEBS_DS_SAVE_AREA32.$", 0x80, true, 0x746256c3fef0f1fd );                         
        SDK_FIXED_SIZE( pebs_ds_save_area32_t, 0x80 );                         
    };                                                        
};
#include "magic/pebs_ds_save_area32_t.end.hpp"
SDK_VERIFY( struct nt::pebs_ds_save_area32_t, 0x80 );
