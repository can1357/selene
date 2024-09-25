#pragma once
#include <sdkgen/support_library.hpp>

namespace verifier
{
    // [struct _VERIFIER_SHARED_EXPORT_THUNK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shared_export_thunk_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_VERIFIER_SHARED_EXPORT_THUNK.$", 0x0, true, 0x42546ea1610bdc87 );
        SDK_FIXED_SIZE( shared_export_thunk_t, 0x0 );
    };                          
};
SDK_VERIFY( struct verifier::shared_export_thunk_t, 0x0 );
