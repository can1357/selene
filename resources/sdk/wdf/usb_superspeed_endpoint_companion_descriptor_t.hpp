#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_superspeed_endpoint_companion_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_superspeed_endpoint_companion_descriptor_t                   
    {                                                                       
        union u0_bm_attributes_t                                            
        {                                                                   
            struct u4_bulk_t                                                
            {                                                               
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
                //                                                          
                _m04 uint5_t max_streams;                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MaxStreams
                                                                            
                SDK_MAGIC_PROPERTIES( "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.Bulk.$", 0x1, true, 0xbab6c2d2f071860e );                                             
                SDK_FIXED_SIZE( u4_bulk_t, 0x1 );                                             
            };                                                              
                                                                            
            struct u8_isochronous_t                                         
            {                                                               
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
                //                                                          
                _m06 uint2_t mult;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Mult
                _m07 uint1_t ssp_companion;                                   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .SspCompanion
                                                                            
                SDK_MAGIC_PROPERTIES( "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.Isochronous.$", 0x1, true, 0x30164d76bf41fbab );                                               
                SDK_FIXED_SIZE( u8_isochronous_t, 0x1 );                                               
            };                                                              
                                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                              
            _m03 uint8_t                   as_uchar;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUchar
            _m05 u4_bulk_t                 bulk;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bulk
            _m08 u8_isochronous_t          isochronous;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Isochronous
                                                                            
            SDK_MAGIC_PROPERTIES( "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.bmAttributes.$", 0x1, true, 0x9d43c9fcb9191940 );                                 
            SDK_FIXED_SIZE( u0_bm_attributes_t, 0x1 );                                 
        };                                                                  
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                  
        _m00 uint8_t                                   b_length;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                                   b_descriptor_type;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                                   b_max_burst;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bMaxBurst
        _m09 u0_bm_attributes_t                        bm_attributes;         //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bmAttributes
        _m10 uint16_t                                  w_bytes_per_interval;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wBytesPerInterval
                                                                            
        SDK_MAGIC_PROPERTIES( "_USB_SUPERSPEED_ENDPOINT_COMPANION_DESCRIPTOR.$", 0x6, true, 0x96d662aca2db2924 );                     
        SDK_FIXED_SIZE( usb_superspeed_endpoint_companion_descriptor_t, 0x6 );                     
    };                                                                      
};
#include "magic/usb_superspeed_endpoint_companion_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_superspeed_endpoint_companion_descriptor_t::u0_bm_attributes_t::u4_bulk_t, 0x1 );
SDK_VERIFY( struct wdf::usb_superspeed_endpoint_companion_descriptor_t::u0_bm_attributes_t::u8_isochronous_t, 0x1 );
SDK_VERIFY( union wdf::usb_superspeed_endpoint_companion_descriptor_t::u0_bm_attributes_t, 0x1 );
SDK_VERIFY( struct wdf::usb_superspeed_endpoint_companion_descriptor_t, 0x6 );
