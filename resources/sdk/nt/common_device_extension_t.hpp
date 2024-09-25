#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "dictionary_t.hpp"
#include "npaged_lookaside_list_t.hpp"

#include "magic/common_device_extension_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct guidreginfo_t;
    struct device_object_t;
    struct class_dev_info_t;
    struct class_driver_extension_t;
    struct class_private_common_data_t;
    struct physical_device_extension_t;
    struct functional_device_extension_t;

    // [struct _COMMON_DEVICE_EXTENSION]
    // => WDK 10 (NV)
    //
    struct common_device_extension_t                                                      
    {                                                                                     
        using dispatch_table_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>**;                                  
                                                                                          
        // WDK 10                                                                         
        //                                                                                
        _m000 uint32_t                                  version;                            //{ +0x0000    } | .Version
        _m001 struct nt::device_object_t*               device_object;                      //{ +0x0008    } | .DeviceObject
        _m002 struct nt::device_object_t*               lower_device_object;                //{ +0x0010    } | .LowerDeviceObject
        _m003 struct nt::functional_device_extension_t* partition_zero_extension;           //{ +0x0018    } | .PartitionZeroExtension
        _m004 struct nt::class_driver_extension_t*      driver_extension;                   //{ +0x0020    } | .DriverExtension
        _m005 int32_t                                   remove_lock;                        //{ +0x0028    } | .RemoveLock
        _m006 struct nt::kevent_t                       remove_event;                       //{ +0x0030    } | .RemoveEvent
        _m007 uint64_t                                  remove_tracking_spinlock;           //{ +0x0048    } | .RemoveTrackingSpinlock
        _m008 void*                                     remove_tracking_list;               //{ +0x0050    } | .RemoveTrackingList
        _m009 int32_t                                   remove_tracking_untracked_count;    //{ +0x0058    } | .RemoveTrackingUntrackedCount
        _m010 void*                                     driver_data;                        //{ +0x0060    } | .DriverData
        _m011 uint1_t                                   is_fdo;                             //{ +0x0068@0  } | .IsFdo
        _m012 uint1_t                                   is_initialized;                     //{ +0x0068@1  } | .IsInitialized
        _m013 uint1_t                                   is_srb_lookaside_list_initialized;  //{ +0x0068@2  } | .IsSrbLookasideListInitialized
        _m014 uint8_t                                   previous_state;                     //{ +0x0069    } | .PreviousState
        _m015 uint8_t                                   current_state;                      //{ +0x006a    } | .CurrentState
        _m016 uint32_t                                  is_removed;                         //{ +0x006c    } | .IsRemoved
        _m017 nt::unicode_view                          device_name;                        //{ +0x0070    } | .DeviceName
        _m018 struct nt::physical_device_extension_t*   child_list;                         //{ +0x0080    } | .ChildList
        _m019 uint32_t                                  partition_number;                   //{ +0x0088    } | .PartitionNumber
        _m020 int64_t                                   partition_length;                   //{ +0x0090    } | .PartitionLength
        _m021 int64_t                                   starting_offset;                    //{ +0x0098    } | .StartingOffset
        _m022 struct nt::class_dev_info_t*              dev_info;                           //{ +0x00a0    } | .DevInfo
        _m023 uint32_t                                  paging_path_count;                  //{ +0x00a8    } | .PagingPathCount
        _m024 uint32_t                                  dump_path_count;                    //{ +0x00ac    } | .DumpPathCount
        _m025 uint32_t                                  hibernation_path_count;             //{ +0x00b0    } | .HibernationPathCount
        _m026 struct nt::kevent_t                       path_count_event;                   //{ +0x00b8    } | .PathCountEvent
        _m027 struct nt::npaged_lookaside_list_t        srb_lookaside_list;                 //{ +0x0100    } | .SrbLookasideList
        _m028 nt::unicode_view                          mounted_device_interface_name;      //{ +0x0180    } | .MountedDeviceInterfaceName
        _m029 uint32_t                                  guid_count;                         //{ +0x0190    } | .GuidCount
        _m030 struct nt::guidreginfo_t*                 guid_reg_info;                      //{ +0x0198    } | .GuidRegInfo
        _m031 struct nt::dictionary_t                   file_object_dictionary;             //{ +0x01a0    } | .FileObjectDictionary
        _m032 struct nt::class_private_common_data_t*   private_common_data;                //{ +0x01b8    } | .PrivateCommonData
        _m033 dispatch_table_t                          dispatch_table;                     //{ +0x01c0    } | .DispatchTable
                                                                                          
        SDK_NONVOL_PROPERTIES( "_COMMON_DEVICE_EXTENSION.$", 0x0, false, 0x890c98d48f57e0fb );                                  
        SDK_FIXED_SIZE( common_device_extension_t, 0x200 );                                  
    };                                                                                    
};
#include "magic/common_device_extension_t.end.hpp"
SDK_VERIFY( struct nt::common_device_extension_t, 0x200 );
