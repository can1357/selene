#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "opaque_string_t.hpp"
#include "extension_registration_entry_properties_t.hpp"

#include "magic/c_extension_registration_t.start.hpp"
namespace win
{
    // [class CExtensionRegistration]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_extension_registration_t                                          
    {                                                                         
        using properties_t = const struct win::extension_registration_entry_properties_t;                                
                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                    
        _m00 const class win::opaque_string_t contract_id;                      //{ +0x0048    +0x0050    +0x0050    +0x0050    } | ._contractId
        _m01 uint64_t                         host_id;                          //{ +0x0058    +0x0068    +0x0068    +0x0068    } | ._hostId
        _m02 uint64_t                         user_context;                     //{ +0x0060    +0x0070    +0x0070    +0x0070    } | ._userContext
        _m03 properties_t                     properties;                       //{ +0x0068    +0x00a0    +0x00a0    +0x00a0    } | ._properties
        _m04 const class win::opaque_string_t activatable_class_id;             //{ +0x0090    +0x00c8    +0x00c8    +0x00c8    } | ._activatableClassId
        _m05 uint32_t                         dw_out_of_proc_activation_flags;  //{ +0x00b0    +0x00e8    +0x00e8    +0x00e8    } | ._dwOutOfProcActivationFlags
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                    
        _m06 const class win::opaque_string_t deploying_package_id;             //{ +0x0058    +0x0058    +0x0058    } | ._deployingPackageId
        _m07 const class win::opaque_string_t effective_package_id;             //{ +0x0060    +0x0060    +0x0060    } | ._effectivePackageId
        _m08 struct nt::guid_t                component_process_id;             //{ +0x0078    +0x0078    +0x0078    } | ._componentProcessId
        _m09 uint64_t                         rac_activation_token_id;          //{ +0x0088    +0x0088    +0x0088    } | ._racActivationTokenId
        _m10 uint64_t                         console_handles_id;               //{ +0x0090    +0x0090    +0x0090    } | ._consoleHandlesId
        _m11 uint64_t                         aam_activation_id;                //{ +0x00f0    +0x00f0    +0x00f0    } | ._aamActivationId
                                                                              
        // Windows 10 v1607                                                   
        //                                                                    
        _m12 const class win::opaque_string_t package_id;                       //{ +0x0050    } | ._packageId
                                                                              
        SDK_MAGIC_PROPERTIES( "CExtensionRegistration.$", 0x100, true, 0xbd72124e50281de6 );                                
        SDK_DYNAMIC_SIZE( c_extension_registration_t );                                
    };                                                                        
};
#include "magic/c_extension_registration_t.end.hpp"
