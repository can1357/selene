#pragma once
#include <sdkgen/support_library.hpp>
#include "subsection_t.hpp"
#include "../rtl/balanced_node_t.hpp"
#include "../mi/prototype_ptes_node_t.hpp"

#include "magic/msubsection_t.start.hpp"
namespace nt
{
    // [struct _MSUBSECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msubsection_t                                               
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                             
        _m00 struct nt::subsection_t          core;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Core
        _m01 struct rtl::balanced_node_t      subsection_node;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SubsectionNode
        _m02 nt::list_entry_t                 dereference_list;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DereferenceList
        _m03 uint64_t                         number_of_mapped_views;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NumberOfMappedViews
        _m04 uint32_t                         number_of_pfn_references;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NumberOfPfnReferences
                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                             
        _m05 uint32_t                         large_views;               //{ +0x006c    +0x006c    +0x006c    } | .LargeViews
        _m06 struct mi::prototype_ptes_node_t protos_node;               //{ +0x0070    +0x0078    +0x0070    } | .ProtosNode
                                                                       
        // Windows 11                                                  
        //                                                             
        _m07 void*                            subsection_extent_list;    //{ +0x0070    } | .SubsectionExtentList
                                                                       
        SDK_MAGIC_PROPERTIES( "_MSUBSECTION.$", 0x90, true, 0x2101a04b7bf2daeb );                         
        SDK_DYNAMIC_SIZE( msubsection_t );                             
    };                                                                 
};
#include "magic/msubsection_t.end.hpp"
