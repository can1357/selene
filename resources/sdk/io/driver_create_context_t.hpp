#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ecp_list_t;            }
namespace nt { struct ejob_t;                }
namespace nt { struct txn_parameter_block_t; }

#include "magic/driver_create_context_t.start.hpp"
namespace io
{
    // [struct _IO_DRIVER_CREATE_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct driver_create_context_t                                    
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 int16_t                           size;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct nt::ecp_list_t*            extra_create_parameter;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ExtraCreateParameter
        _m02 void*                             device_object_hint;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceObjectHint
        _m03 struct nt::txn_parameter_block_t* txn_parameters;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .TxnParameters
        _m04 struct nt::ejob_t*                silo_context;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SiloContext
                                                                      
        SDK_NONVOL_PROPERTIES( "_IO_DRIVER_CREATE_CONTEXT.$", 0x28, true, 0xe54069fff9cf5dba );                       
        SDK_FIXED_SIZE( driver_create_context_t, 0x28 );                       
    };                                                                
};
#include "magic/driver_create_context_t.end.hpp"
SDK_VERIFY( struct io::driver_create_context_t, 0x28 );
