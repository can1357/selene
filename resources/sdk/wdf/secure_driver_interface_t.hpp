#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/interface_t.hpp"

namespace nt { struct eprocess_t; }
namespace nt { struct kprocess_t; }

#include "magic/secure_driver_interface_t.start.hpp"
namespace wdf
{
    // [struct _SECURE_DRIVER_INTERFACE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct secure_driver_interface_t                    
    {                                                   
        using process_reference_t =   sdk::variant<sdk::function<struct nt::kprocess_t*(void*)>*, sdk::function<struct nt::eprocess_t*(void*)>*>;                    
        using process_dereference_t = sdk::variant<sdk::function<void(void*, struct nt::kprocess_t*)>*, sdk::function<void(void*, struct nt::eprocess_t*)>*>;                    
                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 struct nt::interface_t interface_header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceHeader
        _m01 process_reference_t    process_reference;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProcessReference
        _m02 process_dereference_t  process_dereference;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProcessDereference
                                                        
        SDK_NONVOL_PROPERTIES( "_SECURE_DRIVER_INTERFACE.$", 0x38, true, 0xff8e5a2dc568f07 );                    
        SDK_FIXED_SIZE( secure_driver_interface_t, 0x38 );                    
    };                                                  
};
#include "magic/secure_driver_interface_t.end.hpp"
SDK_VERIFY( struct wdf::secure_driver_interface_t, 0x38 );
