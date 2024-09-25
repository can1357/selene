#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/persistent_reserve_command_t.start.hpp"
namespace nt
{
    // [struct _PERSISTENT_RESERVE_COMMAND]
    // => WDK 10 (NV)
    //
    struct persistent_reserve_command_t                     
    {                                                       
        struct u0_pr_in_t                                   
        {                                                   
            // WDK 10                                       
            //                                              
            _m02 uint5_t  service_action;                     //{ +0x0000@0  } | .ServiceAction
            _m03 uint16_t allocation_length;                  //{ +0x0002    } | .AllocationLength
                                                            
            SDK_NONVOL_PROPERTIES( "_PERSISTENT_RESERVE_COMMAND.PR_IN.$", 0x0, false, 0xaec25626b78a4c7a );                          
            SDK_FIXED_SIZE( u0_pr_in_t, 0x4 );                          
        };                                                  
                                                            
        struct u1_pr_out_t                                  
        {                                                   
            // WDK 10                                       
            //                                              
            _m05 uint5_t             service_action;          //{ +0x0000@0  } | .ServiceAction
            _m06 uint4_t             type;                    //{ +0x0001@0  } | .Type
            _m07 uint4_t             scope;                   //{ +0x0001@4  } | .Scope
            _m08 sdk::array<uint8_t> parameter_list;          //{ +0x0002    } | .ParameterList
                                                            
            SDK_NONVOL_PROPERTIES( "_PERSISTENT_RESERVE_COMMAND.PR_OUT.$", 0x0, false, 0x2430cd0310c7ab67 );                       
            SDK_FIXED_SIZE( u1_pr_out_t, 0x2 );                       
        };                                                  
                                                            
        // WDK 10                                           
        //                                                  
        _m00 uint32_t                               version;  //{ +0x0000    } | .Version
        _m01 uint32_t                               size;     //{ +0x0004    } | .Size
        _m04 u0_pr_in_t                             pr_in;    //{ +0x0008    } | .PR_IN
        _m09 u1_pr_out_t                            pr_out;   //{ +0x0008    } | .PR_OUT
                                                            
        SDK_NONVOL_PROPERTIES( "_PERSISTENT_RESERVE_COMMAND.$", 0x0, false, 0xd1d299fe516f4be7 );        
        SDK_FIXED_SIZE( persistent_reserve_command_t, 0xc );        
    };                                                      
};
#include "magic/persistent_reserve_command_t.end.hpp"
SDK_VERIFY( struct nt::persistent_reserve_command_t::u0_pr_in_t, 0x4 );
SDK_VERIFY( struct nt::persistent_reserve_command_t::u1_pr_out_t, 0x2 );
SDK_VERIFY( struct nt::persistent_reserve_command_t, 0xc );
