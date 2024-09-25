#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmsubsection_flags_t.start.hpp"
namespace nt
{
    // [struct _MMSUBSECTION_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmsubsection_flags_t                
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint1_t  subsection_accessed;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SubsectionAccessed
        _m01 uint5_t  protection;                //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Protection
        _m02 uint10_t starting_sector4132;       //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .StartingSector4132
        _m03 uint1_t  subsection_static;         //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .SubsectionStatic
        _m04 uint1_t  global_memory;             //{ +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  } | .GlobalMemory
        _m05 uint1_t  on_dereference_list;       //{ +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  } | .OnDereferenceList
        _m06 uint12_t sector_end_offset;         //{ +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  } | .SectorEndOffset
                                               
        // Windows 10 v1607                         
        //                                     
        _m07 uint1_t  subsection_mapped_direct;  //{ +0x0002@2  } | .SubsectionMappedDirect
                                               
        SDK_MAGIC_PROPERTIES( "_MMSUBSECTION_FLAGS.$", 0x4, true, 0xd57dfb43de83ea5e );                         
        SDK_FIXED_SIZE( mmsubsection_flags_t, 0x4 );                         
    };                                         
};
#include "magic/mmsubsection_flags_t.end.hpp"
SDK_VERIFY( struct nt::mmsubsection_flags_t, 0x4 );
