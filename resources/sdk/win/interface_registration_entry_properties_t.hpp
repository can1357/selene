#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/interface_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct InterfaceRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interface_registration_entry_properties_t     
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 class win::opaque_string_t interface_name;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceName
        _m01 class win::opaque_string_t proxy_stub_clsid;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProxyStubCLSID
                                                         
        SDK_MAGIC_PROPERTIES( "InterfaceRegistrationEntryProperties.$", 0x10, true, 0x82e53b21cb780b36 );                 
        SDK_FIXED_SIZE( interface_registration_entry_properties_t, 0x10 );                 
    };                                                   
};
#include "magic/interface_registration_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::interface_registration_entry_properties_t, 0x10 );
