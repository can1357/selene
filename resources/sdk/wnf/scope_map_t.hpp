#pragma once
#include <sdkgen/support_library.hpp>
#include "node_header_t.hpp"
#include "scope_map_entry_t.hpp"

#include "magic/scope_map_t.start.hpp"
namespace wnf
{
    struct scope_instance_t;

    // [struct _WNF_SCOPE_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scope_map_t                                                                    
    {                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                
        _m00 struct wnf::node_header_t                    header;                           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wnf::scope_instance_t*                system_scope_instance;            //{ +0x0008    +0x0008    +0x0008    } | .SystemScopeInstance
        _m02 struct wnf::scope_instance_t*                machine_scope_instance;           //{ +0x0010    +0x0010    +0x0010    } | .MachineScopeInstance
        _m03 struct wnf::scope_instance_t*                physical_machine_scope_instance;  //{ +0x0018    +0x0018    +0x0018    } | .PhysicalMachineScopeInstance
        _m04 sdk::array<struct wnf::scope_map_entry_t, 6> by_data_scope;                    //{ +0x0020    +0x0020    +0x0020    } | .ByDataScope
                                                                                          
        SDK_MAGIC_PROPERTIES( "_WNF_SCOPE_MAP.$", 0xb0, true, 0xca4ca31380812cd6 );                                
        SDK_DYNAMIC_SIZE( scope_map_t );                                                  
    };                                                                                    
};
#include "magic/scope_map_t.end.hpp"
