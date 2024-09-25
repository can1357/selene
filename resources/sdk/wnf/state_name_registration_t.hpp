#pragma once
#include <sdkgen/support_library.hpp>

namespace sec { struct descriptor_t; }

#include "magic/state_name_registration_t.start.hpp"
namespace wnf
{
    struct type_id_t;

    // [struct _WNF_STATE_NAME_REGISTRATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_name_registration_t                          
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 uint32_t                     max_state_size;       //{ +0x0000    +0x0000    +0x0000    } | .MaxStateSize
        _m01 const struct wnf::type_id_t* type_id;              //{ +0x0008    +0x0008    +0x0008    } | .TypeId
        _m02 struct sec::descriptor_t*    security_descriptor;  //{ +0x0010    +0x0010    +0x0010    } | .SecurityDescriptor
                                                              
        SDK_MAGIC_PROPERTIES( "_WNF_STATE_NAME_REGISTRATION.$", 0x18, true, 0x2aa0b7056ae49ff7 );                    
        SDK_FIXED_SIZE( state_name_registration_t, 0x18 );                    
    };                                                        
};
#include "magic/state_name_registration_t.end.hpp"
SDK_VERIFY( struct wnf::state_name_registration_t, 0x18 );
