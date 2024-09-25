#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "kevent_t.hpp"
#include "kmutant_t.hpp"
#include "eresource_t.hpp"
#include "ktm_state_t.hpp"
#include "../cls/lsn_t.hpp"
#include "fast_mutex_t.hpp"
#include "work_queue_item_t.hpp"
#include "ktmobject_namespace_t.hpp"
#include "ktmobject_namespace_link_t.hpp"

#include "magic/ktm_t.start.hpp"
namespace nt
{
    struct file_object_t;
    struct kresourcemanager_t;

    // [struct _KTM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktm_t                                                                 
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                       
        _m000 uint32_t                              cookie;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cookie
        _m001 struct nt::kmutant_t                  mutex;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Mutex
        _m002 enum nt::ktm_state_t                  state;                         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .State
        _m003 struct nt::ktmobject_namespace_link_t namespace_link;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NamespaceLink
        _m004 struct nt::guid_t                     tm_identity;                   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .TmIdentity
        _m005 uint32_t                              flags;                         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .Flags
        _m006 uint32_t                              volatile_flags;                //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .VolatileFlags
        _m007 nt::unicode_view                      log_file_name;                 //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .LogFileName
        _m008 struct nt::file_object_t*             log_file_object;               //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .LogFileObject
        _m009 void*                                 marshalling_context;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .MarshallingContext
        _m010 void*                                 log_management_context;        //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .LogManagementContext
        _m011 struct nt::ktmobject_namespace_t      transactions;                  //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .Transactions
        _m012 struct nt::ktmobject_namespace_t      resource_managers;             //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .ResourceManagers
        _m013 struct nt::kmutant_t                  lsn_ordered_mutex;             //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .LsnOrderedMutex
        _m014 nt::list_entry_t                      lsn_ordered_list;              //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .LsnOrderedList
        _m015 int64_t                               commit_virtual_clock;          //{ +0x0248    +0x0248    +0x0248    +0x0248    } | .CommitVirtualClock
        _m016 struct nt::fast_mutex_t               commit_virtual_clock_mutex;    //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .CommitVirtualClockMutex
        _m017 union cls::lsn_t                      base_lsn;                      //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .BaseLsn
        _m018 union cls::lsn_t                      current_read_lsn;              //{ +0x0290    +0x0290    +0x0290    +0x0290    } | .CurrentReadLsn
        _m019 union cls::lsn_t                      last_recovered_lsn;            //{ +0x0298    +0x0298    +0x0298    +0x0298    } | .LastRecoveredLsn
        _m020 void*                                 tm_rm_handle;                  //{ +0x02a0    +0x02a0    +0x02a0    +0x02a0    } | .TmRmHandle
        _m021 struct nt::kresourcemanager_t*        tm_rm;                         //{ +0x02a8    +0x02a8    +0x02a8    +0x02a8    } | .TmRm
        _m022 struct nt::kevent_t                   log_full_notify_event;         //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | .LogFullNotifyEvent
        _m023 struct nt::work_queue_item_t          checkpoint_work_item;          //{ +0x02c8    +0x02c8    +0x02c8    +0x02c8    } | .CheckpointWorkItem
        _m024 union cls::lsn_t                      checkpoint_target_lsn;         //{ +0x02e8    +0x02e8    +0x02e8    +0x02e8    } | .CheckpointTargetLsn
        _m025 struct nt::work_queue_item_t          log_full_completed_work_item;  //{ +0x02f0    +0x02f0    +0x02f0    +0x02f0    } | .LogFullCompletedWorkItem
        _m026 struct nt::eresource_t                log_write_resource;            //{ +0x0310    +0x0310    +0x0310    +0x0310    } | .LogWriteResource
        _m027 uint32_t                              log_flags;                     //{ +0x0378    +0x0378    +0x0378    +0x0378    } | .LogFlags
        _m028 int32_t                               log_full_status;               //{ +0x037c    +0x037c    +0x037c    +0x037c    } | .LogFullStatus
        _m029 int32_t                               recovery_status;               //{ +0x0380    +0x0380    +0x0380    +0x0380    } | .RecoveryStatus
        _m030 union cls::lsn_t                      last_check_base_lsn;           //{ +0x0388    +0x0388    +0x0388    +0x0388    } | .LastCheckBaseLsn
        _m031 nt::list_entry_t                      restart_ordered_list;          //{ +0x0390    +0x0390    +0x0390    +0x0390    } | .RestartOrderedList
        _m032 struct nt::work_queue_item_t          offline_work_item;             //{ +0x03a0    +0x03a0    +0x03a0    +0x03a0    } | .OfflineWorkItem
                                                                                 
        SDK_MAGIC_PROPERTIES( "_KTM.$", 0x3c0, true, 0x727c49e46ad6a24 );                             
        SDK_DYNAMIC_SIZE( ktm_t );                                               
    };                                                                           
};
#include "magic/ktm_t.end.hpp"
