#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usbc_function_descriptor_t.start.hpp"
namespace wdf
{
    struct usb_interface_descriptor_t;

    // [struct _USBC_FUNCTION_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbc_function_descriptor_t                                           
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                      
        _m00 uint8_t                                  function_number;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FunctionNumber
        _m01 uint8_t                                  number_of_interfaces;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .NumberOfInterfaces
        _m02 struct wdf::usb_interface_descriptor_t** interface_descriptor_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterfaceDescriptorList
        _m03 nt::unicode_view                         hardware_id;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HardwareId
        _m04 nt::unicode_view                         compatible_id;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CompatibleId
        _m05 nt::unicode_view                         function_description;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FunctionDescription
        _m06 uint32_t                                 function_flags;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .FunctionFlags
                                                                                
        SDK_MAGIC_PROPERTIES( "_USBC_FUNCTION_DESCRIPTOR.$", 0x50, true, 0x1d7c7489bc1e4283 );                          
        SDK_FIXED_SIZE( usbc_function_descriptor_t, 0x50 );                          
    };                                                                          
};
#include "magic/usbc_function_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usbc_function_descriptor_t, 0x50 );
