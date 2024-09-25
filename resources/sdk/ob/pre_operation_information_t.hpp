#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct object_type_t; }

#include "magic/pre_operation_information_t.start.hpp"
namespace ob
{
    union pre_operation_parameters_t;

    // [struct _OB_PRE_OPERATION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pre_operation_information_t                           
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                       
        _m00 uint32_t                              operation;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Operation
        _m01 uint32_t                              flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint1_t                               kernel_handle;  //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .KernelHandle
        _m03 void*                                 object;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Object
        _m04 struct nt::object_type_t*             object_type;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectType
        _m05 void*                                 call_context;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CallContext
        _m06 union ob::pre_operation_parameters_t* parameters;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Parameters
                                                                 
        SDK_NONVOL_PROPERTIES( "_OB_PRE_OPERATION_INFORMATION.$", 0x28, true, 0xbf7c5a339c4b6b38 );              
        SDK_FIXED_SIZE( pre_operation_information_t, 0x28 );              
    };                                                           
};
#include "magic/pre_operation_information_t.end.hpp"
SDK_VERIFY( struct ob::pre_operation_information_t, 0x28 );
