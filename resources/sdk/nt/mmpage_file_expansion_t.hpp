#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "mmpage_file_expansion_flags_t.hpp"

namespace mi { struct partition_t; }

#include "magic/mmpage_file_expansion_t.start.hpp"
namespace nt
{
    struct segment_t;

    // [struct _MMPAGE_FILE_EXPANSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpage_file_expansion_t                                             
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                     
        _m00 struct nt::segment_t*                    segment;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Segment
        _m01 nt::list_entry_t                         dereference_list;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DereferenceList
        _m02 struct mi::partition_t*                  partition;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Partition
        _m03 uint64_t                                 requested_expansion_size;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RequestedExpansionSize
        _m04 uint64_t                                 actual_expansion;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ActualExpansion
        _m05 struct nt::kevent_t                      event;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Event
        _m06 volatile int32_t                         in_progress;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .InProgress
        _m07 void* volatile*                          active_entry;              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ActiveEntry
                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                     
        _m08 uint32_t                                 long_flags;                //{ +0x004c    +0x004c    +0x004c    } | .LongFlags
        _m09 struct nt::mmpage_file_expansion_flags_t flags;                     //{ +0x004c    +0x004c    +0x004c    } | .Flags
                                                                               
        // Windows 10 v1607                                                    
        //                                                                     
        _m10 struct nt::mmpage_file_expansion_flags_t u;                         //{ +0x004c    } | .u
        _m11 uint8_t                                  attempt_for_cant_extend;   //{ +0x0058    } | .AttemptForCantExtend
        _m12 uint8_t                                  page_file_contract;        //{ +0x0059    } | .PageFileContract
                                                                               
        SDK_MAGIC_PROPERTIES( "_MMPAGE_FILE_EXPANSION.$", 0x58, true, 0xa79ed1772c8ec89f );                         
        SDK_DYNAMIC_SIZE( mmpage_file_expansion_t );                           
    };                                                                         
};
#include "magic/mmpage_file_expansion_t.end.hpp"
