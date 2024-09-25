#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_control_setup_packet_t.start.hpp"
namespace wdf
{
    // [union _WDF_USB_CONTROL_SETUP_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_control_setup_packet_t                                 
    {                                                                
        struct u0_packet_t                                           
        {                                                            
            union u4_bm_t                                            
            {                                                        
                struct u8_request_t                                  
                {                                                    
                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
                    //                                               
                    _m00 uint2_t recipient;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Recipient
                    _m01 uint2_t type;                                 //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Type
                    _m02 uint1_t dir;                                  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .Dir
                                                                     
                    SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bm.Request.$", 0x1, true, 0x8437add016be9edf );                                    
                    SDK_FIXED_SIZE( u8_request_t, 0x1 );                                    
                };                                                   
                                                                     
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
                //                                                   
                _m03 u8_request_t          request;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Request
                _m04 uint8_t               byte;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Byte
                                                                     
                SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.Packet.bm.$", 0x1, true, 0x19416071e4096880 );                          
                SDK_FIXED_SIZE( u4_bm_t, 0x1 );                          
            };                                                       
                                                                     
            union u12_w_value_t                                      
            {                                                        
                struct u16_bytes_t                                   
                {                                                    
                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
                    //                                               
                    _m07 uint8_t low_byte;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowByte
                    _m08 uint8_t hi_byte;                              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .HiByte
                                                                     
                    SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wValue.Bytes.$", 0x2, true, 0x18e20a42f9bfa851 );                                 
                    SDK_FIXED_SIZE( u16_bytes_t, 0x2 );                                 
                };                                                   
                                                                     
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
                //                                                   
                _m09 u16_bytes_t          bytes;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bytes
                _m10 uint16_t             value;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                     
                SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wValue.$", 0x2, true, 0x8c82e205a622a290 );                        
                SDK_FIXED_SIZE( u12_w_value_t, 0x2 );                        
            };                                                       
                                                                     
            union u20_w_index_t                                      
            {                                                        
                struct u24_bytes_t                                   
                {                                                    
                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
                    //                                               
                    _m12 uint8_t low_byte;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowByte
                    _m13 uint8_t hi_byte;                              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .HiByte
                                                                     
                    SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wIndex.Bytes.$", 0x2, true, 0x1061db36d71977de );                                 
                    SDK_FIXED_SIZE( u24_bytes_t, 0x2 );                                 
                };                                                   
                                                                     
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
                //                                                   
                _m14 u24_bytes_t          bytes;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bytes
                _m15 uint16_t             value;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                     
                SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.Packet.wIndex.$", 0x2, true, 0x4c574a78137d3bd3 );                        
                SDK_FIXED_SIZE( u20_w_index_t, 0x2 );                        
            };                                                       
                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                                       
            _m05 u4_bm_t                           bm;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bm
            _m06 uint8_t                           b_request;          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bRequest
            _m11 u12_w_value_t                     w_value;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wValue
            _m16 u20_w_index_t                     w_index;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wIndex
            _m17 uint16_t                          w_length;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wLength
                                                                     
            SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.Packet.$", 0x8, true, 0x34d741ccf2153b68 );                  
            SDK_FIXED_SIZE( u0_packet_t, 0x8 );                      
        };                                                           
                                                                     
        struct u28_generic_t                                         
        {                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
            //                                                       
            _m19 sdk::array<uint8_t, 8> bytes;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bytes
                                                                     
            SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.Generic.$", 0x8, true, 0x4499ffc6554f04a7 );              
            SDK_FIXED_SIZE( u28_generic_t, 0x8 );                    
        };                                                           
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                           
        _m18 u0_packet_t                                     packet;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Packet
        _m20 u28_generic_t                                   generic;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Generic
                                                                     
        SDK_MAGIC_PROPERTIES( "_WDF_USB_CONTROL_SETUP_PACKET.$", 0x8, true, 0x69c035ed6da4788d );        
        SDK_FIXED_SIZE( usb_control_setup_packet_t, 0x8 );           
    };                                                               
};
#include "magic/usb_control_setup_packet_t.end.hpp"
SDK_VERIFY( struct wdf::usb_control_setup_packet_t::u0_packet_t::u4_bm_t::u8_request_t, 0x1 );
SDK_VERIFY( union wdf::usb_control_setup_packet_t::u0_packet_t::u4_bm_t, 0x1 );
SDK_VERIFY( struct wdf::usb_control_setup_packet_t::u0_packet_t::u12_w_value_t::u16_bytes_t, 0x2 );
SDK_VERIFY( union wdf::usb_control_setup_packet_t::u0_packet_t::u12_w_value_t, 0x2 );
SDK_VERIFY( struct wdf::usb_control_setup_packet_t::u0_packet_t::u20_w_index_t::u24_bytes_t, 0x2 );
SDK_VERIFY( union wdf::usb_control_setup_packet_t::u0_packet_t::u20_w_index_t, 0x2 );
SDK_VERIFY( struct wdf::usb_control_setup_packet_t::u0_packet_t, 0x8 );
SDK_VERIFY( struct wdf::usb_control_setup_packet_t::u28_generic_t, 0x8 );
SDK_VERIFY( union wdf::usb_control_setup_packet_t, 0x8 );
