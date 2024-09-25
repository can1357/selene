#pragma once
#include <sdkgen/support_library.hpp>
#include "fx_perf_state_type_t.hpp"
#include "fx_perf_state_unit_t.hpp"

#include "magic/fx_component_perf_set_t.start.hpp"
namespace po
{
    struct fx_perf_state_t;

    // [struct _PO_FX_COMPONENT_PERF_SET]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fx_component_perf_set_t                           
    {                                                        
        struct u0_discrete_t                                 
        {                                                    
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
            //                                               
            _m04 uint32_t                    count;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
            _m05 struct po::fx_perf_state_t* states;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .States
                                                             
            SDK_NONVOL_PROPERTIES( "_PO_FX_COMPONENT_PERF_SET.Discrete.$", 0x10, true, 0x7bb0cca8c3bef71e );                
            SDK_FIXED_SIZE( u0_discrete_t, 0x10 );                
        };                                                   
                                                             
        struct u5_range_t                                    
        {                                                    
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                               
            _m07 uint64_t minimum;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Minimum
            _m08 uint64_t maximum;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Maximum
                                                             
            SDK_NONVOL_PROPERTIES( "_PO_FX_COMPONENT_PERF_SET.Range.$", 0x10, true, 0x1347f6f879cff3fb );                 
            SDK_FIXED_SIZE( u5_range_t, 0x10 );                 
        };                                                   
                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                   
        _m00 nt::unicode_view                       name;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 uint64_t                               flags;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m02 enum po::fx_perf_state_unit_t          unit;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Unit
        _m03 enum po::fx_perf_state_type_t          type;      //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .Type
        _m06 u0_discrete_t                          discrete;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Discrete
        _m09 u5_range_t                             range;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Range
                                                             
        SDK_NONVOL_PROPERTIES( "_PO_FX_COMPONENT_PERF_SET.$", 0x30, true, 0xf9496868d69dc5d8 );         
        SDK_FIXED_SIZE( fx_component_perf_set_t, 0x30 );         
    };                                                       
};
#include "magic/fx_component_perf_set_t.end.hpp"
SDK_VERIFY( struct po::fx_component_perf_set_t::u0_discrete_t, 0x10 );
SDK_VERIFY( struct po::fx_component_perf_set_t::u5_range_t, 0x10 );
SDK_VERIFY( struct po::fx_component_perf_set_t, 0x30 );
