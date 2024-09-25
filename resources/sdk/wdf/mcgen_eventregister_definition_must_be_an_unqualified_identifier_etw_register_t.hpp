#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct MCGEN_EVENTREGISTER_definition_must_be_an_unqualified_identifier_EtwRegister]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mcgen_eventregister_definition_must_be_an_unqualified_identifier_etw_register_t
    {                                                                                     
                                                                                          
        SDK_MAGIC_PROPERTIES( "MCGEN_EVENTREGISTER_definition_must_be_an_unqualified_identifier_EtwRegister.$", 0x0, true, 0x9612938da9931f28 );
        SDK_FIXED_SIZE( mcgen_eventregister_definition_must_be_an_unqualified_identifier_etw_register_t, 0x0 );
    };                                                                                    
};
SDK_VERIFY( struct wdf::mcgen_eventregister_definition_must_be_an_unqualified_identifier_etw_register_t, 0x0 );
