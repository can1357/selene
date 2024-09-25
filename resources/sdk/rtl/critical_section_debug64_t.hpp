#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/list_entry64_t.hpp"

#include "magic/critical_section_debug64_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CRITICAL_SECTION_DEBUG64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct critical_section_debug64_t                           
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                      
        _m00 uint16_t                  type;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t                  creator_back_trace_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .CreatorBackTraceIndex
        _m02 uint64_t                  critical_section;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CriticalSection
        _m03 struct nt::list_entry64_t process_locks_list;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessLocksList
        _m04 uint32_t                  entry_count;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EntryCount
        _m05 uint32_t                  contention_count;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ContentionCount
                                                                
        SDK_MAGIC_PROPERTIES( "_RTL_CRITICAL_SECTION_DEBUG64.$", 0x30, true, 0x567d2d29b35be22f );                         
        SDK_FIXED_SIZE( critical_section_debug64_t, 0x30 );                         
    };                                                          
};
#include "magic/critical_section_debug64_t.end.hpp"
SDK_VERIFY( struct rtl::critical_section_debug64_t, 0x30 );
