#pragma once
#include <sdkgen/support_library.hpp>
#include "sam_operation_objchg_output_t.hpp"

#include "magic/sam_generic_operation_output_t.start.hpp"
namespace nt
{
    // [union _SAM_GENERIC_OPERATION_OUTPUT]
    // => WDK 10 (NV)
    //
    union sam_generic_operation_output_t                             
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 struct nt::sam_operation_objchg_output_t obj_change_out;  //{ +0x0000    } | .ObjChangeOut
                                                                     
        SDK_NONVOL_PROPERTIES( "_SAM_GENERIC_OPERATION_OUTPUT.$", 0x0, false, 0x750c836ec8c6de86 );               
        SDK_FIXED_SIZE( sam_generic_operation_output_t, 0x4 );               
    };                                                               
};
#include "magic/sam_generic_operation_output_t.end.hpp"
SDK_VERIFY( union nt::sam_generic_operation_output_t, 0x4 );
