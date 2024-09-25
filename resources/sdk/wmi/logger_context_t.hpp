#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/kdpc_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../nt/kmutant_t.hpp"
#include "../rtl/bitmap_t.hpp"
#include "../ex/fast_ref_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/pool_type_t.hpp"
#include "../etw/ref_clock_t.hpp"
#include "../etw/buffer_queue_t.hpp"
#include "../etw/rt_event_loss_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "../sec/client_context_t.hpp"
#include "../nt/disallowed_guids_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../etw/partition_context_t.hpp"
#include "../etw/stack_trace_block_t.hpp"
#include "../etw/periodic_timer_state_t.hpp"
#include "../etw/compression_resumption_mode_t.hpp"
#include "../nt/periodic_capture_state_guids_t.hpp"

namespace etw { struct decode_control_entry_t;           }
namespace etw { struct event_callback_context_t;         }
namespace etw { struct ipt_support_t;                    }
namespace etw { struct lbr_support_t;                    }
namespace etw { struct pmc_support_t;                    }
namespace etw { struct realtime_consumer_t;              }
namespace etw { struct silodriverstate_t;                }
namespace etw { struct soft_restart_context_t;           }
namespace etw { struct stack_cache_t;                    }
namespace ex  { struct timer_t;                          }
namespace nt  { struct ethread_t;                        }
namespace nt  { struct mdl_t;                            }
namespace nt  { struct periodic_capture_state_context_t; }
namespace nt  { struct token_access_information_t;       }

#include "magic/logger_context_t.start.hpp"
namespace wmi
{
    struct buffer_header_t;

    // [struct _WMI_LOGGER_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logger_context_t                                                                   
    {                                                                                         
        using get_cpu_clock_t = sdk::variant<sdk::function<int64_t()>*, uint64_t>;                                   
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                    
        _m000 uint32_t                                     logger_id;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LoggerId
        _m001 uint32_t                                     buffer_size;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BufferSize
        _m002 uint32_t                                     maximum_event_size;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumEventSize
        _m003 uint32_t                                     logger_mode;                         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LoggerMode
        _m004 int32_t                                      accept_new_events;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AcceptNewEvents
        _m005 get_cpu_clock_t                              get_cpu_clock;                       //{ +0x0028    +0x0028    +0x0018    +0x0028    } | .GetCpuClock
        _m006 struct nt::ethread_t*                        logger_thread;                       //{ +0x0030    +0x0030    +0x0020    +0x0030    } | .LoggerThread
        _m007 int32_t                                      logger_status;                       //{ +0x0038    +0x0038    +0x0028    +0x0038    } | .LoggerStatus
        _m008 uint32_t                                     failure_reason;                      //{ +0x003c    +0x003c    +0x002c    +0x003c    } | .FailureReason
        _m009 struct etw::buffer_queue_t                   buffer_queue;                        //{ +0x0040    +0x0040    +0x0030    +0x0040    } | .BufferQueue
        _m010 struct etw::buffer_queue_t                   overflow_queue;                      //{ +0x0050    +0x0050    +0x0040    +0x0050    } | .OverflowQueue
        _m011 nt::list_entry_t                             global_list;                         //{ +0x0060    +0x0060    +0x0050    +0x0060    } | .GlobalList
        _m012 struct wmi::buffer_header_t*                 batched_buffer_list;                 //{ +0x0080    +0x0090    +0x0080    +0x0090    } | .BatchedBufferList
        _m013 struct ex::fast_ref_t                        current_buffer;                      //{ +0x0080    +0x0090    +0x0080    +0x0090    } | .CurrentBuffer
        _m014 nt::unicode_view                             logger_name;                         //{ +0x0088    +0x0098    +0x0088    +0x0098    } | .LoggerName
        _m015 nt::unicode_view                             log_file_name;                       //{ +0x0098    +0x00a8    +0x0098    +0x00a8    } | .LogFileName
        _m016 nt::unicode_view                             log_file_pattern;                    //{ +0x00a8    +0x00b8    +0x00a8    +0x00b8    } | .LogFilePattern
        _m017 nt::unicode_view                             new_log_file_name;                   //{ +0x00b8    +0x00c8    +0x00b8    +0x00c8    } | .NewLogFileName
        _m018 uint32_t                                     clock_type;                          //{ +0x00c8    +0x00d8    +0x00c8    +0x00d8    } | .ClockType
        _m019 uint32_t                                     last_flushed_buffer;                 //{ +0x00cc    +0x00dc    +0x00cc    +0x00dc    } | .LastFlushedBuffer
        _m020 uint32_t                                     flush_timer;                         //{ +0x00d0    +0x00e0    +0x00d0    +0x00e0    } | .FlushTimer
        _m021 uint32_t                                     flush_threshold;                     //{ +0x00d4    +0x00e4    +0x00d4    +0x00e4    } | .FlushThreshold
        _m022 int64_t                                      byte_offset;                         //{ +0x00d8    +0x00e8    +0x00d8    +0x00e8    } | .ByteOffset
        _m023 uint32_t                                     minimum_buffers;                     //{ +0x00e0    +0x00f0    +0x00e0    +0x00f0    } | .MinimumBuffers
        _m024 volatile int32_t                             buffers_available;                   //{ +0x00e4    +0x00f4    +0x00e4    +0x00f4    } | .BuffersAvailable
        _m025 volatile int32_t                             number_of_buffers;                   //{ +0x00e8    +0x00f8    +0x00e8    +0x00f8    } | .NumberOfBuffers
        _m026 uint32_t                                     maximum_buffers;                     //{ +0x00ec    +0x00fc    +0x00ec    +0x00fc    } | .MaximumBuffers
        _m027 volatile uint32_t                            events_lost;                         //{ +0x00f0    +0x0100    +0x00f0    +0x0100    } | .EventsLost
        _m028 volatile int32_t                             peak_buffers_count;                  //{ +0x00f4    +0x0104    +0x00f4    +0x0104    } | .PeakBuffersCount
        _m029 uint32_t                                     buffers_written;                     //{ +0x00f8    +0x0108    +0x00f8    +0x0108    } | .BuffersWritten
        _m030 uint32_t                                     log_buffers_lost;                    //{ +0x00fc    +0x010c    +0x00fc    +0x010c    } | .LogBuffersLost
        _m031 uint32_t                                     real_time_buffers_delivered;         //{ +0x0100    +0x0110    +0x0100    +0x0110    } | .RealTimeBuffersDelivered
        _m032 uint32_t                                     real_time_buffers_lost;              //{ +0x0104    +0x0114    +0x0104    +0x0114    } | .RealTimeBuffersLost
        _m033 int32_t*                                     sequence_ptr;                        //{ +0x0108    +0x0118    +0x0108    +0x0118    } | .SequencePtr
        _m034 uint32_t                                     local_sequence;                      //{ +0x0110    +0x0120    +0x0110    +0x0120    } | .LocalSequence
        _m035 struct nt::guid_t                            instance_guid;                       //{ +0x0114    +0x0124    +0x0114    +0x0124    } | .InstanceGuid
        _m036 uint32_t                                     maximum_file_size;                   //{ +0x0124    +0x0134    +0x0124    +0x0134    } | .MaximumFileSize
        _m037 int32_t                                      file_counter;                        //{ +0x0128    +0x0138    +0x0128    +0x0138    } | .FileCounter
        _m038 enum nt::pool_type_t                         pool_type;                           //{ +0x012c    +0x013c    +0x012c    +0x013c    } | .PoolType
        _m039 struct etw::ref_clock_t                      reference_time;                      //{ +0x0130    +0x0140    +0x0130    +0x0140    } | .ReferenceTime
        _m040 int32_t                                      collection_on;                       //{ +0x0140    +0x0150    +0x0140    +0x0150    } | .CollectionOn
        _m041 uint32_t                                     provider_info_size;                  //{ +0x0144    +0x0154    +0x0144    +0x0154    } | .ProviderInfoSize
        _m042 nt::list_entry_t                             consumers;                           //{ +0x0148    +0x0158    +0x0148    +0x0158    } | .Consumers
        _m043 uint32_t                                     num_consumers;                       //{ +0x0158    +0x0168    +0x0158    +0x0168    } | .NumConsumers
        _m044 struct etw::realtime_consumer_t*             transition_consumer;                 //{ +0x0160    +0x0170    +0x0160    +0x0170    } | .TransitionConsumer
        _m045 void*                                        realtime_logfile_handle;             //{ +0x0168    +0x0178    +0x0168    +0x0178    } | .RealtimeLogfileHandle
        _m046 nt::unicode_view                             realtime_logfile_name;               //{ +0x0170    +0x0180    +0x0170    +0x0180    } | .RealtimeLogfileName
        _m047 int64_t                                      realtime_write_offset;               //{ +0x0180    +0x0190    +0x0180    +0x0190    } | .RealtimeWriteOffset
        _m048 int64_t                                      realtime_read_offset;                //{ +0x0188    +0x0198    +0x0188    +0x0198    } | .RealtimeReadOffset
        _m049 int64_t                                      realtime_logfile_size;               //{ +0x0190    +0x01a0    +0x0190    +0x01a0    } | .RealtimeLogfileSize
        _m050 uint64_t                                     realtime_logfile_usage;              //{ +0x0198    +0x01a8    +0x0198    +0x01a8    } | .RealtimeLogfileUsage
        _m051 uint64_t                                     realtime_maximum_file_size;          //{ +0x01a0    +0x01b0    +0x01a0    +0x01b0    } | .RealtimeMaximumFileSize
        _m052 uint32_t                                     realtime_buffers_saved;              //{ +0x01a8    +0x01b8    +0x01a8    +0x01b8    } | .RealtimeBuffersSaved
        _m053 struct etw::ref_clock_t                      realtime_reference_time;             //{ +0x01b0    +0x01c0    +0x01b0    +0x01c0    } | .RealtimeReferenceTime
        _m054 enum etw::rt_event_loss_t                    new_rt_events_lost;                  //{ +0x01c0    +0x01d0    +0x01c0    +0x01d0    } | .NewRTEventsLost
        _m055 struct nt::kevent_t                          logger_event;                        //{ +0x01c8    +0x01d8    +0x01c8    +0x01d8    } | .LoggerEvent
        _m056 struct nt::kevent_t                          flush_event;                         //{ +0x01e0    +0x01f0    +0x01e0    +0x01f0    } | .FlushEvent
        _m057 struct nt::ktimer_t                          flush_time_out_timer;                //{ +0x01f8    +0x0208    +0x01f8    +0x0208    } | .FlushTimeOutTimer
        _m058 struct nt::kdpc_t                            logger_dpc;                          //{ +0x0238    +0x0248    +0x0238    +0x0248    } | .LoggerDpc
        _m059 struct nt::kmutant_t                         logger_mutex;                        //{ +0x0278    +0x0288    +0x0278    +0x0288    } | .LoggerMutex
        _m060 struct ex::push_lock_t                       logger_lock;                         //{ +0x02b0    +0x02c0    +0x02b0    +0x02c0    } | .LoggerLock
        _m061 uint64_t                                     buffer_list_spin_lock;               //{ +0x02b8    +0x02c8    +0x02b8    +0x02c8    } | .BufferListSpinLock
        _m062 struct ex::push_lock_t                       buffer_list_push_lock;               //{ +0x02b8    +0x02c8    +0x02b8    +0x02c8    } | .BufferListPushLock
        _m063 struct sec::client_context_t                 client_security_context;             //{ +0x02c0    +0x02d0    +0x02c0    +0x02d0    } | .ClientSecurityContext
        _m064 struct nt::token_access_information_t*       token_access_information;            //{ +0x0308    +0x0318    +0x0308    +0x0318    } | .TokenAccessInformation
        _m065 struct ex::fast_ref_t                        security_descriptor;                 //{ +0x0310    +0x0320    +0x0310    +0x0320    } | .SecurityDescriptor
        _m066 int64_t                                      start_time;                          //{ +0x0318    +0x0328    +0x0318    +0x0328    } | .StartTime
        _m067 void*                                        log_file_handle;                     //{ +0x0320    +0x0330    +0x0320    +0x0330    } | .LogFileHandle
        _m068 int64_t                                      buffer_sequence_number;              //{ +0x0328    +0x0338    +0x0328    +0x0338    } | .BufferSequenceNumber
        _m069 uint32_t                                     flags;                               //{ +0x0330    +0x0340    +0x0330    +0x0340    } | .Flags
        _m070 uint1_t                                      persistent;                          //{ +0x0330@0  +0x0340@0  +0x0330@0  +0x0340@0  } | .Persistent
        _m071 uint1_t                                      auto_logger;                         //{ +0x0330@1  +0x0340@1  +0x0330@1  +0x0340@1  } | .AutoLogger
        _m072 uint1_t                                      fs_ready;                            //{ +0x0330@2  +0x0340@2  +0x0330@2  +0x0340@2  } | .FsReady
        _m073 uint1_t                                      real_time;                           //{ +0x0330@3  +0x0340@3  +0x0330@3  +0x0340@3  } | .RealTime
        _m074 uint1_t                                      wow;                                 //{ +0x0330@4  +0x0340@4  +0x0330@4  +0x0340@4  } | .Wow
        _m075 uint1_t                                      kernel_trace;                        //{ +0x0330@5  +0x0340@5  +0x0330@5  +0x0340@5  } | .KernelTrace
        _m076 uint1_t                                      no_more_enable;                      //{ +0x0330@6  +0x0340@6  +0x0330@6  +0x0340@6  } | .NoMoreEnable
        _m077 uint1_t                                      stack_tracing;                       //{ +0x0330@7  +0x0340@7  +0x0330@7  +0x0340@7  } | .StackTracing
        _m078 uint1_t                                      error_logged;                        //{ +0x0330@8  +0x0340@8  +0x0330@8  +0x0340@8  } | .ErrorLogged
        _m079 uint1_t                                      realtime_logger_context_freed;       //{ +0x0330@9  +0x0340@9  +0x0330@9  +0x0340@9  } | .RealtimeLoggerContextFreed
        _m080 uint1_t                                      pebs_tracing;                        //{ +0x0330@10 +0x0340@10 +0x0330@10 +0x0340@10 } | .PebsTracing
        _m081 uint1_t                                      pmc_counters;                        //{ +0x0330@11 +0x0340@11 +0x0330@11 +0x0340@11 } | .PmcCounters
        _m082 uint1_t                                      page_align_buffers;                  //{ +0x0330@12 +0x0340@12 +0x0330@12 +0x0340@12 } | .PageAlignBuffers
        _m083 uint1_t                                      stack_lookaside_list_allocated;      //{ +0x0330@13 +0x0340@13 +0x0330@13 +0x0340@13 } | .StackLookasideListAllocated
        _m084 uint1_t                                      security_trace;                      //{ +0x0330@14 +0x0340@14 +0x0330@14 +0x0340@14 } | .SecurityTrace
        _m085 uint8_t                                      system_logger_index;                 //{ +0x0330@16 +0x0340@16 +0x0330@16 +0x0340@16 } | .SystemLoggerIndex
        _m086 uint1_t                                      stack_caching;                       //{ +0x0330@24 +0x0340@24 +0x0330@24 +0x0340@24 } | .StackCaching
        _m087 volatile uint32_t                            request_flag;                        //{ +0x0334    +0x0344    +0x0338    +0x0344    } | .RequestFlag
        _m088 volatile uint1_t                             dbg_request_new_file;                //{ +0x0334@0  +0x0344@0  +0x0338@0  +0x0344@0  } | .DbgRequestNewFile
        _m089 volatile uint1_t                             dbg_request_update_file;             //{ +0x0334@1  +0x0344@1  +0x0338@1  +0x0344@1  } | .DbgRequestUpdateFile
        _m090 volatile uint1_t                             dbg_request_flush;                   //{ +0x0334@2  +0x0344@2  +0x0338@2  +0x0344@2  } | .DbgRequestFlush
        _m091 volatile uint1_t                             dbg_request_disable_realtime;        //{ +0x0334@3  +0x0344@3  +0x0338@3  +0x0344@3  } | .DbgRequestDisableRealtime
        _m092 volatile uint1_t                             dbg_request_disconnect_consumer;     //{ +0x0334@4  +0x0344@4  +0x0338@4  +0x0344@4  } | .DbgRequestDisconnectConsumer
        _m093 volatile uint1_t                             dbg_request_connect_consumer;        //{ +0x0334@5  +0x0344@5  +0x0338@5  +0x0344@5  } | .DbgRequestConnectConsumer
        _m094 volatile uint1_t                             dbg_request_notify_consumer;         //{ +0x0334@6  +0x0344@6  +0x0338@6  +0x0344@6  } | .DbgRequestNotifyConsumer
        _m095 volatile uint1_t                             dbg_request_update_header;           //{ +0x0334@7  +0x0344@7  +0x0338@7  +0x0344@7  } | .DbgRequestUpdateHeader
        _m096 volatile uint1_t                             dbg_request_deferred_flush;          //{ +0x0334@8  +0x0344@8  +0x0338@8  +0x0344@8  } | .DbgRequestDeferredFlush
        _m097 volatile uint1_t                             dbg_request_deferred_flush_timer;    //{ +0x0334@9  +0x0344@9  +0x0338@9  +0x0344@9  } | .DbgRequestDeferredFlushTimer
        _m098 volatile uint1_t                             dbg_request_flush_timer;             //{ +0x0334@10 +0x0344@10 +0x0338@10 +0x0344@10 } | .DbgRequestFlushTimer
        _m099 volatile uint1_t                             dbg_request_update_debugger;         //{ +0x0334@11 +0x0344@11 +0x0338@11 +0x0344@11 } | .DbgRequestUpdateDebugger
        _m100 volatile uint20_t                            dbg_spare_request_flags;             //{ +0x0334@12 +0x0344@12 +0x0338@12 +0x0344@12 } | .DbgSpareRequestFlags
        _m101 struct rtl::bitmap_t                         hook_id_map;                         //{ +0x0338    +0x03d0    +0x03e0    +0x03d0    } | .HookIdMap
        _m102 struct etw::stack_cache_t*                   stack_cache;                         //{ +0x0348    +0x03e0    +0x03f0    +0x03e0    } | .StackCache
        _m103 struct etw::pmc_support_t*                   pmc_data;                            //{ +0x0350    +0x03e8    +0x03f8    +0x03e8    } | .PmcData
        _m104 struct wmi::buffer_header_t**                scratch_array;                       //{ +0x0368    +0x0410    +0x0420    +0x0410    } | .ScratchArray
        _m105 struct nt::disallowed_guids_t                disallowed_guids;                    //{ +0x0370    +0x0418    +0x0428    +0x0418    } | .DisallowedGuids
        _m106 struct etw::soft_restart_context_t*          soft_restart_context;                //{ +0x0380    +0x0450    +0x0440    +0x0450    } | .SoftRestartContext
        _m107 struct etw::silodriverstate_t*               silo_state;                          //{ +0x0388    +0x0458    +0x0448    +0x0458    } | .SiloState
        _m108 struct nt::work_queue_item_t                 compression_work_item;               //{ +0x0390    +0x0460    +0x0450    +0x0460    } | .CompressionWorkItem
        _m109 int32_t                                      compression_work_item_state;         //{ +0x03b0    +0x0480    +0x0470    +0x0480    } | .CompressionWorkItemState
        _m110 struct ex::push_lock_t                       compression_lock;                    //{ +0x03b8    +0x0488    +0x0478    +0x0488    } | .CompressionLock
        _m111 struct wmi::buffer_header_t*                 compression_target;                  //{ +0x03c0    +0x0490    +0x0480    +0x0490    } | .CompressionTarget
        _m112 void*                                        compression_workspace;               //{ +0x03c8    +0x0498    +0x0488    +0x0498    } | .CompressionWorkspace
        _m113 int32_t                                      compression_on;                      //{ +0x03d0    +0x04a0    +0x0490    +0x04a0    } | .CompressionOn
        _m114 uint32_t                                     compression_ratio_guess;             //{ +0x03d4    +0x04a4    +0x0494    +0x04a4    } | .CompressionRatioGuess
        _m115 uint32_t                                     partial_buffer_compression_level;    //{ +0x03d8    +0x04a8    +0x0498    +0x04a8    } | .PartialBufferCompressionLevel
        _m116 enum etw::compression_resumption_mode_t      compression_resumption_mode;         //{ +0x03dc    +0x04ac    +0x049c    +0x04ac    } | .CompressionResumptionMode
        _m117 struct nt::single_list_entry_t               placeholder_list;                    //{ +0x03e0    +0x04b0    +0x04a0    +0x04b0    } | .PlaceholderList
        _m118 struct nt::kdpc_t                            compression_dpc;                     //{ +0x03e8    +0x04b8    +0x04a8    +0x04b8    } | .CompressionDpc
        _m119 int64_t                                      last_buffer_switch_time;             //{ +0x0428    +0x04f8    +0x04e8    +0x04f8    } | .LastBufferSwitchTime
        _m120 int64_t                                      buffer_write_duration;               //{ +0x0430    +0x0500    +0x04f0    +0x0500    } | .BufferWriteDuration
        _m121 int64_t                                      buffer_compress_duration;            //{ +0x0438    +0x0508    +0x04f8    +0x0508    } | .BufferCompressDuration
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                   
        //                                                                                    
        _m122 sdk::array<uint32_t, 2>                      event_marker;                        //{ +0x0014    +0x0014    +0x0014    } | .EventMarker
        _m123 uint32_t                                     error_marker;                        //{ +0x001c    +0x001c    +0x001c    } | .ErrorMarker
        _m124 uint32_t                                     size_mask;                           //{ +0x0020    +0x0020    +0x0020    } | .SizeMask
        _m125 varuint_t                                    spare_flags2;                        //{ +0x0330@25 +0x0340@31 +0x0340@31 } | .SpareFlags2
                                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                    
        _m126 nt::list_entry_t                             debug_id_tracking_list;              //{ +0x0070    +0x0060    +0x0070    } | .DebugIdTrackingList
        _m127 struct etw::decode_control_entry_t*          decode_control_list;                 //{ +0x0080    +0x0070    +0x0080    } | .DecodeControlList
        _m128 uint32_t                                     decode_control_count;                //{ +0x0088    +0x0078    +0x0088    } | .DecodeControlCount
        _m129 uint1_t                                      last_branch_tracing;                 //{ +0x0340@15 +0x0330@15 +0x0340@15 } | .LastBranchTracing
        _m130 uint1_t                                      provider_tracking;                   //{ +0x0340@25 +0x0330@25 +0x0340@25 } | .ProviderTracking
        _m131 uint1_t                                      processor_trace;                     //{ +0x0340@26 +0x0330@26 +0x0340@26 } | .ProcessorTrace
        _m132 uint1_t                                      qpc_delta_tracking;                  //{ +0x0340@27 +0x0330@27 +0x0340@27 } | .QpcDeltaTracking
        _m133 uint1_t                                      marker_buffer_saved;                 //{ +0x0340@28 +0x0330@28 +0x0340@28 } | .MarkerBufferSaved
        _m134 uint1_t                                      large_mdl_pages;                     //{ +0x0340@29 +0x0330@29 +0x0340@29 } | .LargeMdlPages
        _m135 uint1_t                                      exclude_kernel_stack;                //{ +0x0340@30 +0x0330@30 +0x0340@30 } | .ExcludeKernelStack
        _m136 struct etw::stack_trace_block_t              stack_trace_block;                   //{ +0x0350    +0x0340    +0x0350    } | .StackTraceBlock
        _m137 struct etw::lbr_support_t*                   lbr_data;                            //{ +0x03f0    +0x0400    +0x03f0    } | .LbrData
        _m138 struct etw::ipt_support_t*                   ipt_data;                            //{ +0x03f8    +0x0408    +0x03f8    } | .IptData
        _m139 nt::list_entry_t                             binary_tracking_list;                //{ +0x0400    +0x0410    +0x0400    } | .BinaryTrackingList
        _m140 int64_t                                      reference_qpc_delta;                 //{ +0x0510    +0x0500    +0x0510    } | .ReferenceQpcDelta
        _m141 struct etw::event_callback_context_t*        callback_context;                    //{ +0x0518    +0x0508    +0x0518    } | .CallbackContext
        _m142 int64_t*                                     last_dropped_time;                   //{ +0x0520    +0x0510    +0x0520    } | .LastDroppedTime
        _m143 int64_t*                                     flushing_last_dropped_time;          //{ +0x0528    +0x0518    +0x0528    } | .FlushingLastDroppedTime
        _m144 int64_t                                      flushing_sequence_number;            //{ +0x0530    +0x0520    +0x0530    } | .FlushingSequenceNumber
        _m145 struct etw::partition_context_t              partition_context;                   //{ +0x0538    +0x0528    +0x0538    } | .PartitionContext
        _m146 struct nt::mdl_t*                            buffer_mdl;                          //{ +0x0540    +0x0530    +0x0540    } | .BufferMdl
                                                                                              
        // Windows 10 v2004, Windows 10 v20H2                                                 
        //                                                                                    
        _m147 int64_t                                      relative_timer_due_time;             //{ +0x0428    +0x0428    } | .RelativeTimerDueTime
        _m148 struct nt::periodic_capture_state_guids_t    periodic_capture_state_guids;        //{ +0x0430    +0x0430    } | .PeriodicCaptureStateGuids
        _m149 struct ex::timer_t*                          periodic_capture_state_timer;        //{ +0x0440    +0x0440    } | .PeriodicCaptureStateTimer
        _m150 enum etw::periodic_timer_state_t             periodic_capture_state_timer_state;  //{ +0x0448    +0x0448    } | .PeriodicCaptureStateTimerState
                                                                                              
        // Windows 10 v1607                                                                   
        //                                                                                    
        _m151 nt::list_entry_t                             provider_binary_list;                //{ +0x0070    } | .ProviderBinaryList
        _m152 uint1_t                                      spare_flags1;                        //{ +0x0330@15 } | .SpareFlags1
        _m153 nt::list_entry_t                             win_rt_provider_binary_list;         //{ +0x0358    } | .WinRtProviderBinaryList
                                                                                              
        // Windows 11                                                                         
        //                                                                                    
        _m154 uint1_t                                      boot_logger;                         //{ +0x0330@31 } | .BootLogger
        _m155 uint32_t                                     flags2;                              //{ +0x0334    } | .Flags2
        _m156 uint1_t                                      unified_stack_caching;               //{ +0x0334@0  } | .UnifiedStackCaching
        _m157 struct nt::periodic_capture_state_context_t* periodic_capture_state_context;      //{ +0x0438    } | .PeriodicCaptureStateContext
                                                                                              
        SDK_MAGIC_PROPERTIES( "_WMI_LOGGER_CONTEXT.$", 0x550, true, 0x760a3e232c36bc6f );                                   
        SDK_DYNAMIC_SIZE( logger_context_t );                                                 
    };                                                                                        
};
#include "magic/logger_context_t.end.hpp"
