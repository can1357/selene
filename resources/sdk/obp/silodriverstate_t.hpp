#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/fast_ref_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "system_dos_device_state_t.hpp"
#include "../nt/object_namespace_lookuptable_t.hpp"

namespace nt { struct device_map_t; }

#include "magic/silodriverstate_t.start.hpp"
namespace obp
{
    // [struct _OBP_SILODRIVERSTATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct silodriverstate_t                                                          
    {                                                                                 
        using system_device_map_t = sdk::variant<struct nt::device_map_t*, struct ex::fast_ref_t>;                               
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                            
        _m00 system_device_map_t                       system_device_map;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemDeviceMap
        _m01 struct obp::system_dos_device_state_t     system_dos_device_state;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SystemDosDeviceState
        _m02 struct ex::push_lock_t                    device_map_lock;                 //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DeviceMapLock
        _m03 struct nt::object_namespace_lookuptable_t private_namespace_lookup_table;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PrivateNamespaceLookupTable
                                                                                      
        SDK_MAGIC_PROPERTIES( "_OBP_SILODRIVERSTATE.$", 0x2e0, true, 0x7a7d53727cac5625 );                               
        SDK_FIXED_SIZE( silodriverstate_t, 0x2e0 );                                   
    };                                                                                
};
#include "magic/silodriverstate_t.end.hpp"
SDK_VERIFY( struct obp::silodriverstate_t, 0x2e0 );
