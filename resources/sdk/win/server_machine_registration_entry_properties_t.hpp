#pragma once
#include <sdkgen/support_library.hpp>
#include "server_type_enum_t.hpp"
#include "entry_property_store_t.hpp"

#include "magic/server_machine_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ServerMachineRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct server_machine_registration_entry_properties_t         
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                        
        _m00 enum win::server_type_enum_t       server_type;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ServerType
        _m01 struct win::entry_property_store_t custom_attributes;  //{ +0x0098    +0x00a0    +0x00a0    +0x00a0    } | .CustomAttributes
                                                                  
        SDK_MAGIC_PROPERTIES( "ServerMachineRegistrationEntryProperties.$", 0xa8, true, 0x3ffe2f4fe4940b81 );                  
        SDK_DYNAMIC_SIZE( server_machine_registration_entry_properties_t );                  
    };                                                            
};
#include "magic/server_machine_registration_entry_properties_t.end.hpp"
