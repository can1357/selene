#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_target_device_select_setting_type_t.hpp"

#include "magic/usb_interface_select_setting_params_t.start.hpp"
namespace wdf
{
    struct urb_t;
    struct usb_interface_descriptor_t;

    // [struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_interface_select_setting_params_t                                                   
    {                                                                                              
        union u0_types_t                                                                           
        {                                                                                          
            struct u4_descriptor_t                                                                 
            {                                                                                      
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
                //                                                                                 
                _m02 struct wdf::usb_interface_descriptor_t* interface_descriptor;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceDescriptor
                                                                                                   
                SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Descriptor.$", 0x8, true, 0xd6dd3e848bf020e6 );                                      
                SDK_FIXED_SIZE( u4_descriptor_t, 0x8 );                                            
            };                                                                                     
                                                                                                   
            struct u8_interface_t                                                                  
            {                                                                                      
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
                //                                                                                 
                _m04 uint8_t setting_index;                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SettingIndex
                                                                                                   
                SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Interface.$", 0x1, true, 0x6de7b8c9be9760be );                               
                SDK_FIXED_SIZE( u8_interface_t, 0x1 );                                             
            };                                                                                     
                                                                                                   
            struct u12_urb_t                                                                       
            {                                                                                      
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
                //                                                                                 
                _m06 struct wdf::urb_t* urb;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Urb
                                                                                                   
                SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Urb.$", 0x8, true, 0x1bb61690410ca91c );                     
                SDK_FIXED_SIZE( u12_urb_t, 0x8 );                                                  
            };                                                                                     
                                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
            //                                                                                     
            _m03 u4_descriptor_t                                                  descriptor;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Descriptor
            _m05 u8_interface_t                                                   interface;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Interface
            _m07 u12_urb_t                                                        urb;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Urb
                                                                                                   
            SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.$", 0x8, true, 0xf27daed5668bb586 );                 
            SDK_FIXED_SIZE( u0_types_t, 0x8 );                                                     
        };                                                                                         
                                                                                                   
        using wdf_usb_target_device_select_setting_type_t = enum wdf::usb_target_device_select_setting_type_t;      
                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                                         
        _m00 uint32_t                                                                        size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 wdf_usb_target_device_select_setting_type_t                                     type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m08 u0_types_t                                                                      types;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Types
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.$", 0x10, true, 0xa42cf121e14178d );      
        SDK_FIXED_SIZE( usb_interface_select_setting_params_t, 0x10 );                             
    };                                                                                             
};
#include "magic/usb_interface_select_setting_params_t.end.hpp"
SDK_VERIFY( struct wdf::usb_interface_select_setting_params_t::u0_types_t::u4_descriptor_t, 0x8 );
SDK_VERIFY( struct wdf::usb_interface_select_setting_params_t::u0_types_t::u8_interface_t, 0x1 );
SDK_VERIFY( struct wdf::usb_interface_select_setting_params_t::u0_types_t::u12_urb_t, 0x8 );
SDK_VERIFY( union wdf::usb_interface_select_setting_params_t::u0_types_t, 0x8 );
SDK_VERIFY( struct wdf::usb_interface_select_setting_params_t, 0x10 );
