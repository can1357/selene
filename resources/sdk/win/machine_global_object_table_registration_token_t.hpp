#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct MachineGlobalObjectTableRegistrationToken__]
    // => Windows 11
    //
    struct machine_global_object_table_registration_token_t
    {                                                      
                                                           
        SDK_MAGIC_PROPERTIES( "MachineGlobalObjectTableRegistrationToken__.$", 0x0, false, 0x871707d083a7eb2e );
        SDK_FIXED_SIZE( machine_global_object_table_registration_token_t, 0x4 );
    };                                                     
};
SDK_VERIFY( struct win::machine_global_object_table_registration_token_t, 0x4 );
