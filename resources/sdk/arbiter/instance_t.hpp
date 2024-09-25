#pragma once
#include <sdkgen/support_library.hpp>
#include "ordering_list_t.hpp"

namespace cm  { struct partial_resource_descriptor_t; }
namespace cm  { struct resource_list_t;               }
namespace io  { struct resource_descriptor_t;         }
namespace nt  { struct device_object_t;               }
namespace nt  { struct kevent_t;                      }
namespace rtl { struct range_list_t;                  }
namespace rtl { struct range_t;                       }

#include "magic/instance_t.start.hpp"
namespace arbiter
{
    struct instance_t;
    struct interface_t;
    struct allocation_state_t;
    struct add_reserved_parameters_t;
    struct query_conflict_parameters_t;
    struct boot_allocation_parameters_t;
    struct query_arbitrate_parameters_t;
    struct test_allocation_parameters_t;
    struct retest_allocation_parameters_t;

    // [struct _ARBITER_INSTANCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct instance_t                                                       
    {                                                                       
        using unpack_requirement_t =        sdk::function<int32_t(struct io::resource_descriptor_t*, uint64_t*, uint64_t*, uint64_t*, uint64_t*)>*;                          
        using pack_resource_t =             sdk::function<int32_t(struct io::resource_descriptor_t*, uint64_t, struct cm::partial_resource_descriptor_t*)>*;                          
        using unpack_resource_t =           sdk::function<int32_t(struct cm::partial_resource_descriptor_t*, uint64_t*, uint64_t*)>*;                          
        using score_requirement_t =         sdk::function<int32_t(struct io::resource_descriptor_t*)>*;                          
        using test_allocation_t =           sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::test_allocation_parameters_t*)>*;                          
        using retest_allocation_t =         sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::retest_allocation_parameters_t*)>*;                          
        using commit_allocation_t =         sdk::function<int32_t(struct arbiter::instance_t*)>*;                          
        using rollback_allocation_t =       sdk::function<int32_t(struct arbiter::instance_t*)>*;                          
        using boot_allocation_t =           sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::boot_allocation_parameters_t*)>*;                          
        using query_arbitrate_t =           sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::query_arbitrate_parameters_t*)>*;                          
        using query_conflict_t =            sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::query_conflict_parameters_t*)>*;                          
        using add_reserved_t =              sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::add_reserved_parameters_t*)>*;                          
        using start_arbiter_t =             sdk::function<int32_t(struct arbiter::instance_t*, struct cm::resource_list_t*)>*;                          
        using preprocess_entry_t =          sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*;                          
        using allocate_entry_t =            sdk::function<int32_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*;                          
        using get_next_allocation_range_t = sdk::function<uint8_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*;                          
        using find_suitable_range_t =       sdk::function<uint8_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*;                          
        using add_allocation_t =            sdk::function<void(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*;                          
        using backtrack_allocation_t =      sdk::function<void(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*;                          
        using override_conflict_t =         sdk::function<uint8_t(struct arbiter::instance_t*, struct arbiter::allocation_state_t*)>*;                          
        using initialize_range_list_t =     sdk::function<int32_t(struct arbiter::instance_t*, uint32_t, struct cm::partial_resource_descriptor_t*, struct rtl::range_list_t*)>*;                          
        using conflict_callback_t =         sdk::function<uint8_t(void*, struct rtl::range_t*)>*;                          
        using delete_owner_ranges_t =       sdk::function<int32_t(struct arbiter::instance_t*, void*)>*;                          
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m000 uint32_t                            signature;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m001 struct nt::kevent_t*                mutex_event;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MutexEvent
        _m002 wchar_t*                            name;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
        _m003 wchar_t*                            ordering_name;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OrderingName
        _m004 int32_t                             resource_type;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ResourceType
        _m005 struct rtl::range_list_t*           allocation;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Allocation
        _m006 struct rtl::range_list_t*           possible_allocation;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PossibleAllocation
        _m007 struct arbiter::ordering_list_t     ordering_list;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OrderingList
        _m008 struct arbiter::ordering_list_t     reserved_list;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ReservedList
        _m009 int32_t                             reference_count;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ReferenceCount
        _m010 struct arbiter::interface_t*        interface;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Interface
        _m011 uint32_t                            allocation_stack_max_size;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .AllocationStackMaxSize
        _m012 struct arbiter::allocation_state_t* allocation_stack;           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .AllocationStack
        _m013 unpack_requirement_t                unpack_requirement;         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .UnpackRequirement
        _m014 pack_resource_t                     pack_resource;              //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PackResource
        _m015 unpack_resource_t                   unpack_resource;            //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .UnpackResource
        _m016 score_requirement_t                 score_requirement;          //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ScoreRequirement
        _m017 test_allocation_t                   test_allocation;            //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .TestAllocation
        _m018 retest_allocation_t                 retest_allocation;          //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .RetestAllocation
        _m019 commit_allocation_t                 commit_allocation;          //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .CommitAllocation
        _m020 rollback_allocation_t               rollback_allocation;        //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .RollbackAllocation
        _m021 boot_allocation_t                   boot_allocation;            //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .BootAllocation
        _m022 query_arbitrate_t                   query_arbitrate;            //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .QueryArbitrate
        _m023 query_conflict_t                    query_conflict;             //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .QueryConflict
        _m024 add_reserved_t                      add_reserved;               //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .AddReserved
        _m025 start_arbiter_t                     start_arbiter;              //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .StartArbiter
        _m026 preprocess_entry_t                  preprocess_entry;           //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .PreprocessEntry
        _m027 allocate_entry_t                    allocate_entry;             //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .AllocateEntry
        _m028 get_next_allocation_range_t         get_next_allocation_range;  //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .GetNextAllocationRange
        _m029 find_suitable_range_t               find_suitable_range;        //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .FindSuitableRange
        _m030 add_allocation_t                    add_allocation;             //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .AddAllocation
        _m031 backtrack_allocation_t              backtrack_allocation;       //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .BacktrackAllocation
        _m032 override_conflict_t                 override_conflict;          //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .OverrideConflict
        _m033 initialize_range_list_t             initialize_range_list;      //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .InitializeRangeList
        _m034 uint8_t                             transaction_in_progress;    //{ +0x0120    +0x0128    +0x0128    +0x0128    } | .TransactionInProgress
        _m035 struct nt::kevent_t*                transaction_event;          //{ +0x0128    +0x0130    +0x0130    +0x0130    } | .TransactionEvent
        _m036 void*                               extension;                  //{ +0x0130    +0x0138    +0x0138    +0x0138    } | .Extension
        _m037 struct nt::device_object_t*         bus_device_object;          //{ +0x0138    +0x0140    +0x0140    +0x0140    } | .BusDeviceObject
        _m038 void*                               conflict_callback_context;  //{ +0x0140    +0x0148    +0x0148    +0x0148    } | .ConflictCallbackContext
        _m039 conflict_callback_t                 conflict_callback;          //{ +0x0148    +0x0150    +0x0150    +0x0150    } | .ConflictCallback
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m040 delete_owner_ranges_t               delete_owner_ranges;        //{ +0x0120    +0x0120    +0x0120    } | .DeleteOwnerRanges
                                                                            
        SDK_MAGIC_PROPERTIES( "_ARBITER_INSTANCE.$", 0x158, true, 0xd9a117014d6325ac );                          
        SDK_DYNAMIC_SIZE( instance_t );                                     
    };                                                                      
};
#include "magic/instance_t.end.hpp"
