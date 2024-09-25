#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_request_type_t.hpp"
#include "usb_control_setup_packet_t.hpp"

#include "magic/usb_request_completion_params_t.start.hpp"
namespace wdf
{
    struct wdfmemory_t;

    // [struct _WDF_USB_REQUEST_COMPLETION_PARAMS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_request_completion_params_t                                                                  
    {                                                                                                       
        union u0_parameters_t                                                                               
        {                                                                                                   
            struct u4_device_string_t                                                                       
            {                                                                                               
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
                //                                                                                          
                _m02 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                _m03 uint16_t                 lang_id;                                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LangID
                _m04 uint8_t                  string_index;                                                   //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .StringIndex
                _m05 uint8_t                  required_size;                                                  //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .RequiredSize
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceString.$", 0x10, true, 0xb9a119b1e93c2237 );                                                  
                SDK_FIXED_SIZE( u4_device_string_t, 0x10 );                                                  
            };                                                                                              
                                                                                                            
            struct u8_device_control_transfer_t                                                             
            {                                                                                               
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
                //                                                                                          
                _m07 struct wdf::wdfmemory_t*              buffer;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                _m08 union wdf::usb_control_setup_packet_t setup_packet;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SetupPacket
                _m09 uint32_t                              length;                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceControlTransfer.$", 0x18, true, 0x4dc52ccb851703b1 );                                                 
                SDK_FIXED_SIZE( u8_device_control_transfer_t, 0x18 );                                                 
            };                                                                                              
                                                                                                            
            struct u12_device_urb_t                                                                         
            {                                                                                               
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
                //                                                                                          
                _m11 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.DeviceUrb.$", 0x8, true, 0xb0271e171ba41e41 );                                           
                SDK_FIXED_SIZE( u12_device_urb_t, 0x8 );                                                    
            };                                                                                              
                                                                                                            
            struct u16_pipe_write_t                                                                         
            {                                                                                               
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
                //                                                                                          
                _m13 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                _m14 uint64_t                 length;                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                _m15 uint64_t                 offset;                                                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeWrite.$", 0x18, true, 0xc96c32425087131f );                                           
                SDK_FIXED_SIZE( u16_pipe_write_t, 0x18 );                                                   
            };                                                                                              
                                                                                                            
            struct u20_pipe_read_t                                                                          
            {                                                                                               
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
                //                                                                                          
                _m17 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                _m18 uint64_t                 length;                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                _m19 uint64_t                 offset;                                                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeRead.$", 0x18, true, 0x731055c4f58361e2 );                                           
                SDK_FIXED_SIZE( u20_pipe_read_t, 0x18 );                                                    
            };                                                                                              
                                                                                                            
            struct u24_pipe_urb_t                                                                           
            {                                                                                               
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
                //                                                                                          
                _m21 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.PipeUrb.$", 0x8, true, 0x1e6a41ce54125548 );                                           
                SDK_FIXED_SIZE( u24_pipe_urb_t, 0x8 );                                                      
            };                                                                                              
                                                                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                                                              
            _m06 u4_device_string_t                                     device_string;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceString
            _m10 u8_device_control_transfer_t                           device_control_transfer;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceControlTransfer
            _m12 u12_device_urb_t                                       device_urb;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceUrb
            _m16 u16_pipe_write_t                                       pipe_write;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PipeWrite
            _m20 u20_pipe_read_t                                        pipe_read;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PipeRead
            _m22 u24_pipe_urb_t                                         pipe_urb;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PipeUrb
                                                                                                            
            SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS.Parameters.$", 0x18, true, 0x697112a201004376 );                                    
            SDK_FIXED_SIZE( u0_parameters_t, 0x18 );                                                        
        };                                                                                                  
                                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                                  
        _m00 int32_t                                                                            usbd_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UsbdStatus
        _m01 enum wdf::usb_request_type_t                                                       type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m23 u0_parameters_t                                                                    parameters;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Parameters
                                                                                                            
        SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS.$", 0x20, true, 0xb44f93be17579c1c );            
        SDK_DYNAMIC_SIZE( usb_request_completion_params_t );                                                
    };                                                                                                      
};
#include "magic/usb_request_completion_params_t.end.hpp"
SDK_VERIFY( struct wdf::usb_request_completion_params_t::u0_parameters_t::u4_device_string_t, 0x10 );
SDK_VERIFY( struct wdf::usb_request_completion_params_t::u0_parameters_t::u8_device_control_transfer_t, 0x18 );
SDK_VERIFY( struct wdf::usb_request_completion_params_t::u0_parameters_t::u12_device_urb_t, 0x8 );
SDK_VERIFY( struct wdf::usb_request_completion_params_t::u0_parameters_t::u16_pipe_write_t, 0x18 );
SDK_VERIFY( struct wdf::usb_request_completion_params_t::u0_parameters_t::u20_pipe_read_t, 0x18 );
SDK_VERIFY( struct wdf::usb_request_completion_params_t::u0_parameters_t::u24_pipe_urb_t, 0x8 );
SDK_VERIFY( union wdf::usb_request_completion_params_t::u0_parameters_t, 0x18 );
