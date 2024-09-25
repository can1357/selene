#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [struct _IO_LOAD_CRASHDUMP_PARAMS]
    // => WDK 10
    //
    struct load_crashdump_params_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "_IO_LOAD_CRASHDUMP_PARAMS.$", 0x0, false, 0xd54552d93fafe290 );
        SDK_FIXED_SIZE( load_crashdump_params_t, 0x0 );
    };                            
};
SDK_VERIFY( struct io::load_crashdump_params_t, 0x0 );
