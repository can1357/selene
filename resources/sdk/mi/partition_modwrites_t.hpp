#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "modwrite_data_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "restricted_modwrites_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "../nt/mmmod_writer_listhead_t.hpp"
#include "../nt/mmpage_file_expansion_t.hpp"

namespace nt { struct ethread_t; }

#include "magic/partition_modwrites_t.start.hpp"
namespace mi
{
    // [struct _MI_PARTITION_MODWRITES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_modwrites_t                                                                         
    {                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                               
        _m000 struct nt::mmpage_file_expansion_t               attempt_for_cant_extend;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AttemptForCantExtend
        _m001 struct nt::mmpage_file_expansion_t               page_file_contract;                         //{ +0x0060    +0x0058    +0x0058    +0x0058    } | .PageFileContract
        _m002 uint64_t                                         number_of_mapped_mdls;                      //{ +0x00c0    +0x00b0    +0x00b0    +0x00b0    } | .NumberOfMappedMdls
        _m003 volatile int32_t                                 number_of_mapped_mdls_in_use;               //{ +0x00c8    +0x00b8    +0x00b8    +0x00b8    } | .NumberOfMappedMdlsInUse
        _m004 uint32_t                                         number_of_mapped_mdls_in_use_peak;          //{ +0x00cc    +0x00bc    +0x00bc    +0x00bc    } | .NumberOfMappedMdlsInUsePeak
        _m005 struct nt::mmmod_writer_listhead_t               mapped_file_header;                         //{ +0x00d0    +0x00c0    +0x00c0    +0x00c0    } | .MappedFileHeader
        _m006 uint8_t                                          need_mapped_mdl;                            //{ +0x00f8    +0x00e8    +0x00e8    +0x00e8    } | .NeedMappedMdl
        _m007 uint8_t                                          need_page_file_mdl;                         //{ +0x00f9    +0x00e9    +0x00e9    +0x00e9    } | .NeedPageFileMdl
        _m008 uint8_t                                          transition_inserted;                        //{ +0x00fa    +0x00eb    +0x00eb    +0x00eb    } | .TransitionInserted
        _m009 int32_t                                          last_modified_write_error;                  //{ +0x00fc    +0x00ec    +0x00ec    +0x00ec    } | .LastModifiedWriteError
        _m010 int32_t                                          last_mapped_write_error;                    //{ +0x0100    +0x00f0    +0x00f0    +0x00f0    } | .LastMappedWriteError
        _m011 volatile uint32_t                                mapped_file_write_succeeded;                //{ +0x0104    +0x00f4    +0x00f4    +0x00f4    } | .MappedFileWriteSucceeded
        _m012 uint32_t                                         mapped_write_burst_count;                   //{ +0x0108    +0x00f8    +0x00f8    +0x00f8    } | .MappedWriteBurstCount
        _m013 uint32_t                                         low_priority_mod_writes_outstanding;        //{ +0x010c    +0x00fc    +0x00fc    +0x00fc    } | .LowPriorityModWritesOutstanding
        _m014 struct nt::kevent_t                              boost_mod_write_io_priority_event;          //{ +0x0110    +0x0100    +0x0100    +0x0100    } | .BoostModWriteIoPriorityEvent
        _m015 int32_t                                          modified_writer_thread_priority;            //{ +0x0128    +0x0118    +0x0118    +0x0118    } | .ModifiedWriterThreadPriority
        _m016 uint64_t                                         modified_pages_low_priority_goal;           //{ +0x0130    +0x0120    +0x0120    +0x0120    } | .ModifiedPagesLowPriorityGoal
        _m017 struct nt::kevent_t                              modified_page_writer_event;                 //{ +0x0138    +0x0128    +0x0128    +0x0128    } | .ModifiedPageWriterEvent
        _m018 struct nt::kevent_t                              modified_writer_exited_event;               //{ +0x0150    +0x0140    +0x0140    +0x0140    } | .ModifiedWriterExitedEvent
        _m019 volatile int32_t                                 write_all_pagefile_pages;                   //{ +0x0168    +0x0158    +0x0158    +0x0158    } | .WriteAllPagefilePages
        _m020 volatile int32_t                                 write_all_mapped_pages;                     //{ +0x016c    +0x015c    +0x015c    +0x015c    } | .WriteAllMappedPages
        _m021 struct nt::kevent_t                              mapped_page_writer_event;                   //{ +0x0170    +0x0160    +0x0160    +0x0160    } | .MappedPageWriterEvent
        _m022 struct mi::modwrite_data_t                       mod_write_data;                             //{ +0x0188    +0x0178    +0x0178    +0x0178    } | .ModWriteData
        _m023 struct nt::kevent_t                              rescan_page_files_event;                    //{ +0x01c8    +0x01b8    +0x01b8    +0x01b8    } | .RescanPageFilesEvent
        _m024 struct nt::mmmod_writer_listhead_t               paging_file_header;                         //{ +0x01e0    +0x01d0    +0x01d0    +0x01d0    } | .PagingFileHeader
        _m025 struct nt::ethread_t*                            modified_page_writer_thread;                //{ +0x0208    +0x01f8    +0x01f8    +0x01f8    } | .ModifiedPageWriterThread
        _m026 struct ex::rundown_ref_t                         modified_page_writer_rundown;               //{ +0x0210    +0x0200    +0x0200    +0x0200    } | .ModifiedPageWriterRundown
        _m027 struct nt::work_queue_item_t                     pagefile_scan_work_item;                    //{ +0x0218    +0x0208    +0x0208    +0x0208    } | .PagefileScanWorkItem
        _m028 uint32_t                                         pagefile_scan_count;                        //{ +0x0238    +0x0228    +0x0228    +0x0228    } | .PagefileScanCount
        _m029 struct nt::kevent_t                              notify_store_memory_conditions;             //{ +0x0248    +0x0238    +0x0238    +0x0238    } | .NotifyStoreMemoryConditions
        _m030 volatile uint8_t                                 delay_mapped_write;                         //{ +0x0260    +0x0250    +0x0250    +0x0250    } | .DelayMappedWrite
        _m031 volatile uint32_t                                pagefile_reservations_enabled;              //{ +0x0264    +0x0254    +0x0254    +0x0254    } | .PagefileReservationsEnabled
        _m032 struct ex::push_lock_t                           page_file_creation_lock;                    //{ +0x0268    +0x0258    +0x0258    +0x0258    } | .PageFileCreationLock
        _m033 struct nt::work_queue_item_t                     trim_pagefile_work_item;                    //{ +0x0270    +0x0260    +0x0260    +0x0260    } | .TrimPagefileWorkItem
        _m034 uint64_t                                         last_trim_pagefile_time;                    //{ +0x0290    +0x0280    +0x0280    +0x0280    } | .LastTrimPagefileTime
        _m035 struct nt::work_queue_item_t                     ws_swap_pagefile_contract_work_item;        //{ +0x0298    +0x0288    +0x0288    +0x0288    } | .WsSwapPagefileContractWorkItem
        _m036 volatile int32_t                                 ws_swap_page_file_contraction_in_progress;  //{ +0x02b8    +0x02a8    +0x02a8    +0x02a8    } | .WsSwapPageFileContractionInProgress
        _m037 struct ex::push_lock_t                           working_set_swap_lock;                      //{ +0x02c0    +0x02b0    +0x02b0    +0x02b0    } | .WorkingSetSwapLock
        _m038 volatile int32_t                                 working_set_inswap_lock;                    //{ +0x02c8    +0x02b8    +0x02b8    +0x02b8    } | .WorkingSetInswapLock
                                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                               
        _m039 uint8_t                                          modwriter_active;                           //{ +0x00ea    +0x00ea    +0x00ea    } | .ModwriterActive
        _m040 volatile int32_t                                 cluster_restriction_lock;                   //{ +0x022c    +0x022c    +0x022c    } | .ClusterRestrictionLock
        _m041 sdk::array<struct mi::restricted_modwrites_t, 2> cluster_restrictions;                       //{ +0x0230    +0x0230    +0x0230    } | .ClusterRestrictions
                                                                                                         
        // Windows 10 v1607                                                                              
        //                                                                                               
        _m042 sdk::array<volatile int32_t, 2>                  cluster_writes_disabled;                    //{ +0x023c    } | .ClusterWritesDisabled
                                                                                                         
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_MODWRITES.$", 0x2c0, true, 0xd5cf4b70a81cb406 );                                          
        SDK_DYNAMIC_SIZE( partition_modwrites_t );                                                       
    };                                                                                                   
};
#include "magic/partition_modwrites_t.end.hpp"
