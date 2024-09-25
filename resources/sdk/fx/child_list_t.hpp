#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../mx/event_t.hpp"
#include "child_list_state_t.hpp"
#include "transactioned_entry_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "child_list_create_device_callback_t.hpp"
#include "child_list_scan_for_children_callback_t.hpp"

namespace wdf { struct child_address_description_header_t;        }
namespace wdf { struct child_identification_description_header_t; }
namespace wdf { struct wdfchildlist_t;                            }
namespace wdf { struct wdfdevice_t;                               }

#include "magic/child_list_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class device_base_t;
    struct driver_globals_t;

    // [class FxChildList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class child_list_t                                                                                  
    {                                                                                                   
        struct u0_m_object_flags_by_name_t                                                              
        {                                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
            //                                                                                          
            _m05 uint1_t passive_callbacks;                                                               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                                   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                                 //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                                            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                                       //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                                              //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                                     //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                                        
            SDK_MAGIC_PROPERTIES( "FxChildList.m_ObjectFlagsByName.$", 0x2, true, 0x20d2cdd97ea77c47 );                                                                
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                                
        };                                                                                              
                                                                                                        
        using m_evt_scan_for_children_t =                                 struct fx::child_list_scan_for_children_callback_t;                                           
        using pfn_wdf_child_list_identification_description_copy_t =      sdk::function<void(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_identification_description_header_t*)>*;                                           
        using m_evt_identification_description_copy_t =                   pfn_wdf_child_list_identification_description_copy_t ;                                           
        using pfn_wdf_child_list_identification_description_duplicate_t = sdk::function<int32_t(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_identification_description_header_t*)>*;                                           
        using m_evt_identification_description_duplicate_t =              pfn_wdf_child_list_identification_description_duplicate_t ;                                           
        using pfn_wdf_child_list_identification_description_cleanup_t =   sdk::function<void(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*)>*;                                           
        using m_evt_identification_description_cleanup_t =                pfn_wdf_child_list_identification_description_cleanup_t ;                                           
        using pfn_wdf_child_list_identification_description_compare_t =   sdk::function<uint8_t(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::child_identification_description_header_t*)>*;                                           
        using m_evt_identification_description_compare_t =                pfn_wdf_child_list_identification_description_compare_t ;                                           
        using pfn_wdf_child_list_address_description_copy_t =             sdk::function<void(struct wdf::wdfchildlist_t*, struct wdf::child_address_description_header_t*, struct wdf::child_address_description_header_t*)>*;                                           
        using pfn_wdf_child_list_address_description_duplicate_t =        sdk::function<int32_t(struct wdf::wdfchildlist_t*, struct wdf::child_address_description_header_t*, struct wdf::child_address_description_header_t*)>*;                                           
        using m_evt_address_description_duplicate_t =                     pfn_wdf_child_list_address_description_duplicate_t ;                                           
        using pfn_wdf_child_list_address_description_cleanup_t =          sdk::function<void(struct wdf::wdfchildlist_t*, struct wdf::child_address_description_header_t*)>*;                                           
        using m_evt_address_description_cleanup_t =                       pfn_wdf_child_list_address_description_cleanup_t ;                                           
        using pfn_wdf_child_list_device_reenumerated_t =                  sdk::function<uint8_t(struct wdf::wdfchildlist_t*, struct wdf::wdfdevice_t*, struct wdf::child_address_description_header_t*, struct wdf::child_address_description_header_t*)>*;                                           
                                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                              
        _m000 uint16_t                                       m_type;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                       m_object_size;                               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                        m_refcnt;                                    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*                   m_globals;                                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                       m_object_flags;                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t                    m_object_flags_by_name;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                       m_object_state;                              //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                               m_child_list_head;                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                               m_spin_lock;                                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                            m_parent_object;                             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                               m_child_entry;                               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t                 m_dispose_single_entry;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                       m_device_base;                               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                            m_device;                                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                               m_np_lock;                                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 struct fx::transactioned_entry_t               m_transaction_link;                          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_TransactionLink
        _m025 uint64_t                                       m_total_description_size;                    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_TotalDescriptionSize
        _m026 uint32_t                                       m_identification_description_size;           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_IdentificationDescriptionSize
        _m027 uint32_t                                       m_address_description_size;                  //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .m_AddressDescriptionSize
        _m028 struct fx::child_list_create_device_callback_t m_evt_create_device;                         //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .m_EvtCreateDevice
        _m029 m_evt_scan_for_children_t                      m_evt_scan_for_children;                     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_EvtScanForChildren
        _m030 m_evt_identification_description_copy_t        m_evt_identification_description_copy;       //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_EvtIdentificationDescriptionCopy
        _m031 m_evt_identification_description_duplicate_t   m_evt_identification_description_duplicate;  //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_EvtIdentificationDescriptionDuplicate
        _m032 m_evt_identification_description_cleanup_t     m_evt_identification_description_cleanup;    //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .m_EvtIdentificationDescriptionCleanup
        _m033 m_evt_identification_description_compare_t     m_evt_identification_description_compare;    //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_EvtIdentificationDescriptionCompare
        _m034 pfn_wdf_child_list_address_description_copy_t  m_evt_address_description_copy;              //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .m_EvtAddressDescriptionCopy
        _m035 m_evt_address_description_duplicate_t          m_evt_address_description_duplicate;         //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .m_EvtAddressDescriptionDuplicate
        _m036 m_evt_address_description_cleanup_t            m_evt_address_description_cleanup;           //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .m_EvtAddressDescriptionCleanup
        _m037 pfn_wdf_child_list_device_reenumerated_t       m_evt_child_list_device_reenumerated;        //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .m_EvtChildListDeviceReenumerated
        _m038 uint64_t                                       m_list_lock;                                 //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .m_ListLock
        _m039 nt::list_entry_t                               m_description_list_head;                     //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .m_DescriptionListHead
        _m040 nt::list_entry_t                               m_modification_list_head;                    //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_ModificationListHead
        _m041 enum fx::child_list_state_t                    m_state;                                     //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .m_State
        _m042 uint8_t                                        m_invalidation_needed;                       //{ +0x0134    +0x0134    +0x0134    +0x0134    } | .m_InvalidationNeeded
        _m043 uint8_t                                        m_static_list;                               //{ +0x0135    +0x0135    +0x0135    +0x0135    } | .m_StaticList
        _m044 uint8_t                                        m_is_added;                                  //{ +0x0136    +0x0136    +0x0136    +0x0136    } | .m_IsAdded
        _m045 uint8_t                                        m_enum_retries;                              //{ +0x0137    +0x0137    +0x0137    +0x0137    } | .m_EnumRetries
        _m046 uint32_t*                                      m_scan_tag;                                  //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .m_ScanTag
        _m047 uint32_t                                       m_scan_count;                                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .m_ScanCount
        _m048 class mx::event_t                              m_scan_event;                                //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .m_ScanEvent
                                                                                                        
        SDK_MAGIC_PROPERTIES( "FxChildList.$", 0x168, true, 0x74154773104b4c45 );                                           
        SDK_FIXED_SIZE( child_list_t, 0x168 );                                                          
    };                                                                                                  
};
#include "magic/child_list_t.end.hpp"
SDK_VERIFY( struct fx::child_list_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::child_list_t, 0x168 );
