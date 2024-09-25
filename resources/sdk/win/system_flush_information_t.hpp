#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_flush_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FLUSH_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_flush_information_t            
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t supported_flush_methods;     //{ +0x0000    +0x0000    +0x0000    } | .SupportedFlushMethods
        _m01 uint32_t processor_cache_flush_size;  //{ +0x0004    +0x0004    +0x0004    } | .ProcessorCacheFlushSize
        _m02 uint64_t system_flush_capabilities;   //{ +0x0008    +0x0008    +0x0008    } | .SystemFlushCapabilities
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FLUSH_INFORMATION.$", 0x20, true, 0x37e79d0735c73219 );                           
        SDK_FIXED_SIZE( system_flush_information_t, 0x20 );                           
    };                                           
};
#include "magic/system_flush_information_t.end.hpp"
SDK_VERIFY( struct win::system_flush_information_t, 0x20 );
