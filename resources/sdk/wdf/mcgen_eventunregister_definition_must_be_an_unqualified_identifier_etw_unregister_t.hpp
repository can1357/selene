#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct MCGEN_EVENTUNREGISTER_definition_must_be_an_unqualified_identifier_EtwUnregister]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mcgen_eventunregister_definition_must_be_an_unqualified_identifier_etw_unregister_t
    {                                                                                         
                                                                                              
        SDK_MAGIC_PROPERTIES( "MCGEN_EVENTUNREGISTER_definition_must_be_an_unqualified_identifier_EtwUnregister.$", 0x0, true, 0x87804c0882df91e0 );
        SDK_FIXED_SIZE( mcgen_eventunregister_definition_must_be_an_unqualified_identifier_etw_unregister_t, 0x0 );
    };                                                                                        
};
SDK_VERIFY( struct wdf::mcgen_eventunregister_definition_must_be_an_unqualified_identifier_etw_unregister_t, 0x0 );
