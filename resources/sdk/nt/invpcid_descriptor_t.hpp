#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/invpcid_descriptor_t.start.hpp"
namespace nt
{
    // [union _INVPCID_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union invpcid_descriptor_t                                     
    {                                                              
        struct u0_individual_address_t                             
        {                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                     
            _m00 uint12_t pcid;                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Pcid
            _m01 uint64_t entire_pcid;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntirePcid
            _m02 uint64_t _virtual;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Virtual
                                                                   
            SDK_MAGIC_PROPERTIES( "_INVPCID_DESCRIPTOR.IndividualAddress.$", 0x10, true, 0x34843b68e33b2f3d );                                    
            SDK_FIXED_SIZE( u0_individual_address_t, 0x10 );                                    
        };                                                         
                                                                   
        struct u4_single_context_t                                 
        {                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                     
            _m04 uint12_t pcid;                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Pcid
            _m05 uint64_t entire_pcid;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntirePcid
                                                                   
            SDK_MAGIC_PROPERTIES( "_INVPCID_DESCRIPTOR.SingleContext.$", 0x10, true, 0x858d37cbb2754a04 );                                    
            SDK_FIXED_SIZE( u4_single_context_t, 0x10 );                                    
        };                                                         
                                                                   
        struct u8_all_context_and_globals_t                        
        {                                                          
                                                                   
            SDK_MAGIC_PROPERTIES( "_INVPCID_DESCRIPTOR.AllContextAndGlobals.$", 0x10, true, 0xee6872d0aecddd75 );                        
            SDK_FIXED_SIZE( u8_all_context_and_globals_t, 0x10 );                        
        };                                                         
                                                                   
        struct u12_all_context_t                                   
        {                                                          
                                                                   
            SDK_MAGIC_PROPERTIES( "_INVPCID_DESCRIPTOR.AllContext.$", 0x10, true, 0x50c4d063e9d77a );                        
            SDK_FIXED_SIZE( u12_all_context_t, 0x10 );                        
        };                                                         
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                         
        _m03 u0_individual_address_t       individual_address;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IndividualAddress
        _m06 u4_single_context_t           single_context;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SingleContext
        _m07 u8_all_context_and_globals_t  all_context_and_globals;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllContextAndGlobals
        _m08 u8_all_context_and_globals_t  all_context;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllContext
                                                                   
        SDK_MAGIC_PROPERTIES( "_INVPCID_DESCRIPTOR.$", 0x10, true, 0x8752d40894855486 );                        
        SDK_FIXED_SIZE( invpcid_descriptor_t, 0x10 );                        
    };                                                             
};
#include "magic/invpcid_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::invpcid_descriptor_t::u0_individual_address_t, 0x10 );
SDK_VERIFY( struct nt::invpcid_descriptor_t::u4_single_context_t, 0x10 );
SDK_VERIFY( struct nt::invpcid_descriptor_t::u8_all_context_and_globals_t, 0x10 );
SDK_VERIFY( struct nt::invpcid_descriptor_t::u12_all_context_t, 0x10 );
SDK_VERIFY( union nt::invpcid_descriptor_t, 0x10 );
