#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct MCGEN_EVENTSETINFORMATION_definition_must_be_an_unqualified_identifier_EtwSetInformation]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mcgen_eventsetinformation_definition_must_be_an_unqualified_identifier_etw_set_information_t
    {                                                                                                  
                                                                                                       
        SDK_MAGIC_PROPERTIES( "MCGEN_EVENTSETINFORMATION_definition_must_be_an_unqualified_identifier_EtwSetInformation.$", 0x0, true, 0xe4eaa99b4963d80c );
        SDK_FIXED_SIZE( mcgen_eventsetinformation_definition_must_be_an_unqualified_identifier_etw_set_information_t, 0x0 );
    };                                                                                                 
};
SDK_VERIFY( struct wdf::mcgen_eventsetinformation_definition_must_be_an_unqualified_identifier_etw_set_information_t, 0x0 );
