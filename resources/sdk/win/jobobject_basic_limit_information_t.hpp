#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_basic_limit_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_BASIC_LIMIT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_basic_limit_information_t    
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 int64_t  per_process_user_time_limit;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PerProcessUserTimeLimit
        _m01 int64_t  per_job_user_time_limit;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PerJobUserTimeLimit
        _m02 uint32_t limit_flags;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LimitFlags
        _m03 uint64_t minimum_working_set_size;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinimumWorkingSetSize
        _m04 uint64_t maximum_working_set_size;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaximumWorkingSetSize
        _m05 uint32_t active_process_limit;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ActiveProcessLimit
        _m06 uint64_t affinity;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Affinity
        _m07 uint32_t priority_class;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PriorityClass
        _m08 uint32_t scheduling_class;             //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SchedulingClass
                                                  
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_BASIC_LIMIT_INFORMATION.$", 0x40, true, 0xe4651e314974087f );                            
        SDK_FIXED_SIZE( jobobject_basic_limit_information_t, 0x40 );                            
    };                                            
};
#include "magic/jobobject_basic_limit_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_basic_limit_information_t, 0x40 );
