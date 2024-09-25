#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/network_open_ecp_context_v0_t.start.hpp"
namespace nt
{
    // [struct _NETWORK_OPEN_ECP_CONTEXT_V0]
    // => WDK 10 (NV)
    //
    struct network_open_ecp_context_v0_t                      
    {                                                         
        struct u0_in_t                                        
        {                                                     
            enum class u1_location_t : int32_t                
            {                                                 
                any =      0x0,                                 // WDK 10
                remote =   0x1,                                 // WDK 10
                loopback = 0x2,                                 // WDK 10
            };                                                
                                                              
            enum class u2_integrity_t : int32_t               
            {                                                 
                any =       0x0,                                // WDK 10
                none =      0x1,                                // WDK 10
                _signed =   0x2,                                // WDK 10
                encrypted = 0x3,                                // WDK 10
                maximum =   0x4,                                // WDK 10
            };                                                
                                                              
            // WDK 10                                         
            //                                                
            _m01 u1_location_t                 location;        //{ +0x0000    } | .Location
            _m02 u2_integrity_t                integrity;       //{ +0x0004    } | .Integrity
                                                              
            SDK_NONVOL_PROPERTIES( "_NETWORK_OPEN_ECP_CONTEXT_V0.in.$", 0x0, false, 0x8357613048100ac );               
            SDK_FIXED_SIZE( u0_in_t, 0x8 );                   
        };                                                    
                                                              
        struct u3_out_t                                       
        {                                                     
            enum class u3_location_t : int32_t                
            {                                                 
                any =      0x0,                                 // WDK 10
                remote =   0x1,                                 // WDK 10
                loopback = 0x2,                                 // WDK 10
            };                                                
                                                              
            enum class u3_integrity_t : int32_t               
            {                                                 
                any =       0x0,                                // WDK 10
                none =      0x1,                                // WDK 10
                _signed =   0x2,                                // WDK 10
                encrypted = 0x3,                                // WDK 10
                maximum =   0x4,                                // WDK 10
            };                                                
                                                              
            // WDK 10                                         
            //                                                
            _m04 u1_location_t                 location;        //{ +0x0000    } | .Location
            _m05 u2_integrity_t                integrity;       //{ +0x0004    } | .Integrity
                                                              
            SDK_NONVOL_PROPERTIES( "_NETWORK_OPEN_ECP_CONTEXT_V0.out.$", 0x0, false, 0x94c8b4ae2493f2d7 );               
            SDK_FIXED_SIZE( u3_out_t, 0x8 );                  
        };                                                    
                                                              
        // WDK 10                                             
        //                                                    
        _m00 uint16_t                                    size;  //{ +0x0000    } | .Size
        _m03 u0_in_t                                     in;    //{ +0x0004    } | .in
        _m06 u0_in_t                                     out;   //{ +0x000c    } | .out
                                                              
        SDK_NONVOL_PROPERTIES( "_NETWORK_OPEN_ECP_CONTEXT_V0.$", 0x0, false, 0xbe3b18eec051b345 );     
        SDK_FIXED_SIZE( network_open_ecp_context_v0_t, 0x14 );     
    };                                                        
};
#include "magic/network_open_ecp_context_v0_t.end.hpp"
SDK_VERIFY( struct nt::network_open_ecp_context_v0_t::u0_in_t, 0x8 );
SDK_VERIFY( struct nt::network_open_ecp_context_v0_t::u3_out_t, 0x8 );
SDK_VERIFY( struct nt::network_open_ecp_context_v0_t, 0x14 );
