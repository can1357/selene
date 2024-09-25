#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_verifier_information_ex_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VERIFIER_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_verifier_information_ex_t              
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                               
        _m00 uint32_t         verify_mode;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VerifyMode
        _m01 uint32_t         option_changes;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OptionChanges
        _m02 nt::unicode_view previous_bucket_name;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PreviousBucketName
        _m03 uint32_t         irp_cancel_timeout_msec;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IrpCancelTimeoutMsec
        _m04 uint32_t         verifier_extension_enabled;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .VerifierExtensionEnabled
                                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VERIFIER_INFORMATION_EX.$", 0x28, true, 0xcac7796081797156 );                           
        SDK_FIXED_SIZE( system_verifier_information_ex_t, 0x28 );                           
    };                                                   
};
#include "magic/system_verifier_information_ex_t.end.hpp"
SDK_VERIFY( struct win::system_verifier_information_ex_t, 0x28 );
