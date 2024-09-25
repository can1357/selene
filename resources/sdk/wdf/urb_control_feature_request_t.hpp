#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "urb_hcd_area_t.hpp"

#include "magic/urb_control_feature_request_t.start.hpp"
namespace wdf
{
    struct urb_t;

    // [struct _URB_CONTROL_FEATURE_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_control_feature_request_t                 
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 struct wdf::urb_header_t   hdr;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 struct wdf::urb_t*         urb_link;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .UrbLink
        _m02 struct wdf::urb_hcd_area_t hca;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .hca
        _m03 uint16_t                   feature_selector;  //{ +0x0082    +0x0082    +0x0082    +0x0082    } | .FeatureSelector
        _m04 uint16_t                   index;             //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .Index
                                                         
        SDK_MAGIC_PROPERTIES( "_URB_CONTROL_FEATURE_REQUEST.$", 0x88, true, 0x126100931b8b01d5 );                 
        SDK_FIXED_SIZE( urb_control_feature_request_t, 0x88 );                 
    };                                                   
};
#include "magic/urb_control_feature_request_t.end.hpp"
SDK_VERIFY( struct wdf::urb_control_feature_request_t, 0x88 );
