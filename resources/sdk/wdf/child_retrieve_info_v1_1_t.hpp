#pragma once
#include <sdkgen/support_library.hpp>
#include "child_list_retrieve_device_status_t.hpp"

#include "magic/child_retrieve_info_v1_1_t.start.hpp"
namespace wdf
{
    struct wdfchildlist_t;
    struct child_address_description_header_v1_1_t;
    struct child_identification_description_header_t;
    struct child_identification_description_header_v1_1_t;

    // [struct _WDF_CHILD_RETRIEVE_INFO_V1_1]
    // => Windows 10 v1607
    //
    struct child_retrieve_info_v1_1_t                                                                               
    {                                                                                                               
        using pwdf_child_identification_description_header_v1_1_t =     struct wdf::child_identification_description_header_v1_1_t*;                                                  
        using identification_description_t =                            pwdf_child_identification_description_header_v1_1_t ;                                                  
        using pwdf_child_address_description_header_v1_1_t =            struct wdf::child_address_description_header_v1_1_t*;                                                  
        using pfn_wdf_child_list_identification_description_compare_t = sdk::function<uint8_t(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_identification_description_header_t*)>*;                                                  
        using evt_child_list_identification_description_compare_t =     pfn_wdf_child_list_identification_description_compare_t ;                                                  
                                                                                                                    
        // Windows 10 v1607                                                                                         
        //                                                                                                          
        _m00 uint32_t                                             size;                                               //{ +0x0000    } | .Size
        _m01 identification_description_t                         identification_description;                         //{ +0x0008    } | .IdentificationDescription
        _m02 pwdf_child_address_description_header_v1_1_t         address_description;                                //{ +0x0010    } | .AddressDescription
        _m03 enum wdf::child_list_retrieve_device_status_t        status;                                             //{ +0x0018    } | .Status
        _m04 evt_child_list_identification_description_compare_t  evt_child_list_identification_description_compare;  //{ +0x0020    } | .EvtChildListIdentificationDescriptionCompare
                                                                                                                    
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_RETRIEVE_INFO_V1_1.$", 0x0, false, 0xa89724597ddceced );                                                  
        SDK_FIXED_SIZE( child_retrieve_info_v1_1_t, 0x28 );                                                         
    };                                                                                                              
};
#include "magic/child_retrieve_info_v1_1_t.end.hpp"
SDK_VERIFY( struct wdf::child_retrieve_info_v1_1_t, 0x28 );
