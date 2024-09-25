#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_header_process_info_t.start.hpp"
namespace nt
{
    struct eprocess_t;

    // [struct _OBJECT_HEADER_PROCESS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_process_info_t               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 struct nt::eprocess_t* exclusive_process;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExclusiveProcess
                                                      
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER_PROCESS_INFO.$", 0x10, true, 0x55073de971e51318 );                  
        SDK_FIXED_SIZE( object_header_process_info_t, 0x10 );                  
    };                                                
};
#include "magic/object_header_process_info_t.end.hpp"
SDK_VERIFY( struct nt::object_header_process_info_t, 0x10 );
