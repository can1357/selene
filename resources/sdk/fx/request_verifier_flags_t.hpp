#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestVerifierFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_verifier_flags_t : int32_t       
    {                                                   
        driver_owned =                         0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tag_request =                          0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forwarded =                            0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_dispatch =                      0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_cancelable =                    0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_inprocess_context =             0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancelled =                            0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        formatted =                            0x80,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sent_to_target =                       0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_in_evtiostop_context =          0x200,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_request_associated_with_irp = 0x400,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
