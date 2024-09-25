#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/synch_counters_t.start.hpp"
namespace nt
{
    // [struct _SYNCH_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct synch_counters_t                                                           
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
        //                                                                            
        _m000 uint32_t spin_lock_acquire_count;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLockAcquireCount
        _m001 uint32_t spin_lock_contention_count;                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SpinLockContentionCount
        _m002 uint32_t spin_lock_spin_count;                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SpinLockSpinCount
        _m003 uint32_t ipi_send_request_broadcast_count;                                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IpiSendRequestBroadcastCount
        _m004 uint32_t ipi_send_request_routine_count;                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IpiSendRequestRoutineCount
        _m005 uint32_t ipi_send_software_interrupt_count;                               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .IpiSendSoftwareInterruptCount
        _m006 uint32_t ex_initialize_resource_count;                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ExInitializeResourceCount
        _m007 uint32_t ex_re_initialize_resource_count;                                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ExReInitializeResourceCount
        _m008 uint32_t ex_delete_resource_count;                                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExDeleteResourceCount
        _m009 uint32_t executive_resource_acquires_count;                               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ExecutiveResourceAcquiresCount
        _m010 uint32_t executive_resource_contentions_count;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ExecutiveResourceContentionsCount
        _m011 uint32_t executive_resource_release_exclusive_count;                      //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ExecutiveResourceReleaseExclusiveCount
        _m012 uint32_t executive_resource_release_shared_count;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ExecutiveResourceReleaseSharedCount
        _m013 uint32_t executive_resource_converts_count;                               //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ExecutiveResourceConvertsCount
        _m014 uint32_t ex_acq_res_exclusive_attempts;                                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ExAcqResExclusiveAttempts
        _m015 uint32_t ex_acq_res_exclusive_acquires_exclusive;                         //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ExAcqResExclusiveAcquiresExclusive
        _m016 uint32_t ex_acq_res_exclusive_acquires_exclusive_recursive;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ExAcqResExclusiveAcquiresExclusiveRecursive
        _m017 uint32_t ex_acq_res_exclusive_waits;                                      //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ExAcqResExclusiveWaits
        _m018 uint32_t ex_acq_res_exclusive_not_acquires;                               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ExAcqResExclusiveNotAcquires
        _m019 uint32_t ex_acq_res_shared_attempts;                                      //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ExAcqResSharedAttempts
        _m020 uint32_t ex_acq_res_shared_acquires_exclusive;                            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ExAcqResSharedAcquiresExclusive
        _m021 uint32_t ex_acq_res_shared_acquires_shared;                               //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ExAcqResSharedAcquiresShared
        _m022 uint32_t ex_acq_res_shared_acquires_shared_recursive;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ExAcqResSharedAcquiresSharedRecursive
        _m023 uint32_t ex_acq_res_shared_waits;                                         //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .ExAcqResSharedWaits
        _m024 uint32_t ex_acq_res_shared_not_acquires;                                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ExAcqResSharedNotAcquires
        _m025 uint32_t ex_acq_res_shared_starve_exclusive_attempts;                     //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .ExAcqResSharedStarveExclusiveAttempts
        _m026 uint32_t ex_acq_res_shared_starve_exclusive_acquires_exclusive;           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ExAcqResSharedStarveExclusiveAcquiresExclusive
        _m027 uint32_t ex_acq_res_shared_starve_exclusive_acquires_shared;              //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .ExAcqResSharedStarveExclusiveAcquiresShared
        _m028 uint32_t ex_acq_res_shared_starve_exclusive_acquires_shared_recursive;    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ExAcqResSharedStarveExclusiveAcquiresSharedRecursive
        _m029 uint32_t ex_acq_res_shared_starve_exclusive_waits;                        //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .ExAcqResSharedStarveExclusiveWaits
        _m030 uint32_t ex_acq_res_shared_starve_exclusive_not_acquires;                 //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ExAcqResSharedStarveExclusiveNotAcquires
        _m031 uint32_t ex_acq_res_shared_wait_for_exclusive_attempts;                   //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .ExAcqResSharedWaitForExclusiveAttempts
        _m032 uint32_t ex_acq_res_shared_wait_for_exclusive_acquires_exclusive;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ExAcqResSharedWaitForExclusiveAcquiresExclusive
        _m033 uint32_t ex_acq_res_shared_wait_for_exclusive_acquires_shared;            //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .ExAcqResSharedWaitForExclusiveAcquiresShared
        _m034 uint32_t ex_acq_res_shared_wait_for_exclusive_acquires_shared_recursive;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive
        _m035 uint32_t ex_acq_res_shared_wait_for_exclusive_waits;                      //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .ExAcqResSharedWaitForExclusiveWaits
        _m036 uint32_t ex_acq_res_shared_wait_for_exclusive_not_acquires;               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ExAcqResSharedWaitForExclusiveNotAcquires
        _m037 uint32_t ex_set_res_owner_pointer_exclusive;                              //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .ExSetResOwnerPointerExclusive
        _m038 uint32_t ex_set_res_owner_pointer_shared_new;                             //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ExSetResOwnerPointerSharedNew
        _m039 uint32_t ex_set_res_owner_pointer_shared_old;                             //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .ExSetResOwnerPointerSharedOld
        _m040 uint32_t ex_try_to_acq_exclusive_attempts;                                //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ExTryToAcqExclusiveAttempts
        _m041 uint32_t ex_try_to_acq_exclusive_acquires;                                //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .ExTryToAcqExclusiveAcquires
        _m042 uint32_t ex_boost_exclusive_owner;                                        //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ExBoostExclusiveOwner
        _m043 uint32_t ex_boost_shared_owners;                                          //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .ExBoostSharedOwners
        _m044 uint32_t ex_etw_synch_tracking_notifications_count;                       //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .ExEtwSynchTrackingNotificationsCount
        _m045 uint32_t ex_etw_synch_tracking_notifications_accounted_count;             //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .ExEtwSynchTrackingNotificationsAccountedCount
                                                                                      
        SDK_MAGIC_PROPERTIES( "_SYNCH_COUNTERS.$", 0xb8, true, 0x77afcb735a1ef1e7 );                                                               
        SDK_FIXED_SIZE( synch_counters_t, 0xb8 );                                                               
    };                                                                                
};
#include "magic/synch_counters_t.end.hpp"
SDK_VERIFY( struct nt::synch_counters_t, 0xb8 );
