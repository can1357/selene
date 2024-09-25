#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interrupt_remapping_info_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_REMAPPING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_remapping_info_t                            
    {                                                            
        struct u0_msi_t                                          
        {                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                   
            _m03 uint32_t message_address_low;                     //{ +0x0000    +0x0004    +0x0004    +0x0004    } | .MessageAddressLow
            _m04 uint16_t message_data;                            //{ +0x0004    +0x0008    +0x0008    +0x0008    } | .MessageData
                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                   
            _m05 uint32_t message_address_high;                    //{ +0x0000    +0x0000    +0x0000    } | .MessageAddressHigh
                                                                 
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_REMAPPING_INFO.Msi.$", 0xc, true, 0x27099315ba1534b7 );                                       
            SDK_DYNAMIC_SIZE( u0_msi_t );                                       
        };                                                       
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                       
        _m00 uint30_t                          irt_index;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IrtIndex
        _m01 uint1_t                           flag_hal_internal;  //{ +0x0000@30 +0x0000@30 +0x0000@30 +0x0000@30 } | .FlagHalInternal
        _m02 uint1_t                           flag_translated;    //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .FlagTranslated
        _m06 u0_msi_t                          msi;                //{ +0x0008    +0x0004    +0x0004    +0x0004    } | .Msi
                                                                 
        // Windows 10 v1607                                      
        //                                                       
        _m07 uint64_t                          remapped_format;    //{ +0x0008    } | .RemappedFormat
                                                                 
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_REMAPPING_INFO.$", 0x10, true, 0x3e5ca171eeaba073 );                  
        SDK_FIXED_SIZE( interrupt_remapping_info_t, 0x10 );                  
    };                                                           
};
#include "magic/interrupt_remapping_info_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_remapping_info_t, 0x10 );
