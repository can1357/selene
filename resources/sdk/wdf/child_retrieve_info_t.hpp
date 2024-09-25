#pragma once
#include <sdkgen/support_library.hpp>
#include "child_list_retrieve_device_status_t.hpp"

#include "magic/child_retrieve_info_t.start.hpp"
namespace wdf
{
    struct wdfchildlist_t;
    struct child_address_description_header_t;
    struct child_identification_description_header_t;

    // [struct _WDF_CHILD_RETRIEVE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct child_retrieve_info_t                                                                                    
    {                                                                                                               
        using pwdf_child_identification_description_header_t =          struct wdf::child_identification_description_header_t*;                                                  
        using pfn_wdf_child_list_identification_description_compare_t = sdk::function<uint8_t(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_identification_description_header_t*)>*;                                                  
        using evt_child_list_identification_description_compare_t =     pfn_wdf_child_list_identification_description_compare_t ;                                                  
                                                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
        //                                                                                                          
        _m00 uint32_t                                             size;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 pwdf_child_identification_description_header_t       identification_description;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .IdentificationDescription
        _m02 struct wdf::child_address_description_header_t*      address_description;                                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AddressDescription
        _m03 enum wdf::child_list_retrieve_device_status_t        status;                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Status
        _m04 evt_child_list_identification_description_compare_t  evt_child_list_identification_description_compare;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EvtChildListIdentificationDescriptionCompare
                                                                                                                    
        SDK_NONVOL_PROPERTIES( "_WDF_CHILD_RETRIEVE_INFO.$", 0x28, true, 0xd018758cf1ca710f );                                                  
        SDK_FIXED_SIZE( child_retrieve_info_t, 0x28 );                                                              
    };                                                                                                              
};
#include "magic/child_retrieve_info_t.end.hpp"
SDK_VERIFY( struct wdf::child_retrieve_info_t, 0x28 );
