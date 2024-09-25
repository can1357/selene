#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpc_buffer_t.start.hpp"
namespace stor::port
{
    // [struct _DPC_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dpc_buffer_t               
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 int16_t type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t number;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Number
        _m02 uint8_t importance;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Importance
        _m03 void*   f;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .F
        _m04 void*   b;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .B
        _m05 void*   deferred_routine;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeferredRoutine
        _m06 void*   deferred_context;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeferredContext
        _m07 void*   system_argument1;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SystemArgument1
        _m08 void*   system_argument2;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SystemArgument2
        _m09 void*   dpc_data;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DpcData
                                      
        SDK_MAGIC_PROPERTIES( "_DPC_BUFFER.$", 0x40, true, 0x3ab80c120b27f5f5 );                 
        SDK_FIXED_SIZE( dpc_buffer_t, 0x40 );                 
    };                                
};
#include "magic/dpc_buffer_t.end.hpp"
SDK_VERIFY( struct stor::port::dpc_buffer_t, 0x40 );
