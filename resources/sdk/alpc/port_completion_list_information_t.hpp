#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_completion_list_information_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_PORT_COMPLETION_LIST_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_completion_list_information_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 void*    buffer;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint32_t size;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint32_t concurrency_count;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ConcurrencyCount
        _m03 uint32_t attribute_flags;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AttributeFlags
                                             
        SDK_MAGIC_PROPERTIES( "_ALPC_PORT_COMPLETION_LIST_INFORMATION.$", 0x18, true, 0xd31fb5c832bdaf46 );                  
        SDK_FIXED_SIZE( port_completion_list_information_t, 0x18 );                  
    };                                       
};
#include "magic/port_completion_list_information_t.end.hpp"
SDK_VERIFY( struct alpc::port_completion_list_information_t, 0x18 );
