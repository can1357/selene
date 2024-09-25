#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_request_type_t.hpp"
#include "usb_control_setup_packet_t.hpp"

#include "magic/usb_request_completion_params_v1_11_t.start.hpp"
namespace wdf
{
    struct wdfmemory_t;

    // [struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11]
    // => Windows 10 v1607
    //
    struct usb_request_completion_params_v1_11_t                                                            
    {                                                                                                       
        union u0_parameters_t                                                                               
        {                                                                                                   
            struct u1_device_string_t                                                                       
            {                                                                                               
                // Windows 10 v1607                                                                         
                //                                                                                          
                _m02 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    } | .Buffer
                _m03 uint16_t                 lang_id;                                                        //{ +0x0008    } | .LangID
                _m04 uint8_t                  string_index;                                                   //{ +0x000a    } | .StringIndex
                _m05 uint8_t                  required_size;                                                  //{ +0x000b    } | .RequiredSize
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceString.$", 0x0, false, 0xa8fd4d4454f433c8 );                                                  
                SDK_FIXED_SIZE( u1_device_string_t, 0x10 );                                                  
            };                                                                                              
                                                                                                            
            struct u2_device_control_transfer_t                                                             
            {                                                                                               
                // Windows 10 v1607                                                                         
                //                                                                                          
                _m07 struct wdf::wdfmemory_t*              buffer;                                            //{ +0x0000    } | .Buffer
                _m08 union wdf::usb_control_setup_packet_t setup_packet;                                      //{ +0x0008    } | .SetupPacket
                _m09 uint32_t                              length;                                            //{ +0x0010    } | .Length
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceControlTransfer.$", 0x0, false, 0x1656b65580c49add );                                                 
                SDK_FIXED_SIZE( u2_device_control_transfer_t, 0x18 );                                                 
            };                                                                                              
                                                                                                            
            struct u3_device_urb_t                                                                          
            {                                                                                               
                // Windows 10 v1607                                                                         
                //                                                                                          
                _m11 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    } | .Buffer
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.DeviceUrb.$", 0x0, false, 0x1011c71005589170 );                                           
                SDK_FIXED_SIZE( u3_device_urb_t, 0x8 );                                                     
            };                                                                                              
                                                                                                            
            struct u4_pipe_write_t                                                                          
            {                                                                                               
                // Windows 10 v1607                                                                         
                //                                                                                          
                _m13 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    } | .Buffer
                _m14 uint64_t                 length;                                                         //{ +0x0008    } | .Length
                _m15 uint64_t                 offset;                                                         //{ +0x0010    } | .Offset
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeWrite.$", 0x0, false, 0xf8e1096bb8af4476 );                                           
                SDK_FIXED_SIZE( u4_pipe_write_t, 0x18 );                                                    
            };                                                                                              
                                                                                                            
            struct u5_pipe_read_t                                                                           
            {                                                                                               
                // Windows 10 v1607                                                                         
                //                                                                                          
                _m17 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    } | .Buffer
                _m18 uint64_t                 length;                                                         //{ +0x0008    } | .Length
                _m19 uint64_t                 offset;                                                         //{ +0x0010    } | .Offset
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeRead.$", 0x0, false, 0x52505fc4f1bdda7e );                                           
                SDK_FIXED_SIZE( u5_pipe_read_t, 0x18 );                                                     
            };                                                                                              
                                                                                                            
            struct u6_pipe_urb_t                                                                            
            {                                                                                               
                // Windows 10 v1607                                                                         
                //                                                                                          
                _m21 struct wdf::wdfmemory_t* buffer;                                                         //{ +0x0000    } | .Buffer
                                                                                                            
                SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.PipeUrb.$", 0x0, false, 0x40e1da92174dcb3b );                                           
                SDK_FIXED_SIZE( u6_pipe_urb_t, 0x8 );                                                       
            };                                                                                              
                                                                                                            
            // Windows 10 v1607                                                                             
            //                                                                                              
            _m06 u1_device_string_t                                     device_string;                        //{ +0x0000    } | .DeviceString
            _m10 u2_device_control_transfer_t                           device_control_transfer;              //{ +0x0000    } | .DeviceControlTransfer
            _m12 u3_device_urb_t                                        device_urb;                           //{ +0x0000    } | .DeviceUrb
            _m16 u4_pipe_write_t                                        pipe_write;                           //{ +0x0000    } | .PipeWrite
            _m20 u5_pipe_read_t                                         pipe_read;                            //{ +0x0000    } | .PipeRead
            _m22 u6_pipe_urb_t                                          pipe_urb;                             //{ +0x0000    } | .PipeUrb
                                                                                                            
            SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.Parameters.$", 0x0, false, 0x970bcef16f3524f2 );                                    
            SDK_FIXED_SIZE( u0_parameters_t, 0x18 );                                                        
        };                                                                                                  
                                                                                                            
        // Windows 10 v1607                                                                                 
        //                                                                                                  
        _m00 int32_t                                                                            usbd_status;  //{ +0x0000    } | .UsbdStatus
        _m01 enum wdf::usb_request_type_t                                                       type;         //{ +0x0004    } | .Type
        _m23 u0_parameters_t                                                                    parameters;   //{ +0x0008    } | .Parameters
                                                                                                            
        SDK_MAGIC_PROPERTIES( "_WDF_USB_REQUEST_COMPLETION_PARAMS_V1_11.$", 0x0, false, 0xaa219daa5ab6005c );            
        SDK_FIXED_SIZE( usb_request_completion_params_v1_11_t, 0x20 );                                      
    };                                                                                                      
};
#include "magic/usb_request_completion_params_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::usb_request_completion_params_v1_11_t::u0_parameters_t::u1_device_string_t, 0x10 );
SDK_VERIFY( struct wdf::usb_request_completion_params_v1_11_t::u0_parameters_t::u2_device_control_transfer_t, 0x18 );
SDK_VERIFY( struct wdf::usb_request_completion_params_v1_11_t::u0_parameters_t::u3_device_urb_t, 0x8 );
SDK_VERIFY( struct wdf::usb_request_completion_params_v1_11_t::u0_parameters_t::u4_pipe_write_t, 0x18 );
SDK_VERIFY( struct wdf::usb_request_completion_params_v1_11_t::u0_parameters_t::u5_pipe_read_t, 0x18 );
SDK_VERIFY( struct wdf::usb_request_completion_params_v1_11_t::u0_parameters_t::u6_pipe_urb_t, 0x8 );
SDK_VERIFY( union wdf::usb_request_completion_params_v1_11_t::u0_parameters_t, 0x18 );
SDK_VERIFY( struct wdf::usb_request_completion_params_v1_11_t, 0x20 );
