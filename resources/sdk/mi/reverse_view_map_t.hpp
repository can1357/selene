#pragma once
#include <sdkgen/support_library.hpp>
#include "system_cache_view_attributes_t.hpp"

namespace nt { struct eprocess_t;   }
namespace nt { struct subsection_t; }

#include "magic/reverse_view_map_t.start.hpp"
namespace mi
{
    // [struct _MI_REVERSE_VIEW_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reverse_view_map_t                                                  
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                     
        _m00 nt::list_entry_t                          view_links;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ViewLinks
        _m01 void*                                     system_cache_va;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SystemCacheVa
        _m02 void*                                     session_view_va;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SessionViewVa
        _m03 struct nt::eprocess_t*                    vads_process;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VadsProcess
        _m04 uint2_t                                   type;                     //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .Type
        _m05 struct nt::subsection_t*                  subsection;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Subsection
        _m06 uint1_t                                   subsection_type;          //{ +0x0018@0  +0x0018@0  +0x0018@0  +0x0018@0  } | .SubsectionType
        _m07 uint64_t                                  section_offset;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SectionOffset
                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                     
        _m08 struct mi::system_cache_view_attributes_t system_cache_attributes;  //{ +0x0020    +0x0020    +0x0020    } | .SystemCacheAttributes
                                                                               
        // Windows 11                                                          
        //                                                                     
        _m09 uint64_t                                  all_attributes;           //{ +0x0020    } | .AllAttributes
                                                                               
        SDK_MAGIC_PROPERTIES( "_MI_REVERSE_VIEW_MAP.$", 0x28, true, 0x35d10a10fedadf09 );                        
        SDK_FIXED_SIZE( reverse_view_map_t, 0x28 );                            
    };                                                                         
};
#include "magic/reverse_view_map_t.end.hpp"
SDK_VERIFY( struct mi::reverse_view_map_t, 0x28 );
