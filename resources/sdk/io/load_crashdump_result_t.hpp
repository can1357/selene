#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [struct _IO_LOAD_CRASHDUMP_RESULT]
    // => WDK 10
    //
    struct load_crashdump_result_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "_IO_LOAD_CRASHDUMP_RESULT.$", 0x0, false, 0x267efb9b259bd884 );
        SDK_FIXED_SIZE( load_crashdump_result_t, 0x0 );
    };                            
};
SDK_VERIFY( struct io::load_crashdump_result_t, 0x0 );
