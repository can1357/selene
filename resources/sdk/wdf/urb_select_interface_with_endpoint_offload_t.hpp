#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "usbd_interface_information_t.hpp"

#include "magic/urb_select_interface_with_endpoint_offload_t.start.hpp"
namespace wdf
{
    // [struct _URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_select_interface_with_endpoint_offload_t                                   
    {                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                
        _m00 struct wdf::urb_header_t                 hdr;                                  //{ +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 void*                                    configuration_handle;                 //{ +0x0018    +0x0018    +0x0018    } | .ConfigurationHandle
        _m02 uint32_t                                 number_of_endpoints_to_offload;       //{ +0x0020    +0x0020    +0x0020    } | .NumberOfEndpointsToOffload
        _m03 void*                                    internal_endpoint_information_array;  //{ +0x0028    +0x0028    +0x0028    } | .InternalEndpointInformationArray
        _m04 struct wdf::usbd_interface_information_t interface;                            //{ +0x0030    +0x0030    +0x0030    } | .Interface
                                                                                          
        SDK_MAGIC_PROPERTIES( "_URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD.$", 0x60, true, 0xff0faf92cd50e48e );                                    
        SDK_FIXED_SIZE( urb_select_interface_with_endpoint_offload_t, 0x60 );                                    
    };                                                                                    
};
#include "magic/urb_select_interface_with_endpoint_offload_t.end.hpp"
SDK_VERIFY( struct wdf::urb_select_interface_with_endpoint_offload_t, 0x60 );
