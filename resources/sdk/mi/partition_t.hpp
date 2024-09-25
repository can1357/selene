#pragma once
#include <sdkgen/support_library.hpp>
#include "partition_core_t.hpp"
#include "partition_commit_t.hpp"
#include "partition_stores_t.hpp"
#include "partition_zeroing_t.hpp"
#include "visible_partition_t.hpp"
#include "partition_segments_t.hpp"
#include "partition_modwrites_t.hpp"
#include "partition_page_lists_t.hpp"
#include "page_combining_support_t.hpp"
#include "special_purpose_memory_state_t.hpp"
#include "../nt/mmworking_set_expansion_head_t.hpp"

#include "magic/partition_t.start.hpp"
namespace mi
{
    // [struct _MI_PARTITION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_t                                                                  
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                              
        _m00 struct mi::partition_core_t               core;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Core
        _m01 struct mi::partition_modwrites_t          modwriter;                         //{ +0x0160    +0x01b8    +0x01e0    +0x01b8    } | .Modwriter
        _m02 struct mi::partition_stores_t             store;                             //{ +0x0430    +0x0480    +0x04a0    +0x0480    } | .Store
        _m03 struct mi::partition_segments_t           segments;                          //{ +0x04c0    +0x0540    +0x0580    +0x0540    } | .Segments
        _m04 struct mi::partition_page_lists_t         page_lists;                        //{ +0x0640    +0x0880    +0x09c0    +0x0880    } | .PageLists
        _m05 struct mi::partition_commit_t             commit;                            //{ +0x1180    +0x1840    +0x4000    +0x1840    } | .Commit
        _m06 struct mi::partition_zeroing_t            zeroing;                           //{ +0x1200    +0x1880    +0x4040    +0x1880    } | .Zeroing
        _m07 struct mi::page_combining_support_t       page_combine;                      //{ +0x1260    +0x1930    +0x4088    +0x1930    } | .PageCombine
        _m08 void*                                     working_set_control;               //{ +0x13e8    +0x1ac0    +0x4218    +0x1ac0    } | .WorkingSetControl
        _m09 struct nt::mmworking_set_expansion_head_t working_set_expansion_head;        //{ +0x13f0    +0x1ac8    +0x4220    +0x1ac8    } | .WorkingSetExpansionHead
        _m10 struct mi::visible_partition_t            vp;                                //{ +0x1400    +0x1b00    +0x4280    +0x1b00    } | .Vp
                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                              
        _m11 uint32_t                                  session_detach_time_stamp;         //{ +0x1ad8    +0x4268    +0x1ad8    } | .SessionDetachTimeStamp
                                                                                        
        // Windows 11                                                                   
        //                                                                              
        _m12 struct mi::special_purpose_memory_state_t special_purpose_memory;            //{ +0x4230    } | .SpecialPurposeMemory
        _m13 uint64_t                                  last_periodic_telemetry_log_time;  //{ +0x4270    } | .LastPeriodicTelemetryLogTime
                                                                                        
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION.$", 0x2d00, true, 0x1e6840949623a606 );                                 
        SDK_DYNAMIC_SIZE( partition_t );                                                
    };                                                                                  
};
#include "magic/partition_t.end.hpp"
