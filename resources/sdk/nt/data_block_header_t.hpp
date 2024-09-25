#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/data_block_header_t.start.hpp"
namespace nt
{
    // [struct _DATA_BLOCK_HEADER]
    // => WDK 10 (NV)
    //
    struct data_block_header_t                            
    {                                                     
        struct u0_msf_t                                   
        {                                                 
            // WDK 10                                     
            //                                            
            _m02 uint8_t m;                                 //{ +0x0001    } | .M
            _m03 uint8_t s;                                 //{ +0x0002    } | .S
            _m04 uint8_t f;                                 //{ +0x0003    } | .F
                                                          
            SDK_NONVOL_PROPERTIES( "_DATA_BLOCK_HEADER.MSF.$", 0x0, false, 0xc290284ebf4995e1 );                        
            SDK_FIXED_SIZE( u0_msf_t, 0x4 );                        
        };                                                
                                                          
        // WDK 10                                         
        //                                                
        _m00 uint8_t                data_mode;              //{ +0x0000    } | .DataMode
        _m01 sdk::array<uint8_t, 4> logical_block_address;  //{ +0x0005    } | .LogicalBlockAddress
        _m05 u0_msf_t               msf;                    //{ +0x0005    } | .MSF
                                                          
        SDK_NONVOL_PROPERTIES( "_DATA_BLOCK_HEADER.$", 0x0, false, 0xb8eaaf10202ecb4f );                      
        SDK_FIXED_SIZE( data_block_header_t, 0x9 );                      
    };                                                    
};
#include "magic/data_block_header_t.end.hpp"
SDK_VERIFY( struct nt::data_block_header_t::u0_msf_t, 0x4 );
SDK_VERIFY( struct nt::data_block_header_t, 0x9 );
