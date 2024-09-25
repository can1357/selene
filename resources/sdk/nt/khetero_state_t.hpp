#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/khetero_state_t.start.hpp"
namespace nt
{
    // [union _KHETERO_STATE]
    // => Windows 11
    //
    union khetero_state_t           
    {                               
        // Windows 11               
        //                          
        _m00 uint3_t qos;             //{ +0x0000@0  } | .Qos
        _m01 uint3_t workload_class;  //{ +0x0000@3  } | .WorkloadClass
        _m02 uint1_t running_type;    //{ +0x0000@6  } | .RunningType
        _m03 uint8_t all_fields;      //{ +0x0000    } | .AllFields
                                    
        SDK_MAGIC_PROPERTIES( "_KHETERO_STATE.$", 0x0, false, 0x30255192fd53d252 );               
        SDK_FIXED_SIZE( khetero_state_t, 0x1 );               
    };                              
};
#include "magic/khetero_state_t.end.hpp"
SDK_VERIFY( union nt::khetero_state_t, 0x1 );
