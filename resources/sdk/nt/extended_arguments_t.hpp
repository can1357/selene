#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extended_arguments_t.start.hpp"
namespace nt
{
    // [union _EXTENDED_ARGUMENTS]
    // => WDK 10 (NV)
    //
    union extended_arguments_t                               
    {                                                        
        struct u0_modify_t                                   
        {                                                    
            // WDK 10                                        
            //                                               
            _m00 sdk::array<uint8_t, 4> modifier;              //{ +0x0000    } | .Modifier
                                                             
            SDK_NONVOL_PROPERTIES( "_EXTENDED_ARGUMENTS.Modify.$", 0x0, false, 0x2762b483ad4c2978 );                     
            SDK_FIXED_SIZE( u0_modify_t, 0x4 );                     
        };                                                   
                                                             
        struct u1_synchronous_t                              
        {                                                    
            // WDK 10                                        
            //                                               
            _m02 uint8_t transfer_period;                      //{ +0x0000    } | .TransferPeriod
            _m03 uint8_t req_ack_offset;                       //{ +0x0001    } | .ReqAckOffset
                                                             
            SDK_NONVOL_PROPERTIES( "_EXTENDED_ARGUMENTS.Synchronous.$", 0x0, false, 0x44f96d6031e1d793 );                            
            SDK_FIXED_SIZE( u1_synchronous_t, 0x2 );                            
        };                                                   
                                                             
        struct u2_wide_t                                     
        {                                                    
            // WDK 10                                        
            //                                               
            _m05 uint8_t width;                                //{ +0x0000    } | .Width
                                                             
            SDK_NONVOL_PROPERTIES( "_EXTENDED_ARGUMENTS.Wide.$", 0x0, false, 0xda028dfe7c8d2dc0 );                  
            SDK_FIXED_SIZE( u2_wide_t, 0x1 );                  
        };                                                   
                                                             
        // WDK 10                                            
        //                                                   
        _m01 u0_modify_t                         modify;       //{ +0x0000    } | .Modify
        _m04 u1_synchronous_t                    synchronous;  //{ +0x0000    } | .Synchronous
        _m06 u2_wide_t                           wide;         //{ +0x0000    } | .Wide
                                                             
        SDK_NONVOL_PROPERTIES( "_EXTENDED_ARGUMENTS.$", 0x0, false, 0xe43693cd27a9ec53 );            
        SDK_FIXED_SIZE( extended_arguments_t, 0x4 );            
    };                                                       
};
#include "magic/extended_arguments_t.end.hpp"
SDK_VERIFY( struct nt::extended_arguments_t::u0_modify_t, 0x4 );
SDK_VERIFY( struct nt::extended_arguments_t::u1_synchronous_t, 0x2 );
SDK_VERIFY( struct nt::extended_arguments_t::u2_wide_t, 0x1 );
SDK_VERIFY( union nt::extended_arguments_t, 0x4 );
