#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_pofx_perf_state_type_t.hpp"
#include "stor_pofx_perf_state_unit_t.hpp"

#include "magic/stor_pofx_component_perf_set_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_POFX_COMPONENT_PERF_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_pofx_component_perf_set_t                              
    {                                                                  
        union u0_p_states_t                                            
        {                                                              
            struct u4_discrete_t                                       
            {                                                          
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
                //                                                     
                _m05 uint32_t count;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
                _m06 uint32_t offset;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Offset
                                                                       
                SDK_MAGIC_PROPERTIES( "_STOR_POFX_COMPONENT_PERF_SET.PStates.Discrete.$", 0x8, true, 0x40c5dbe727d695a );                             
                SDK_FIXED_SIZE( u4_discrete_t, 0x8 );                             
            };                                                         
                                                                       
            struct u8_range_t                                          
            {                                                          
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
                //                                                     
                _m08 uint64_t minimum;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Minimum
                _m09 uint64_t maximum;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Maximum
                                                                       
                SDK_MAGIC_PROPERTIES( "_STOR_POFX_COMPONENT_PERF_SET.PStates.Range.$", 0x10, true, 0x3728f0531fe6e4dd );                              
                SDK_FIXED_SIZE( u8_range_t, 0x10 );                              
            };                                                         
                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                                         
            _m07 u4_discrete_t        discrete;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Discrete
            _m10 u8_range_t           range;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Range
                                                                       
            SDK_MAGIC_PROPERTIES( "_STOR_POFX_COMPONENT_PERF_SET.PStates.$", 0x10, true, 0x623ec3292e805570 );                      
            SDK_FIXED_SIZE( u0_p_states_t, 0x10 );                      
        };                                                             
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                             
        _m00 uint32_t                                     version;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                     size;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint64_t                                     flags;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 enum stor::port::stor_pofx_perf_state_unit_t p_state_unit;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PStateUnit
        _m04 enum stor::port::stor_pofx_perf_state_type_t p_state_type;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PStateType
        _m11 u0_p_states_t                                p_states;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PStates
                                                                       
        SDK_MAGIC_PROPERTIES( "_STOR_POFX_COMPONENT_PERF_SET.$", 0x28, true, 0x28205b2d0f7f513b );             
        SDK_FIXED_SIZE( stor_pofx_component_perf_set_t, 0x28 );             
    };                                                                 
};
#include "magic/stor_pofx_component_perf_set_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_pofx_component_perf_set_t::u0_p_states_t::u4_discrete_t, 0x8 );
SDK_VERIFY( struct stor::port::stor_pofx_component_perf_set_t::u0_p_states_t::u8_range_t, 0x10 );
SDK_VERIFY( union stor::port::stor_pofx_component_perf_set_t::u0_p_states_t, 0x10 );
SDK_VERIFY( struct stor::port::stor_pofx_component_perf_set_t, 0x28 );
