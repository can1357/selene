#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loader_reset_reason_t.start.hpp"
namespace nt
{
    // [struct _LOADER_RESET_REASON]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct loader_reset_reason_t                                            
    {                                                                       
        union u0_basic_t                                                    
        {                                                                   
            struct u3_component_t                                           
            {                                                               
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
                //                                                          
                _m01 uint8_t pch;                                             //{ +0x0000    +0x0000    +0x0000    } | .Pch
                _m02 uint8_t embedded_controller;                             //{ +0x0001    +0x0001    +0x0001    } | .EmbeddedController
                                                                            
                SDK_MAGIC_PROPERTIES( "_LOADER_RESET_REASON.Basic.Component.$", 0x8, true, 0xfa6b7aa05743ae5a );                                               
                SDK_FIXED_SIZE( u3_component_t, 0x8 );                                               
            };                                                              
                                                                            
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                              
            _m03 u3_component_t                  component;                   //{ +0x0000    +0x0000    +0x0000    } | .Component
            _m04 uint64_t                        as_ulong64;                  //{ +0x0000    +0x0000    +0x0000    } | .AsULONG64
            _m05 sdk::array<uint8_t, 8>          as_bytes;                    //{ +0x0000    +0x0000    +0x0000    } | .AsBytes
                                                                            
            SDK_MAGIC_PROPERTIES( "_LOADER_RESET_REASON.Basic.$", 0x8, true, 0x965b9779f090bdee );                           
            SDK_FIXED_SIZE( u0_basic_t, 0x8 );                              
        };                                                                  
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                  
        _m00 uint8_t                                        supplied;         //{ +0x0000    +0x0000    +0x0000    } | .Supplied
        _m06 u0_basic_t                                     basic;            //{ +0x0008    +0x0008    +0x0008    } | .Basic
        _m07 sdk::array<uint32_t, 8>                        additional_info;  //{ +0x0010    +0x0010    +0x0010    } | .AdditionalInfo
                                                                            
        SDK_MAGIC_PROPERTIES( "_LOADER_RESET_REASON.$", 0x30, true, 0x46cacdabb67fec0d );                
        SDK_FIXED_SIZE( loader_reset_reason_t, 0x30 );                      
    };                                                                      
};
#include "magic/loader_reset_reason_t.end.hpp"
SDK_VERIFY( struct nt::loader_reset_reason_t::u0_basic_t::u3_component_t, 0x8 );
SDK_VERIFY( union nt::loader_reset_reason_t::u0_basic_t, 0x8 );
SDK_VERIFY( struct nt::loader_reset_reason_t, 0x30 );
