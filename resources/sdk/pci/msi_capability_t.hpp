#pragma once
#include <sdkgen/support_library.hpp>
#include "capabilities_header_t.hpp"
#include "msi_message_control_t.hpp"

#include "magic/msi_capability_t.start.hpp"
namespace pci
{
    // [struct PCI_MSI_CAPABILITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msi_capability_t                                           
    {                                                                 
        union u0_message_address_lower_t                              
        {                                                             
            struct u4__register_t                                     
            {                                                         
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
                //                                                    
                _m01 uint30_t address;                                  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Address
                                                                      
                SDK_MAGIC_PROPERTIES( "PCI_MSI_CAPABILITY.MessageAddressLower.Register.$", 0x4, true, 0x45c689dd6ac1189f );                                        
                SDK_FIXED_SIZE( u4__register_t, 0x4 );                                        
            };                                                        
                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
            //                                                        
            _m02 u4__register_t       _register;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Register
            _m03 uint32_t             raw;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Raw
                                                                      
            SDK_MAGIC_PROPERTIES( "PCI_MSI_CAPABILITY.MessageAddressLower.$", 0x4, true, 0xdbe005a1af63cf98 );                                
            SDK_FIXED_SIZE( u0_message_address_lower_t, 0x4 );                                
        };                                                            
                                                                      
        struct u8_option32_bit_t                                      
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                        
            _m05 uint16_t message_data;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MessageData
            _m06 uint32_t mask_bits;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaskBits
            _m07 uint32_t pending_bits;                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PendingBits
                                                                      
            SDK_MAGIC_PROPERTIES( "PCI_MSI_CAPABILITY.Option32Bit.$", 0xc, true, 0xa9240afce7b02ac2 );                                   
            SDK_FIXED_SIZE( u8_option32_bit_t, 0xc );                                   
        };                                                            
                                                                      
        struct u12_option64_bit_t                                     
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m09 uint32_t message_address_upper;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MessageAddressUpper
            _m10 uint16_t message_data;                                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MessageData
            _m11 uint32_t mask_bits;                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaskBits
            _m12 uint32_t pending_bits;                                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PendingBits
                                                                      
            SDK_MAGIC_PROPERTIES( "PCI_MSI_CAPABILITY.Option64Bit.$", 0x10, true, 0x507d9a1fd49aa52f );                                            
            SDK_FIXED_SIZE( u12_option64_bit_t, 0x10 );                                            
        };                                                            
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m00 struct pci::capabilities_header_t  header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m04 u0_message_address_lower_t         message_address_lower;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MessageAddressLower
        _m08 u8_option32_bit_t                  option32_bit;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Option32Bit
        _m13 u12_option64_bit_t                 option64_bit;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Option64Bit
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m14 union pci::msi_message_control_t   message_control;        //{ +0x0002    +0x0002    +0x0002    } | .MessageControl
                                                                      
        SDK_MAGIC_PROPERTIES( "PCI_MSI_CAPABILITY.$", 0x18, true, 0x629baf4c12432fc3 );                      
        SDK_FIXED_SIZE( msi_capability_t, 0x18 );                      
    };                                                                
};
#include "magic/msi_capability_t.end.hpp"
SDK_VERIFY( struct pci::msi_capability_t::u0_message_address_lower_t::u4__register_t, 0x4 );
SDK_VERIFY( union pci::msi_capability_t::u0_message_address_lower_t, 0x4 );
SDK_VERIFY( struct pci::msi_capability_t::u8_option32_bit_t, 0xc );
SDK_VERIFY( struct pci::msi_capability_t::u12_option64_bit_t, 0x10 );
SDK_VERIFY( struct pci::msi_capability_t, 0x18 );
