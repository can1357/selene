#pragma once
#include <sdkgen/support_library.hpp>
#include "../ob/duplicate_object_state_t.hpp"

#include "magic/kalpc_handle_data_t.start.hpp"
namespace nt
{
    // [struct _KALPC_HANDLE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_handle_data_t                                     
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 uint32_t                            object_type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m01 uint32_t                            count;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 struct ob::duplicate_object_state_t duplicate_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DuplicateContext
                                                                   
        SDK_MAGIC_PROPERTIES( "_KALPC_HANDLE_DATA.$", 0x30, true, 0xafa50b51d6a975a2 );                  
        SDK_FIXED_SIZE( kalpc_handle_data_t, 0x30 );                  
    };                                                             
};
#include "magic/kalpc_handle_data_t.end.hpp"
SDK_VERIFY( struct nt::kalpc_handle_data_t, 0x30 );
