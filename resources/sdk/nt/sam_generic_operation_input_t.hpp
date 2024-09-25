#pragma once
#include <sdkgen/support_library.hpp>
#include "sam_operation_objchg_input_t.hpp"

#include "magic/sam_generic_operation_input_t.start.hpp"
namespace nt
{
    // [union _SAM_GENERIC_OPERATION_INPUT]
    // => WDK 10 (NV)
    //
    union sam_generic_operation_input_t                            
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 struct nt::sam_operation_objchg_input_t obj_change_in;  //{ +0x0000    } | .ObjChangeIn
                                                                   
        SDK_NONVOL_PROPERTIES( "_SAM_GENERIC_OPERATION_INPUT.$", 0x0, false, 0xb286fe1df8564a9b );              
        SDK_FIXED_SIZE( sam_generic_operation_input_t, 0x18 );              
    };                                                             
};
#include "magic/sam_generic_operation_input_t.end.hpp"
SDK_VERIFY( union nt::sam_generic_operation_input_t, 0x18 );
