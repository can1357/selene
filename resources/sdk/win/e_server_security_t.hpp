#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum EServerSecurity]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class e_server_security_t : int32_t                    
    {                                                           
        call_done =                                      0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_local =                                  0x1,     // Windows 10 v1607
        //call_done =                                    0x2,     // Windows 10 v1607
        was_impersonating =                              0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_impersonating_fake_cross_container_identity = 0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //was_impersonating =                            0x4,     // Windows 10 v1607
    };                                                          
};
