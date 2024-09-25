#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_list_config_v1_7_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfchildlist_t;
    struct wdfdevice_init_t;
    struct child_address_description_header_t;
    struct child_identification_description_header_t;

    // [struct _WDF_CHILD_LIST_CONFIG_V1_7]
    // => Windows 10 v1607
    //
    struct child_list_config_v1_7_t                                                                                     
    {                                                                                                                   
        using pfn_wdf_child_list_create_device_t =                        sdk::function<int32_t(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::wdfdevice_init_t*)>*;                                                    
        using pfn_wdf_child_list_scan_for_children_t =                    sdk::function<void(struct wdf::wdfchildlist_t*)>*;                                                    
        using pfn_wdf_child_list_identification_description_copy_t =      sdk::function<void(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_identification_description_header_t*)>*;                                                    
        using evt_child_list_identification_description_copy_t =          pfn_wdf_child_list_identification_description_copy_t ;                                                    
        using pfn_wdf_child_list_identification_description_duplicate_t = sdk::function<int32_t(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_identification_description_header_t*)>*;                                                    
        using evt_child_list_identification_description_duplicate_t =     pfn_wdf_child_list_identification_description_duplicate_t ;                                                    
        using pfn_wdf_child_list_identification_description_cleanup_t =   sdk::function<void(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*)>*;                                                    
        using evt_child_list_identification_description_cleanup_t =       pfn_wdf_child_list_identification_description_cleanup_t ;                                                    
        using pfn_wdf_child_list_identification_description_compare_t =   sdk::function<uint8_t(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_identification_description_header_t*)>*;                                                    
        using evt_child_list_identification_description_compare_t =       pfn_wdf_child_list_identification_description_compare_t ;                                                    
        using pfn_wdf_child_list_address_description_copy_t =             sdk::function<void(struct wdf::wdfchildlist_t*, struct wdf::child_address_description_header_t*, struct wdf::child_address_description_header_t*)>*;                                                    
        using pfn_wdf_child_list_address_description_duplicate_t =        sdk::function<int32_t(struct wdf::wdfchildlist_t*, struct wdf::child_address_description_header_t*, struct wdf::child_address_description_header_t*)>*;                                                    
        using evt_child_list_address_description_duplicate_t =            pfn_wdf_child_list_address_description_duplicate_t ;                                                    
        using pfn_wdf_child_list_address_description_cleanup_t =          sdk::function<void(struct wdf::wdfchildlist_t*, struct wdf::child_address_description_header_t*)>*;                                                    
        using evt_child_list_address_description_cleanup_t =              pfn_wdf_child_list_address_description_cleanup_t ;                                                    
        using pfn_wdf_child_list_device_reenumerated_t =                  sdk::function<uint8_t(struct wdf::wdfchildlist_t*, struct wdf::wdfdevice_t*, struct wdf::child_address_description_header_t*, struct wdf::child_address_description_header_t*)>*;                                                    
                                                                                                                        
        // Windows 10 v1607                                                                                             
        //                                                                                                              
        _m00 uint32_t                                               size;                                                 //{ +0x0000    } | .Size
        _m01 uint32_t                                               identification_description_size;                      //{ +0x0004    } | .IdentificationDescriptionSize
        _m02 uint32_t                                               address_description_size;                             //{ +0x0008    } | .AddressDescriptionSize
        _m03 pfn_wdf_child_list_create_device_t                     evt_child_list_create_device;                         //{ +0x0010    } | .EvtChildListCreateDevice
        _m04 pfn_wdf_child_list_scan_for_children_t                 evt_child_list_scan_for_children;                     //{ +0x0018    } | .EvtChildListScanForChildren
        _m05 evt_child_list_identification_description_copy_t       evt_child_list_identification_description_copy;       //{ +0x0020    } | .EvtChildListIdentificationDescriptionCopy
        _m06 evt_child_list_identification_description_duplicate_t  evt_child_list_identification_description_duplicate;  //{ +0x0028    } | .EvtChildListIdentificationDescriptionDuplicate
        _m07 evt_child_list_identification_description_cleanup_t    evt_child_list_identification_description_cleanup;    //{ +0x0030    } | .EvtChildListIdentificationDescriptionCleanup
        _m08 evt_child_list_identification_description_compare_t    evt_child_list_identification_description_compare;    //{ +0x0038    } | .EvtChildListIdentificationDescriptionCompare
        _m09 pfn_wdf_child_list_address_description_copy_t          evt_child_list_address_description_copy;              //{ +0x0040    } | .EvtChildListAddressDescriptionCopy
        _m10 evt_child_list_address_description_duplicate_t         evt_child_list_address_description_duplicate;         //{ +0x0048    } | .EvtChildListAddressDescriptionDuplicate
        _m11 evt_child_list_address_description_cleanup_t           evt_child_list_address_description_cleanup;           //{ +0x0050    } | .EvtChildListAddressDescriptionCleanup
        _m12 pfn_wdf_child_list_device_reenumerated_t               evt_child_list_device_reenumerated;                   //{ +0x0058    } | .EvtChildListDeviceReenumerated
                                                                                                                        
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_LIST_CONFIG_V1_7.$", 0x0, false, 0x1447e305c0350030 );                                                    
        SDK_FIXED_SIZE( child_list_config_v1_7_t, 0x60 );                                                               
    };                                                                                                                  
};
#include "magic/child_list_config_v1_7_t.end.hpp"
SDK_VERIFY( struct wdf::child_list_config_v1_7_t, 0x60 );
