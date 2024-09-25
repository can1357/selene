#pragma once
#include <sdkgen/support_library.hpp>
#include "process_memory_exhaustion_type_t.hpp"

#include "magic/process_memory_exhaustion_info_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MEMORY_EXHAUSTION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_memory_exhaustion_info_t                     
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                      
        _m00 uint16_t                                   version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 enum win::process_memory_exhaustion_type_t type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 uint64_t                                   value;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                                                
        SDK_MAGIC_PROPERTIES( "_PROCESS_MEMORY_EXHAUSTION_INFO.$", 0x10, true, 0xef3f4b64ba03646f );        
        SDK_FIXED_SIZE( process_memory_exhaustion_info_t, 0x10 );        
    };                                                          
};
#include "magic/process_memory_exhaustion_info_t.end.hpp"
SDK_VERIFY( struct win::process_memory_exhaustion_info_t, 0x10 );
