#pragma once
#include <sdkgen/support_library.hpp>

namespace alpc { struct handle_table_t; }
namespace alpc { struct port_t;         }

#include "magic/kalpc_section_t.start.hpp"
namespace nt
{
    struct eprocess_t;

    // [struct _KALPC_SECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_section_t                                  
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                  
        _m00 void*                        section_object;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionObject
        _m01 uint64_t                     size;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 struct alpc::handle_table_t* handle_table;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HandleTable
        _m03 void*                        section_handle;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SectionHandle
        _m04 struct nt::eprocess_t*       owner_process;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OwnerProcess
        _m05 struct alpc::port_t*         owner_port;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OwnerPort
        _m06 uint1_t                      internal;           //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .Internal
        _m07 uint1_t                      secure;             //{ +0x0030@1  +0x0030@1  +0x0030@1  +0x0030@1  } | .Secure
        _m08 uint32_t                     number_of_regions;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .NumberOfRegions
        _m09 nt::list_entry_t             region_list_head;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RegionListHead
                                                            
        SDK_MAGIC_PROPERTIES( "_KALPC_SECTION.$", 0x48, true, 0xfcefec7287ce6df4 );                  
        SDK_FIXED_SIZE( kalpc_section_t, 0x48 );                  
    };                                                      
};
#include "magic/kalpc_section_t.end.hpp"
SDK_VERIFY( struct nt::kalpc_section_t, 0x48 );
