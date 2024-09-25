#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _SVC_SK_CALL_PARAMETERS]
    // => Windows 11
    //
    struct svc_sk_call_parameters_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_SVC_SK_CALL_PARAMETERS.$", 0x0, false, 0xb2907d03370e6e86 );
        SDK_FIXED_SIZE( svc_sk_call_parameters_t, 0x0 );
    };                             
};
SDK_VERIFY( struct win::svc_sk_call_parameters_t, 0x0 );
