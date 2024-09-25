#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_target_device_select_setting_type_t.hpp"

#include "magic/usb_interface_select_setting_params_v1_17_t.start.hpp"
namespace wdf
{
    struct urb_t;
    struct usb_interface_descriptor_t;

    // [struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17]
    // => Windows 10 v1607
    //
    struct usb_interface_select_setting_params_v1_17_t                                             
    {                                                                                              
        union u0_types_t                                                                           
        {                                                                                          
            struct u1_descriptor_t                                                                 
            {                                                                                      
                // Windows 10 v1607                                                                
                //                                                                                 
                _m02 struct wdf::usb_interface_descriptor_t* interface_descriptor;                   //{ +0x0000    } | .InterfaceDescriptor
                                                                                                   
                SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Descriptor.$", 0x0, false, 0x6cf108814a350c09 );                                      
                SDK_FIXED_SIZE( u1_descriptor_t, 0x8 );                                            
            };                                                                                     
                                                                                                   
            struct u2_interface_t                                                                  
            {                                                                                      
                // Windows 10 v1607                                                                
                //                                                                                 
                _m04 uint8_t setting_index;                                                          //{ +0x0000    } | .SettingIndex
                                                                                                   
                SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Interface.$", 0x0, false, 0xa648534574f16bbd );                               
                SDK_FIXED_SIZE( u2_interface_t, 0x1 );                                             
            };                                                                                     
                                                                                                   
            struct u3_urb_t                                                                        
            {                                                                                      
                // Windows 10 v1607                                                                
                //                                                                                 
                _m06 struct wdf::urb_t* urb;                                                         //{ +0x0000    } | .Urb
                                                                                                   
                SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Urb.$", 0x0, false, 0x3ae0a77764099e0e );                     
                SDK_FIXED_SIZE( u3_urb_t, 0x8 );                                                   
            };                                                                                     
                                                                                                   
            // Windows 10 v1607                                                                    
            //                                                                                     
            _m03 u1_descriptor_t                                                  descriptor;        //{ +0x0000    } | .Descriptor
            _m05 u2_interface_t                                                   interface;         //{ +0x0000    } | .Interface
            _m07 u3_urb_t                                                         urb;               //{ +0x0000    } | .Urb
                                                                                                   
            SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.$", 0x0, false, 0x8db8cbf81b437126 );                 
            SDK_FIXED_SIZE( u0_types_t, 0x8 );                                                     
        };                                                                                         
                                                                                                   
        using wdf_usb_target_device_select_setting_type_t = enum wdf::usb_target_device_select_setting_type_t;      
                                                                                                   
        // Windows 10 v1607                                                                        
        //                                                                                         
        _m00 uint32_t                                                                        size;   //{ +0x0000    } | .Size
        _m01 wdf_usb_target_device_select_setting_type_t                                     type;   //{ +0x0004    } | .Type
        _m08 u0_types_t                                                                      types;  //{ +0x0008    } | .Types
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.$", 0x0, false, 0xbaefbfd6d7e42ec4 );      
        SDK_FIXED_SIZE( usb_interface_select_setting_params_v1_17_t, 0x10 );                       
    };                                                                                             
};
#include "magic/usb_interface_select_setting_params_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::usb_interface_select_setting_params_v1_17_t::u0_types_t::u1_descriptor_t, 0x8 );
SDK_VERIFY( struct wdf::usb_interface_select_setting_params_v1_17_t::u0_types_t::u2_interface_t, 0x1 );
SDK_VERIFY( struct wdf::usb_interface_select_setting_params_v1_17_t::u0_types_t::u3_urb_t, 0x8 );
SDK_VERIFY( union wdf::usb_interface_select_setting_params_v1_17_t::u0_types_t, 0x8 );
SDK_VERIFY( struct wdf::usb_interface_select_setting_params_v1_17_t, 0x10 );
