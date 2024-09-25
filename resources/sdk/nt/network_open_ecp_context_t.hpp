#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/network_open_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _NETWORK_OPEN_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct network_open_ecp_context_t                         
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
            _m03 uint32_t                      flags;           //{ +0x0008    } | .Flags
                                                              
            SDK_NONVOL_PROPERTIES( "_NETWORK_OPEN_ECP_CONTEXT.in.$", 0x0, false, 0x1c9b9479f0b487bc );               
            SDK_FIXED_SIZE( u0_in_t, 0xc );                   
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
            _m05 u1_location_t                 location;        //{ +0x0000    } | .Location
            _m06 u2_integrity_t                integrity;       //{ +0x0004    } | .Integrity
            _m07 uint32_t                      flags;           //{ +0x0008    } | .Flags
                                                              
            SDK_NONVOL_PROPERTIES( "_NETWORK_OPEN_ECP_CONTEXT.out.$", 0x0, false, 0x1489c9aa2a50a6fc );               
            SDK_FIXED_SIZE( u3_out_t, 0xc );                  
        };                                                    
                                                              
        // WDK 10                                             
        //                                                    
        _m00 uint16_t                                    size;  //{ +0x0000    } | .Size
        _m04 u0_in_t                                     in;    //{ +0x0004    } | .in
        _m08 u0_in_t                                     out;   //{ +0x0010    } | .out
                                                              
        SDK_NONVOL_PROPERTIES( "_NETWORK_OPEN_ECP_CONTEXT.$", 0x0, false, 0x7e372a3bb9b28ecb );     
        SDK_FIXED_SIZE( network_open_ecp_context_t, 0x1c );     
    };                                                        
};
#include "magic/network_open_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::network_open_ecp_context_t::u0_in_t, 0xc );
SDK_VERIFY( struct nt::network_open_ecp_context_t::u3_out_t, 0xc );
SDK_VERIFY( struct nt::network_open_ecp_context_t, 0x1c );
