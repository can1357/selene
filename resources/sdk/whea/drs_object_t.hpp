#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [struct _WHEA_DRS_OBJECT]
    // => WDK 10
    //
    struct drs_object_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "_WHEA_DRS_OBJECT.$", 0x0, false, 0xcd216a9dd8d582b1 );
        SDK_FIXED_SIZE( drs_object_t, 0x0 );
    };                 
};
SDK_VERIFY( struct whea::drs_object_t, 0x0 );
