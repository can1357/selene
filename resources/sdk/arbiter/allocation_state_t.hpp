#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/allocation_state_t.start.hpp"
namespace arbiter
{
    struct list_entry_t;
    struct alternative_t;

    // [struct _ARBITER_ALLOCATION_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct allocation_state_t                                          
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                             
        _m00 uint64_t                       start;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
        _m01 uint64_t                       end;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .End
        _m02 uint64_t                       current_minimum;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentMinimum
        _m03 uint64_t                       current_maximum;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CurrentMaximum
        _m04 struct arbiter::list_entry_t*  entry;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Entry
        _m05 struct arbiter::alternative_t* current_alternative;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CurrentAlternative
        _m06 uint32_t                       alternative_count;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AlternativeCount
        _m07 struct arbiter::alternative_t* alternatives;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Alternatives
        _m08 uint16_t                       flags;                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m09 uint8_t                        range_attributes;            //{ +0x0042    +0x0042    +0x0042    +0x0042    } | .RangeAttributes
        _m10 uint8_t                        range_available_attributes;  //{ +0x0043    +0x0043    +0x0043    +0x0043    } | .RangeAvailableAttributes
        _m11 uint64_t                       work_space;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .WorkSpace
                                                                       
        SDK_MAGIC_PROPERTIES( "_ARBITER_ALLOCATION_STATE.$", 0x50, true, 0x35d4c5aaf0a3b33f );                           
        SDK_FIXED_SIZE( allocation_state_t, 0x50 );                           
    };                                                                 
};
#include "magic/allocation_state_t.end.hpp"
SDK_VERIFY( struct arbiter::allocation_state_t, 0x50 );
