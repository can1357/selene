#pragma once
#include <sdkgen/support_library.hpp>
#include "hhive_t.hpp"
#include "cmsi_rw_lock_t.hpp"
#include "../rtl/bitmap_t.hpp"
#include "../cm/workitem_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "hive_write_wait_queue_t.hpp"
#include "../cm/dirty_vector_log_t.hpp"

namespace cm  { struct cell_remap_block_t;         }
namespace cm  { struct key_control_block_t;        }
namespace cm  { struct key_hash_table_entry_t;     }
namespace cm  { struct key_security_cache_entry_t; }
namespace cm  { struct rm_t;                       }
namespace cmp { struct offset_array_t;             }
namespace cmp { struct volume_context_t;           }

#include "magic/cmhive_t.start.hpp"
namespace nt
{
    struct kevent_t;
    struct kthread_t;
    struct eresource_t;
    struct fast_mutex_t;
    struct hbase_block_t;
    struct work_queue_item_t;

    // [struct _CMHIVE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmhive_t                                                                      
    {                                                                                    
        using hive_lock_t = sdk::variant<struct nt::fast_mutex_t*, struct nt::cmsi_rw_lock_t>;                                    
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                               
        _m000 struct nt::hhive_t                     hive;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hive
        _m001 sdk::array<void*, 6>                   file_handles;                         //{ +0x0a68    +0x0600    +0x0608    +0x0600    } | .FileHandles
        _m002 nt::list_entry_t                       notify_list;                          //{ +0x0a98    +0x0630    +0x0638    +0x0630    } | .NotifyList
        _m003 nt::list_entry_t                       hive_list;                            //{ +0x0aa8    +0x0640    +0x0648    +0x0640    } | .HiveList
        _m004 nt::list_entry_t                       preloaded_hive_list;                  //{ +0x0ab8    +0x0650    +0x0658    +0x0650    } | .PreloadedHiveList
        _m005 struct ex::rundown_ref_t               hive_rundown;                         //{ +0x0ad8    +0x0660    +0x0668    +0x0660    } | .HiveRundown
        _m006 struct cm::key_hash_table_entry_t*     kcb_cache_table;                      //{ +0x0af0    +0x0668    +0x0670    +0x0668    } | .KcbCacheTable
        _m007 uint32_t                               kcb_cache_table_size;                 //{ +0x0af8    +0x0670    +0x0678    +0x0670    } | .KcbCacheTableSize
        _m008 struct cm::key_hash_table_entry_t*     deleted_kcb_table;                    //{ +0x0b00    +0x0678    +0x0680    +0x0678    } | .DeletedKcbTable
        _m009 uint32_t                               deleted_kcb_table_size;               //{ +0x0b08    +0x0680    +0x0688    +0x0680    } | .DeletedKcbTableSize
        _m010 uint32_t                               identity;                             //{ +0x0b0c    +0x0684    +0x068c    +0x0684    } | .Identity
        _m011 hive_lock_t                            hive_lock;                            //{ +0x0b10    +0x0688    +0x0690    +0x0688    } | .HiveLock
        _m012 struct rtl::bitmap_t                   flush_dirty_vector;                   //{ +0x0b28    +0x0690    +0x0698    +0x0690    } | .FlushDirtyVector
        _m013 uint32_t                               flush_dirty_vector_size;              //{ +0x0b38    +0x06a0    +0x06a8    +0x06a0    } | .FlushDirtyVectorSize
        _m014 uint32_t                               flush_log_entry_size;                 //{ +0x0b48    +0x06b4    +0x06bc    +0x06b4    } | .FlushLogEntrySize
        _m015 uint32_t                               flush_hive_truncated;                 //{ +0x0b4c    +0x06b8    +0x06c0    +0x06b8    } | .FlushHiveTruncated
        _m016 uint8_t                                flush_base_block_dirty;               //{ +0x0b50    +0x06bc    +0x06c4    +0x06bc    } | .FlushBaseBlockDirty
        _m017 struct rtl::bitmap_t                   captured_unreconciled_vector;         //{ +0x0b58    +0x06c0    +0x06c8    +0x06c0    } | .CapturedUnreconciledVector
        _m018 uint32_t                               captured_unreconciled_vector_size;    //{ +0x0b68    +0x06d0    +0x06d8    +0x06d0    } | .CapturedUnreconciledVectorSize
        _m019 struct cmp::offset_array_t*            unreconciled_offset_array;            //{ +0x0b70    +0x06d8    +0x06e0    +0x06d8    } | .UnreconciledOffsetArray
        _m020 uint32_t                               unreconciled_offset_array_count;      //{ +0x0b78    +0x06e0    +0x06e8    +0x06e0    } | .UnreconciledOffsetArrayCount
        _m021 struct nt::hbase_block_t*              unreconciled_base_block;              //{ +0x0b80    +0x06e8    +0x06f0    +0x06e8    } | .UnreconciledBaseBlock
        _m022 struct ex::push_lock_t                 security_lock;                        //{ +0x0b88    +0x06f0    +0x06f8    +0x06f0    } | .SecurityLock
        _m023 uint32_t                               last_shrink_hive_size;                //{ +0x0b94    +0x06f8    +0x0700    +0x06f8    } | .LastShrinkHiveSize
        _m024 int64_t                                actual_file_size;                     //{ +0x0b98    +0x0700    +0x0708    +0x0700    } | .ActualFileSize
        _m025 sdk::array<int64_t, 2>                 log_file_sizes;                       //{ +0x0ba0    +0x0708    +0x0710    +0x0708    } | .LogFileSizes
        _m026 nt::unicode_view                       file_full_path;                       //{ +0x0bb0    +0x0718    +0x0720    +0x0718    } | .FileFullPath
        _m027 nt::unicode_view                       file_user_name;                       //{ +0x0bc0    +0x0728    +0x0730    +0x0728    } | .FileUserName
        _m028 nt::unicode_view                       hive_root_path;                       //{ +0x0bd0    +0x0738    +0x0740    +0x0738    } | .HiveRootPath
        _m029 uint32_t                               security_count;                       //{ +0x0be0    +0x0748    +0x0750    +0x0748    } | .SecurityCount
        _m030 uint32_t                               security_cache_size;                  //{ +0x0be4    +0x074c    +0x0754    +0x074c    } | .SecurityCacheSize
        _m031 int32_t                                security_hit_hint;                    //{ +0x0be8    +0x0750    +0x0758    +0x0750    } | .SecurityHitHint
        _m032 struct cm::key_security_cache_entry_t* security_cache;                       //{ +0x0bf0    +0x0758    +0x0760    +0x0758    } | .SecurityCache
        _m033 sdk::array<nt::list_entry_t, 64>       security_hash;                        //{ +0x0bf8    +0x0760    +0x0768    +0x0760    } | .SecurityHash
        _m034 uint32_t                               unload_event_count;                   //{ +0x0ff8    +0x0b60    +0x0b68    +0x0b60    } | .UnloadEventCount
        _m035 struct nt::kevent_t**                  unload_event_array;                   //{ +0x1000    +0x0b68    +0x0b70    +0x0b68    } | .UnloadEventArray
        _m036 struct cm::key_control_block_t*        root_kcb;                             //{ +0x1008    +0x0b70    +0x0b78    +0x0b70    } | .RootKcb
        _m037 uint8_t                                frozen;                               //{ +0x1010    +0x0b78    +0x0b80    +0x0b78    } | .Frozen
        _m038 struct cm::dirty_vector_log_t          dirty_vector_log;                     //{ +0x1068    +0x0bb0    +0x0b88    +0x0bb0    } | .DirtyVectorLog
        _m039 uint32_t                               flags;                                //{ +0x14f0    +0x1038    +0x1010    +0x1038    } | .Flags
        _m040 nt::list_entry_t                       trust_class_entry;                    //{ +0x14f8    +0x1040    +0x1018    +0x1040    } | .TrustClassEntry
        _m041 uint64_t                               dirty_time;                           //{ +0x1508    +0x1050    +0x1028    +0x1050    } | .DirtyTime
        _m042 uint64_t                               unreconciled_time;                    //{ +0x1510    +0x1058    +0x1030    +0x1058    } | .UnreconciledTime
        _m043 struct cm::rm_t*                       cm_rm;                                //{ +0x1518    +0x1060    +0x1038    +0x1060    } | .CmRm
        _m044 uint32_t                               cm_rm_init_fail_point;                //{ +0x1520    +0x1068    +0x1040    +0x1068    } | .CmRmInitFailPoint
        _m045 int32_t                                cm_rm_init_fail_status;               //{ +0x1524    +0x106c    +0x1044    +0x106c    } | .CmRmInitFailStatus
        _m046 struct nt::kthread_t*                  creator_owner;                        //{ +0x1528    +0x1070    +0x1048    +0x1070    } | .CreatorOwner
        _m047 struct nt::kthread_t*                  rundown_thread;                       //{ +0x1530    +0x1078    +0x1050    +0x1078    } | .RundownThread
        _m048 int64_t                                last_write_time;                      //{ +0x1538    +0x1080    +0x1058    +0x1080    } | .LastWriteTime
        _m049 struct nt::hive_write_wait_queue_t     flush_queue;                          //{ +0x1540    +0x1088    +0x1060    +0x1088    } | .FlushQueue
        _m050 struct nt::hive_write_wait_queue_t     reconcile_queue;                      //{ +0x1558    +0x1098    +0x1070    +0x1098    } | .ReconcileQueue
        _m051 uint32_t                               flush_flags;                          //{ +0x1570    +0x10a8    +0x1080    +0x10a8    } | .FlushFlags
        _m052 uint1_t                                primary_file_purged;                  //{ +0x1570@2  +0x10a8@0  +0x1080@0  +0x10a8@0  } | .PrimaryFilePurged
        _m053 uint1_t                                disk_file_bad;                        //{ +0x1570@3  +0x10a8@1  +0x1080@1  +0x10a8@1  } | .DiskFileBad
        _m054 uint32_t                               primary_file_size_before_last_flush;  //{ +0x1574    +0x10ac    +0x1084    +0x10ac    } | .PrimaryFileSizeBeforeLastFlush
        _m055 volatile int32_t                       reference_count;                      //{ +0x1578    +0x10b0    +0x1088    +0x10b0    } | .ReferenceCount
        _m056 int32_t                                unload_history_index;                 //{ +0x157c    +0x10b4    +0x108c    +0x10b4    } | .UnloadHistoryIndex
        _m057 sdk::array<uint32_t, 128>              unload_history;                       //{ +0x1580    +0x10b8    +0x1090    +0x10b8    } | .UnloadHistory
        _m058 uint32_t                               boot_start;                           //{ +0x1780    +0x12b8    +0x1290    +0x12b8    } | .BootStart
        _m059 uint32_t                               unaccessed_start;                     //{ +0x1784    +0x12bc    +0x1294    +0x12bc    } | .UnaccessedStart
        _m060 uint32_t                               unaccessed_end;                       //{ +0x1788    +0x12c0    +0x1298    +0x12c0    } | .UnaccessedEnd
        _m061 uint32_t                               loaded_key_count;                     //{ +0x178c    +0x12c4    +0x129c    +0x12c4    } | .LoadedKeyCount
        _m062 volatile uint32_t                      handle_close_pending;                 //{ +0x1790    +0x12c8    +0x12a0    +0x12c8    } | .HandleClosePending
        _m063 struct ex::push_lock_t                 handle_close_pending_event;           //{ +0x1798    +0x12d0    +0x12a8    +0x12d0    } | .HandleClosePendingEvent
        _m064 uint8_t                                final_flush_succeeded;                //{ +0x17a0    +0x12d8    +0x12b0    +0x12d8    } | .FinalFlushSucceeded
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                               
        _m065 struct cmp::offset_array_t*            flush_log_entry_offset_array;         //{ +0x06a8    +0x06b0    +0x06a8    } | .FlushLogEntryOffsetArray
        _m066 uint32_t                               flush_log_entry_offset_array_count;   //{ +0x06b0    +0x06b8    +0x06b0    } | .FlushLogEntryOffsetArrayCount
        _m067 struct cmp::volume_context_t*          volume_context;                       //{ +0x12e0    +0x12b8    +0x12e0    } | .VolumeContext
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                    
        //                                                                               
        _m068 struct cm::workitem_t*                 unload_work_item;                     //{ +0x1018    +0x0b80    +0x0b80    } | .UnloadWorkItem
        _m069 struct cm::workitem_t                  unload_work_item_holder;              //{ +0x1020    +0x0b88    +0x0b88    } | .UnloadWorkItemHolder
                                                                                         
        // Windows 10 v1607                                                              
        //                                                                               
        _m070 nt::list_entry_t                       failed_unload_list;                   //{ +0x0ac8    } | .FailedUnloadList
        _m071 nt::list_entry_t                       parse_cache_entries;                  //{ +0x0ae0    } | .ParseCacheEntries
        _m072 struct nt::fast_mutex_t*               writer_lock;                          //{ +0x0b18    } | .WriterLock
        _m073 struct nt::eresource_t*                flusher_lock;                         //{ +0x0b20    } | .FlusherLock
        _m074 uint8_t*                               flush_log_entry;                      //{ +0x0b40    } | .FlushLogEntry
        _m075 uint32_t                               use_count;                            //{ +0x0b90    } | .UseCount
        _m076 uint8_t                                grow_only_mode;                       //{ +0x1048    } | .GrowOnlyMode
        _m077 uint32_t                               grow_offset;                          //{ +0x104c    } | .GrowOffset
        _m078 nt::list_entry_t                       kcb_convert_list_head;                //{ +0x1050    } | .KcbConvertListHead
        _m079 struct cm::cell_remap_block_t*         cell_remap_array;                     //{ +0x1060    } | .CellRemapArray
        _m080 uint1_t                                flush_active;                         //{ +0x1570@0  } | .FlushActive
        _m081 uint1_t                                reconcile_active;                     //{ +0x1570@1  } | .ReconcileActive
        _m082 uint8_t                                failed_unload;                        //{ +0x17a1    } | .FailedUnload
                                                                                         
        // Windows 11                                                                    
        //                                                                               
        _m083 uint32_t                               late_unload_work_item_state;          //{ +0x12c0    } | .LateUnloadWorkItemState
        _m084 struct ex::push_lock_t                 late_unload_finished_event;           //{ +0x12c8    } | .LateUnloadFinishedEvent
        _m085 struct nt::work_queue_item_t*          late_unload_work_item;                //{ +0x12d0    } | .LateUnloadWorkItem
                                                                                         
        SDK_MAGIC_PROPERTIES( "_CMHIVE.$", 0x12e8, true, 0x6fd9798a7d518e7d );                                    
        SDK_DYNAMIC_SIZE( cmhive_t );                                                    
    };                                                                                   
};
#include "magic/cmhive_t.end.hpp"
