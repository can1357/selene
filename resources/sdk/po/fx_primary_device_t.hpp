#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [struct _PO_FX_PRIMARY_DEVICE]
    // => WDK 10
    //
    struct fx_primary_device_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "_PO_FX_PRIMARY_DEVICE.$", 0x0, false, 0x7cb5cf6a2d48ba63 );
        SDK_FIXED_SIZE( fx_primary_device_t, 0x0 );
    };                        
};
SDK_VERIFY( struct po::fx_primary_device_t, 0x0 );
