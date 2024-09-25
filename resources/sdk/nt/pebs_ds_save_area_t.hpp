#pragma once
#include <sdkgen/support_library.hpp>
#include "pebs_ds_save_area32_t.hpp"
#include "pebs_ds_save_area64_t.hpp"

#include "magic/pebs_ds_save_area_t.start.hpp"
namespace nt
{
    // [struct _PEBS_DS_SAVE_AREA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pebs_ds_save_area_t                                         
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                             
        _m00 struct nt::pebs_ds_save_area32_t as32_bit;                  //{ +0x0000    +0x0000    +0x0000    } | .As32Bit
        _m01 struct nt::pebs_ds_save_area64_t as64_bit;                  //{ +0x0000    +0x0000    +0x0000    } | .As64Bit
                                                                       
        // Windows 10 v1607                                            
        //                                                             
        _m02 uint64_t                         bts_buffer_base;           //{ +0x0000    } | .BtsBufferBase
        _m03 uint64_t                         bts_index;                 //{ +0x0008    } | .BtsIndex
        _m04 uint64_t                         bts_absolute_maximum;      //{ +0x0010    } | .BtsAbsoluteMaximum
        _m05 uint64_t                         bts_interrupt_threshold;   //{ +0x0018    } | .BtsInterruptThreshold
        _m06 uint64_t                         pebs_buffer_base;          //{ +0x0020    } | .PebsBufferBase
        _m07 uint64_t                         pebs_index;                //{ +0x0028    } | .PebsIndex
        _m08 uint64_t                         pebs_absolute_maximum;     //{ +0x0030    } | .PebsAbsoluteMaximum
        _m09 uint64_t                         pebs_interrupt_threshold;  //{ +0x0038    } | .PebsInterruptThreshold
        _m10 uint64_t                         pebs_counter_reset0;       //{ +0x0040    } | .PebsCounterReset0
        _m11 uint64_t                         pebs_counter_reset1;       //{ +0x0048    } | .PebsCounterReset1
        _m12 uint64_t                         pebs_counter_reset2;       //{ +0x0050    } | .PebsCounterReset2
        _m13 uint64_t                         pebs_counter_reset3;       //{ +0x0058    } | .PebsCounterReset3
                                                                       
        SDK_MAGIC_PROPERTIES( "_PEBS_DS_SAVE_AREA.$", 0xa0, true, 0x27c7c843da638413 );                         
        SDK_DYNAMIC_SIZE( pebs_ds_save_area_t );                         
    };                                                                 
};
#include "magic/pebs_ds_save_area_t.end.hpp"
