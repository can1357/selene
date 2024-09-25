#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct PNDIS_PER_PROCESSOR_SLOT__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pndis_per_processor_slot_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "PNDIS_PER_PROCESSOR_SLOT__.$", 0x4, true, 0xd5a70639ea7fbe2c );
        SDK_FIXED_SIZE( pndis_per_processor_slot_t, 0x4 );
    };                               
};
SDK_VERIFY( struct ndis::pndis_per_processor_slot_t, 0x4 );
