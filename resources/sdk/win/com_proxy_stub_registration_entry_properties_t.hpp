#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/com_proxy_stub_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ComProxyStubRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_proxy_stub_registration_entry_properties_t
    {                                                    
        // Windows 10 v1607                      
        //                                       
        _m00 class win::opaque_string_t dll_path;          //{ +0x0000    } | .DllPath
                                                         
        SDK_MAGIC_PROPERTIES( "ComProxyStubRegistrationEntryProperties.$", 0x68, true, 0x9d55f302261bf152 );         
        SDK_DYNAMIC_SIZE( com_proxy_stub_registration_entry_properties_t );         
    };                                                   
};
#include "magic/com_proxy_stub_registration_entry_properties_t.end.hpp"
