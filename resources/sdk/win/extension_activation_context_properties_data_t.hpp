#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "user_context_properties_data_t.hpp"

namespace tag { struct blob_t; }

#include "magic/extension_activation_context_properties_data_t.start.hpp"
namespace win
{
    // [struct ExtensionActivationContextPropertiesData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extension_activation_context_properties_data_t                       
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                      
        _m00 uint64_t                                   host_id;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hostId
        _m01 struct win::user_context_properties_data_t user_context_properties;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .userContextProperties
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                      
        _m02 struct nt::guid_t                          component_process_id;     //{ +0x0010    +0x0010    +0x0010    } | .componentProcessId
        _m03 uint64_t                                   rac_activation_token_id;  //{ +0x0020    +0x0020    +0x0020    } | .racActivationTokenId
        _m04 struct tag::blob_t*                        lpac_attributes;          //{ +0x0028    +0x0028    +0x0028    } | .lpacAttributes
        _m05 uint64_t                                   console_handles_id;       //{ +0x0030    +0x0030    +0x0030    } | .consoleHandlesId
        _m06 uint64_t                                   aam_activation_id;        //{ +0x0038    +0x0038    +0x0038    } | .aamActivationId
        _m07 int32_t                                    run_full_trust;           //{ +0x0040    +0x0040    +0x0040    } | .runFullTrust
                                                                                
        SDK_MAGIC_PROPERTIES( "ExtensionActivationContextPropertiesData.$", 0x48, true, 0x1c96fdd256ae9a12 );                        
        SDK_DYNAMIC_SIZE( extension_activation_context_properties_data_t );                        
    };                                                                          
};
#include "magic/extension_activation_context_properties_data_t.end.hpp"
