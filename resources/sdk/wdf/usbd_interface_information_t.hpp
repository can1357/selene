#pragma once
#include <sdkgen/support_library.hpp>
#include "usbd_pipe_information_t.hpp"

#include "magic/usbd_interface_information_t.start.hpp"
namespace wdf
{
    // [struct _USBD_INTERFACE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_interface_information_t 
    {                                   
        using pipes_t = sdk::array<struct wdf::usbd_pipe_information_t, 1>;                  
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t length;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint8_t  interface_number;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .InterfaceNumber
        _m02 uint8_t  alternate_setting;  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .AlternateSetting
        _m03 uint8_t  _class;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Class
        _m04 uint8_t  sub_class;          //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .SubClass
        _m05 uint8_t  protocol;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Protocol
        _m06 void*    interface_handle;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterfaceHandle
        _m07 uint32_t number_of_pipes;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfPipes
        _m08 pipes_t  pipes;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Pipes
                                        
        SDK_MAGIC_PROPERTIES( "_USBD_INTERFACE_INFORMATION.$", 0x30, true, 0xd789b3cefa462525 );                  
        SDK_FIXED_SIZE( usbd_interface_information_t, 0x30 );                  
    };                                  
};
#include "magic/usbd_interface_information_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_interface_information_t, 0x30 );
