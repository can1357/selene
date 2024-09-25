#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_group_info_t.hpp"

#include "magic/group_relationship_t.start.hpp"
namespace nt
{
    // [struct _GROUP_RELATIONSHIP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct group_relationship_t                                                   
    {                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                        
        _m00 uint16_t                                         maximum_group_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumGroupCount
        _m01 uint16_t                                         active_group_count;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ActiveGroupCount
        _m02 sdk::array<struct nt::processor_group_info_t, 1> group_info;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .GroupInfo
                                                                                  
        SDK_NONVOL_PROPERTIES( "_GROUP_RELATIONSHIP.$", 0x48, true, 0x70920571dfd086c9 );                    
        SDK_FIXED_SIZE( group_relationship_t, 0x48 );                             
    };                                                                            
};
#include "magic/group_relationship_t.end.hpp"
SDK_VERIFY( struct nt::group_relationship_t, 0x48 );
