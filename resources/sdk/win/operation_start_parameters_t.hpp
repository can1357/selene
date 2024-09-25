#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/operation_start_parameters_t.start.hpp"
namespace win
{
    // [struct _OPERATION_START_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct operation_start_parameters_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t version;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t operation_id;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OperationId
        _m02 uint32_t flags;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                       
        SDK_MAGIC_PROPERTIES( "_OPERATION_START_PARAMETERS.$", 0xc, true, 0x10aeab717fcf9b02 );             
        SDK_FIXED_SIZE( operation_start_parameters_t, 0xc );             
    };                                 
};
#include "magic/operation_start_parameters_t.end.hpp"
SDK_VERIFY( struct win::operation_start_parameters_t, 0xc );
