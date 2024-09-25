#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"
#include "expandable_string_t.hpp"

#include "magic/proxy_stub_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ProxyStubRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proxy_stub_registration_entry_properties_t    
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                               
        _m00 class win::opaque_string_t      description;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Description
        _m01 struct win::expandable_string_t dll_path;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DllPath
                                                         
        SDK_MAGIC_PROPERTIES( "ProxyStubRegistrationEntryProperties.$", 0x20, true, 0xab28b319bc8bf53e );            
        SDK_DYNAMIC_SIZE( proxy_stub_registration_entry_properties_t );            
    };                                                   
};
#include "magic/proxy_stub_registration_entry_properties_t.end.hpp"
