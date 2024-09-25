#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_target_device_select_config_type_t.hpp"

#include "magic/usb_device_select_config_params_t.start.hpp"
namespace wdf
{
    struct urb_t;
    struct wdfusbinterface_t;
    struct usb_interface_descriptor_t;
    struct usb_interface_setting_pair_t;
    struct usb_configuration_descriptor_t;

    // [struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_select_config_params_t                                                                          
    {                                                                                                                 
        union u0_types_t                                                                                              
        {                                                                                                             
            struct u4_descriptor_t                                                                                    
            {                                                                                                         
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
                //                                                                                                    
                _m02 struct wdf::usb_configuration_descriptor_t* configuration_descriptor;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ConfigurationDescriptor
                _m03 struct wdf::usb_interface_descriptor_t**    interface_descriptors;                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterfaceDescriptors
                _m04 uint32_t                                    num_interface_descriptors;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumInterfaceDescriptors
                                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.Descriptor.$", 0x18, true, 0x7b783dbc4f349a18 );                                                 
                SDK_FIXED_SIZE( u4_descriptor_t, 0x18 );                                                              
            };                                                                                                        
                                                                                                                      
            struct u8_urb_t                                                                                           
            {                                                                                                         
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
                //                                                                                                    
                _m06 struct wdf::urb_t* urb;                                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Urb
                                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.Urb.$", 0x8, true, 0x74422aeef4068fcf );                           
                SDK_FIXED_SIZE( u8_urb_t, 0x8 );                                                                      
            };                                                                                                        
                                                                                                                      
            struct u12_single_interface_t                                                                             
            {                                                                                                         
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
                //                                                                                                    
                _m08 uint8_t                        number_configured_pipes;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberConfiguredPipes
                _m09 struct wdf::wdfusbinterface_t* configured_usb_interface;                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConfiguredUsbInterface
                                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.SingleInterface.$", 0x10, true, 0xe12cf29b43f86dc5 );                                                
                SDK_FIXED_SIZE( u12_single_interface_t, 0x10 );                                                       
            };                                                                                                        
                                                                                                                      
            struct u16_multi_interface_t                                                                              
            {                                                                                                         
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
                //                                                                                                    
                _m11 uint8_t                                   number_interfaces;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberInterfaces
                _m12 struct wdf::usb_interface_setting_pair_t* pairs;                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Pairs
                _m13 uint8_t                                   number_of_configured_interfaces;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfConfiguredInterfaces
                                                                                                                      
                SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.MultiInterface.$", 0x18, true, 0x726538aca34438c9 );                                                       
                SDK_FIXED_SIZE( u16_multi_interface_t, 0x18 );                                                        
            };                                                                                                        
                                                                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                                                                        
            _m05 u4_descriptor_t                                                               descriptor;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Descriptor
            _m07 u8_urb_t                                                                      urb;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Urb
            _m10 u12_single_interface_t                                                        single_interface;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SingleInterface
            _m14 u16_multi_interface_t                                                         multi_interface;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MultiInterface
                                                                                                                      
            SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.$", 0x18, true, 0x3a5374bdb576171d );                       
            SDK_FIXED_SIZE( u0_types_t, 0x18 );                                                                       
        };                                                                                                            
                                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                                            
        _m00 uint32_t                                                                                           size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum wdf::usb_target_device_select_config_type_t                                                   type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m15 u0_types_t                                                                                         types;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Types
                                                                                                                      
        SDK_MAGIC_PROPERTIES( "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.$", 0x20, true, 0xdee3da7358c3d0da );             
        SDK_FIXED_SIZE( usb_device_select_config_params_t, 0x20 );                                                    
    };                                                                                                                
};
#include "magic/usb_device_select_config_params_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_select_config_params_t::u0_types_t::u4_descriptor_t, 0x18 );
SDK_VERIFY( struct wdf::usb_device_select_config_params_t::u0_types_t::u8_urb_t, 0x8 );
SDK_VERIFY( struct wdf::usb_device_select_config_params_t::u0_types_t::u12_single_interface_t, 0x10 );
SDK_VERIFY( struct wdf::usb_device_select_config_params_t::u0_types_t::u16_multi_interface_t, 0x18 );
SDK_VERIFY( union wdf::usb_device_select_config_params_t::u0_types_t, 0x18 );
SDK_VERIFY( struct wdf::usb_device_select_config_params_t, 0x20 );
