#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/com_server_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ComServerRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_server_registration_entry_properties_t            
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                       
        _m00 class win::opaque_string_t application_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ApplicationId
                                                                 
        // Windows 10 v1607                                      
        //                                                       
        _m01 class win::opaque_string_t application_display_name;  //{ +0x0008    } | .ApplicationDisplayName
                                                                 
        SDK_MAGIC_PROPERTIES( "ComServerRegistrationEntryProperties.$", 0xa8, true, 0xa3726894bbff320f );                         
        SDK_DYNAMIC_SIZE( com_server_registration_entry_properties_t );                         
    };                                                           
};
#include "magic/com_server_registration_entry_properties_t.end.hpp"
