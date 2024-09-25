#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_target_device_select_config_type_t.hpp"

#include "magic/usb_device_select_config_params_v1_7_t.start.hpp"
namespace wdf
{
    struct urb_t;
    struct wdfusbinterface_t;
    struct usb_interface_descriptor_t;
    struct usb_configuration_descriptor_t;
    struct usb_interface_setting_pair_v1_7_t;

    // [struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7]
    // => Windows 10 v1607
    //
    struct usb_device_select_config_params_v1_7_t                                                                          
    {                                                                                                                      
        union u0_types_t                                                                                                   
        {                                                                                                                  
            struct u1_descriptor_t                                                                                         
            {                                                                                                              
                // Windows 10 v1607                                                                                        
                //                                                                                                         
                _m02 struct wdf::usb_configuration_descriptor_t* configuration_descriptor;                                   //{ +0x0000    } | .ConfigurationDescriptor
                _m03 struct wdf::usb_interface_descriptor_t**    interface_descriptors;                                      //{ +0x0008    } | .InterfaceDescriptors
                _m04 uint32_t                                    num_interface_descriptors;                                  //{ +0x0010    } | .NumInterfaceDescriptors
                                                                                                                           
                SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.Descriptor.$", 0x0, false, 0x41a75e7c24662a4d );                                                 
                SDK_FIXED_SIZE( u1_descriptor_t, 0x18 );                                                                   
            };                                                                                                             
                                                                                                                           
            struct u2_urb_t                                                                                                
            {                                                                                                              
                // Windows 10 v1607                                                                                        
                //                                                                                                         
                _m06 struct wdf::urb_t* urb;                                                                                 //{ +0x0000    } | .Urb
                                                                                                                           
                SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.Urb.$", 0x0, false, 0xb02c851a355e3af1 );                           
                SDK_FIXED_SIZE( u2_urb_t, 0x8 );                                                                           
            };                                                                                                             
                                                                                                                           
            struct u3_single_interface_t                                                                                   
            {                                                                                                              
                // Windows 10 v1607                                                                                        
                //                                                                                                         
                _m08 uint8_t                        number_configured_pipes;                                                 //{ +0x0000    } | .NumberConfiguredPipes
                _m09 struct wdf::wdfusbinterface_t* configured_usb_interface;                                                //{ +0x0008    } | .ConfiguredUsbInterface
                                                                                                                           
                SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.SingleInterface.$", 0x0, false, 0xe26dfc3f69e00d11 );                                                
                SDK_FIXED_SIZE( u3_single_interface_t, 0x10 );                                                             
            };                                                                                                             
                                                                                                                           
            struct u4_multi_interface_t                                                                                    
            {                                                                                                              
                // Windows 10 v1607                                                                                        
                //                                                                                                         
                _m11 uint8_t                                        number_interfaces;                                       //{ +0x0000    } | .NumberInterfaces
                _m12 struct wdf::usb_interface_setting_pair_v1_7_t* pairs;                                                   //{ +0x0008    } | .Pairs
                _m13 uint8_t                                        number_of_configured_interfaces;                         //{ +0x0010    } | .NumberOfConfiguredInterfaces
                                                                                                                           
                SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.MultiInterface.$", 0x0, false, 0x65b4f53f7f06e57b );                                                       
                SDK_FIXED_SIZE( u4_multi_interface_t, 0x18 );                                                              
            };                                                                                                             
                                                                                                                           
            // Windows 10 v1607                                                                                            
            //                                                                                                             
            _m05 u1_descriptor_t                                                                    descriptor;              //{ +0x0000    } | .Descriptor
            _m07 u2_urb_t                                                                           urb;                     //{ +0x0000    } | .Urb
            _m10 u3_single_interface_t                                                              single_interface;        //{ +0x0000    } | .SingleInterface
            _m14 u4_multi_interface_t                                                               multi_interface;         //{ +0x0000    } | .MultiInterface
                                                                                                                           
            SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.$", 0x0, false, 0x23adf3fb7f19b7af );                       
            SDK_FIXED_SIZE( u0_types_t, 0x18 );                                                                            
        };                                                                                                                 
                                                                                                                           
        // Windows 10 v1607                                                                                                
        //                                                                                                                 
        _m00 uint32_t                                                                                                size;   //{ +0x0000    } | .Size
        _m01 enum wdf::usb_target_device_select_config_type_t                                                        type;   //{ +0x0004    } | .Type
        _m15 u0_types_t                                                                                              types;  //{ +0x0008    } | .Types
                                                                                                                           
        SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.$", 0x0, false, 0x4d65792e07101500 );             
        SDK_FIXED_SIZE( usb_device_select_config_params_v1_7_t, 0x20 );                                                    
    };                                                                                                                     
};
#include "magic/usb_device_select_config_params_v1_7_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_select_config_params_v1_7_t::u0_types_t::u1_descriptor_t, 0x18 );
SDK_VERIFY( struct wdf::usb_device_select_config_params_v1_7_t::u0_types_t::u2_urb_t, 0x8 );
SDK_VERIFY( struct wdf::usb_device_select_config_params_v1_7_t::u0_types_t::u3_single_interface_t, 0x10 );
SDK_VERIFY( struct wdf::usb_device_select_config_params_v1_7_t::u0_types_t::u4_multi_interface_t, 0x18 );
SDK_VERIFY( union wdf::usb_device_select_config_params_v1_7_t::u0_types_t, 0x18 );
SDK_VERIFY( struct wdf::usb_device_select_config_params_v1_7_t, 0x20 );
