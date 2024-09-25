#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _EPROCESS_QUOTA_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eprocess_quota_block_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_EPROCESS_QUOTA_BLOCK.$", 0x0, true, 0x8aa1f02189960817 );
        SDK_FIXED_SIZE( eprocess_quota_block_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::eprocess_quota_block_t, 0x0 );
