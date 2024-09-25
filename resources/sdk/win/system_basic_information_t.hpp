#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_basic_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_basic_information_t                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t timer_resolution;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TimerResolution
        _m01 uint32_t page_size;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PageSize
        _m02 uint32_t number_of_physical_pages;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfPhysicalPages
        _m03 uint32_t lowest_physical_page_number;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LowestPhysicalPageNumber
        _m04 uint32_t highest_physical_page_number;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .HighestPhysicalPageNumber
        _m05 uint32_t allocation_granularity;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocationGranularity
        _m06 uint64_t minimum_user_mode_address;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MinimumUserModeAddress
        _m07 uint64_t maximum_user_mode_address;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaximumUserModeAddress
        _m08 uint64_t active_processors_affinity_mask;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ActiveProcessorsAffinityMask
        _m09 char     number_of_processors;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NumberOfProcessors
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BASIC_INFORMATION.$", 0x40, true, 0x118335c49429d4d5 );                                
        SDK_FIXED_SIZE( system_basic_information_t, 0x40 );                                
    };                                                
};
#include "magic/system_basic_information_t.end.hpp"
SDK_VERIFY( struct win::system_basic_information_t, 0x40 );
