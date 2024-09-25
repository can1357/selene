#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_memory_events_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_memory_events_information_t          
    {                                                            
        union u0_flags_t                                         
        {                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                   
            _m00 uint1_t  commit_events;                           //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .CommitEvents
            _m01 uint32_t all_flags;                               //{ +0x0000    +0x0000    +0x0000    } | .AllFlags
                                                                 
            SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.Flags.$", 0x4, true, 0xa180c78a7747f3f1 );                                       
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                       
        };                                                       
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                       
        _m02 u0_flags_t                 flags;                     //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m03 uint32_t                   handle_attributes;         //{ +0x0004    +0x0004    +0x0004    } | .HandleAttributes
        _m04 uint32_t                   desired_access;            //{ +0x0008    +0x0008    +0x0008    } | .DesiredAccess
        _m05 void*                      low_commit_condition;      //{ +0x0010    +0x0010    +0x0010    } | .LowCommitCondition
        _m06 void*                      high_commit_condition;     //{ +0x0018    +0x0018    +0x0018    } | .HighCommitCondition
        _m07 void*                      maximum_commit_condition;  //{ +0x0020    +0x0020    +0x0020    } | .MaximumCommitCondition
                                                                 
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION.$", 0x28, true, 0xdd4d1ab9862862ac );                         
        SDK_FIXED_SIZE( memory_partition_memory_events_information_t, 0x28 );                         
    };                                                           
};
#include "magic/memory_partition_memory_events_information_t.end.hpp"
SDK_VERIFY( union win::memory_partition_memory_events_information_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct win::memory_partition_memory_events_information_t, 0x28 );
