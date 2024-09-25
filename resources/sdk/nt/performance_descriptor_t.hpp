#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/performance_descriptor_t.start.hpp"
namespace nt
{
    // [struct _PERFORMANCE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct performance_descriptor_t                        
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint1_t                random_access;           //{ +0x0000@0  } | .RandomAccess
        _m01 uint1_t                exact;                   //{ +0x0000@1  } | .Exact
        _m02 uint1_t                restore_defaults;        //{ +0x0000@2  } | .RestoreDefaults
        _m03 uint2_t                write_rotation_control;  //{ +0x0000@3  } | .WriteRotationControl
        _m04 sdk::array<uint8_t, 4> start_lba;               //{ +0x0004    } | .StartLba
        _m05 sdk::array<uint8_t, 4> end_lba;                 //{ +0x0008    } | .EndLba
        _m06 sdk::array<uint8_t, 4> read_size;               //{ +0x000c    } | .ReadSize
        _m07 sdk::array<uint8_t, 4> read_time;               //{ +0x0010    } | .ReadTime
        _m08 sdk::array<uint8_t, 4> write_size;              //{ +0x0014    } | .WriteSize
        _m09 sdk::array<uint8_t, 4> write_time;              //{ +0x0018    } | .WriteTime
                                                           
        SDK_NONVOL_PROPERTIES( "_PERFORMANCE_DESCRIPTOR.$", 0x0, false, 0xfbf216e51362a862 );                       
        SDK_FIXED_SIZE( performance_descriptor_t, 0x1c );                       
    };                                                     
};
#include "magic/performance_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::performance_descriptor_t, 0x1c );
