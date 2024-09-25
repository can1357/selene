#pragma once
#include <sdkgen/support_library.hpp>
#include "prototype_ptes_node_t.hpp"
#include "../rtl/balanced_node_t.hpp"
#include "../nt/single_list_entry_t.hpp"

namespace nt { struct mmpte_t;      }
namespace nt { struct subsection_t; }

#include "magic/per_session_protos_t.start.hpp"
namespace mi
{
    // [struct _MI_PER_SESSION_PROTOS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct per_session_protos_t                                      
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                           
        _m00 struct rtl::balanced_node_t      session_proto_node;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionProtoNode
        _m01 struct nt::single_list_entry_t   free_list;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeList
        _m02 void*                            driver_address;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverAddress
        _m03 uint32_t                         session_id;              //{ +0x0018    +0x0040    +0x0040    +0x0040    } | .SessionId
        _m04 struct nt::subsection_t*         subsection;              //{ +0x0018    +0x0040    +0x0040    +0x0040    } | .Subsection
        _m05 struct nt::mmpte_t*              subsection_base;         //{ +0x0020    +0x0048    +0x0048    +0x0048    } | .SubsectionBase
        _m06 uint32_t                         reference_count;         //{ +0x0028    +0x0050    +0x0050    +0x0050    } | .ReferenceCount
        _m07 uint32_t                         number_of_ptes_to_free;  //{ +0x0028    +0x0050    +0x0050    +0x0050    } | .NumberOfPtesToFree
                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                           
        _m08 struct mi::prototype_ptes_node_t protos_node;             //{ +0x0018    +0x0018    +0x0018    } | .ProtosNode
        _m09 uint64_t                         number_of_ptes;          //{ +0x0038    +0x0038    +0x0038    } | .NumberOfPtes
                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_PER_SESSION_PROTOS.$", 0x58, true, 0x87b0145cc5eb4cda );                       
        SDK_DYNAMIC_SIZE( per_session_protos_t );                       
    };                                                               
};
#include "magic/per_session_protos_t.end.hpp"
