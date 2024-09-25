#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_filecache_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FILECACHE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_filecache_information_t                        
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                       
        _m00 uint64_t current_size;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentSize
        _m01 uint64_t peak_size;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PeakSize
        _m02 uint32_t page_fault_count;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PageFaultCount
        _m03 uint64_t minimum_working_set;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinimumWorkingSet
        _m04 uint64_t maximum_working_set;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaximumWorkingSet
        _m05 uint64_t current_size_including_transition_in_pages;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CurrentSizeIncludingTransitionInPages
        _m06 uint64_t peak_size_including_transition_in_pages;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PeakSizeIncludingTransitionInPages
        _m07 uint32_t transition_re_purpose_count;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TransitionRePurposeCount
        _m08 uint32_t flags;                                       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Flags
                                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FILECACHE_INFORMATION.$", 0x40, true, 0x9f6a8adc920a58d1 );                                           
        SDK_FIXED_SIZE( system_filecache_information_t, 0x40 );                                           
    };                                                           
};
#include "magic/system_filecache_information_t.end.hpp"
SDK_VERIFY( struct win::system_filecache_information_t, 0x40 );
