#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/critical_section_debug_t.start.hpp"
namespace rtl
{
    struct critical_section_t;

    // [struct _RTL_CRITICAL_SECTION_DEBUG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct critical_section_debug_t                                        
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                 
        _m00 uint16_t                        type;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t                        creator_back_trace_index;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .CreatorBackTraceIndex
        _m02 struct rtl::critical_section_t* critical_section;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CriticalSection
        _m03 nt::list_entry_t                process_locks_list;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessLocksList
        _m04 uint32_t                        entry_count;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EntryCount
        _m05 uint32_t                        contention_count;               //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .ContentionCount
        _m06 uint32_t                        flags;                          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
        _m07 uint16_t                        creator_back_trace_index_high;  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .CreatorBackTraceIndexHigh
                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                              
        //                                                                 
        _m08 uint16_t                        spare_word;                     //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .SpareWORD
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m09 uint16_t                        identifier;                     //{ +0x002e    } | .Identifier
                                                                           
        SDK_NONVOL_PROPERTIES( "_RTL_CRITICAL_SECTION_DEBUG.$", 0x30, true, 0x104d547917bb5ff8 );                              
        SDK_FIXED_SIZE( critical_section_debug_t, 0x30 );                              
    };                                                                     
};
#include "magic/critical_section_debug_t.end.hpp"
SDK_VERIFY( struct rtl::critical_section_debug_t, 0x30 );
