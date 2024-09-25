#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _PSM_APPSTATE_REGISTRATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct psm_appstate_registration_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "_PSM_APPSTATE_REGISTRATION.$", 0x0, true, 0x7250dd83cd9dcaef );
        SDK_FIXED_SIZE( psm_appstate_registration_t, 0x0 );
    };                                
};
SDK_VERIFY( struct win::psm_appstate_registration_t, 0x0 );
