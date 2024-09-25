#pragma once
#include <sdkgen/support_library.hpp>
#include "counters_t.hpp"
#include "../nt/guid_t.hpp"
#include "guid_entry_t.hpp"
#include "hash_bucket_t.hpp"
#include "../nt/kmutant_t.hpp"
#include "system_logger_settings_t.hpp"
#include "priv_handle_demux_table_t.hpp"

namespace ex  { struct rundown_ref_cache_aware_t; }
namespace ex  { struct wnf_subscription_t;        }
namespace nt  { struct ejob_t;                    }
namespace nt  { struct eserversilo_globals_t;     }
namespace nt  { struct work_queue_item_t;         }
namespace wmi { struct logger_context_t;          }

#include "magic/silodriverstate_t.start.hpp"
namespace etw
{
    struct silo_tracing_block_t;

    // [struct _ETW_SILODRIVERSTATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct silodriverstate_t                                                                    
    {                                                                                           
        using etwp_logger_rundown_t = sdk::variant<sdk::array<struct ex::rundown_ref_cache_aware_t*, 64>, struct ex::rundown_ref_cache_aware_t**>;                                    
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                      
        _m000 struct etw::guid_entry_t                      etwp_security_provider_guid_entry;    //{ +0x0000    +0x0018    +0x0018    +0x0018    } | .EtwpSecurityProviderGuidEntry
        _m001 etwp_logger_rundown_t                         etwp_logger_rundown;                  //{ +0x0190    +0x01c0    +0x01c0    +0x01c0    } | .EtwpLoggerRundown
        _m002 sdk::array<struct etw::hash_bucket_t, 64>     etwp_guid_hash_table;                 //{ +0x0590    +0x01d0    +0x01d0    +0x01d0    } | .EtwpGuidHashTable
        _m003 sdk::array<uint16_t, 8>                       etwp_security_loggers;                //{ +0x1390    +0x0fd0    +0x0fd0    +0x0fd0    } | .EtwpSecurityLoggers
        _m004 uint8_t                                       etwp_security_provider_enable_mask;   //{ +0x13a0    +0x0fe0    +0x0fe0    +0x0fe0    } | .EtwpSecurityProviderEnableMask
        _m005 varint_t                                      etwp_shutdown_in_progress;            //{ +0x13a1    +0x0fe4    +0x0fe4    +0x0fe4    } | .EtwpShutdownInProgress
        _m006 uint32_t                                      etwp_security_provider_pid;           //{ +0x13a4    +0x0fe8    +0x0fe8    +0x0fe8    } | .EtwpSecurityProviderPID
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                      
        _m007 struct nt::ejob_t*                            silo;                                 //{ +0x0000    +0x0000    +0x0000    } | .Silo
        _m008 struct nt::eserversilo_globals_t*             silo_globals;                         //{ +0x0008    +0x0008    +0x0008    } | .SiloGlobals
        _m009 uint32_t                                      max_loggers;                          //{ +0x0010    +0x0010    +0x0010    } | .MaxLoggers
        _m010 struct wmi::logger_context_t**                etwp_logger_context;                  //{ +0x01c8    +0x01c8    +0x01c8    } | .EtwpLoggerContext
        _m011 struct etw::priv_handle_demux_table_t         priv_handle_demux_table;              //{ +0x0ff0    +0x0ff0    +0x0ff0    } | .PrivHandleDemuxTable
        _m012 struct etw::counters_t                        etwp_counters;                        //{ +0x1010    +0x1018    +0x1010    } | .EtwpCounters
        _m013 int64_t                                       logfile_bytes_written;                //{ +0x1020    +0x1028    +0x1020    } | .LogfileBytesWritten
        _m014 struct etw::silo_tracing_block_t*             processor_blocks;                     //{ +0x1028    +0x1030    +0x1028    } | .ProcessorBlocks
        _m015 struct nt::guid_t                             partition_id;                         //{ +0x1038    +0x1050    +0x1038    } | .PartitionId
        _m016 struct nt::guid_t                             parent_id;                            //{ +0x1048    +0x1060    +0x1048    } | .ParentId
        _m017 int64_t                                       qpc_offset_from_root;                 //{ +0x1058    +0x1070    +0x1058    } | .QpcOffsetFromRoot
        _m018 char*                                         partition_name;                       //{ +0x1060    +0x1078    +0x1060    } | .PartitionName
        _m019 uint16_t                                      partition_name_size;                  //{ +0x1068    +0x1080    +0x1068    } | .PartitionNameSize
        _m020 uint16_t                                      unused_padding;                       //{ +0x106a    +0x1082    +0x106a    } | .UnusedPadding
        _m021 uint32_t                                      partition_type;                       //{ +0x106c    +0x1084    +0x106c    } | .PartitionType
        _m022 struct etw::system_logger_settings_t          system_logger_settings;               //{ +0x1070    +0x1088    +0x1070    } | .SystemLoggerSettings
        _m023 struct nt::kmutant_t                          etwp_start_trace_mutex;               //{ +0x11e8    +0x1200    +0x11e8    } | .EtwpStartTraceMutex
                                                                                                
        // Windows 10 v2004, Windows 10 v20H2                                                   
        //                                                                                      
        _m024 struct ex::wnf_subscription_t*                container_restore_wnf_subscription;   //{ +0x1030    +0x1030    } | .ContainerRestoreWnfSubscription
                                                                                                
        // Windows 10 v1607                                                                     
        //                                                                                      
        _m025 sdk::array<struct wmi::logger_context_t*, 64> wmip_logger_context;                  //{ +0x0390    } | .WmipLoggerContext
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m026 wchar_t*                                      rt_backlog_file_root;                 //{ +0x1010    } | .RTBacklogFileRoot
        _m027 struct ex::wnf_subscription_t*                container_state_wnf_subscription;     //{ +0x1038    } | .ContainerStateWnfSubscription
        _m028 uint32_t                                      container_state_wnf_callback_called;  //{ +0x1040    } | .ContainerStateWnfCallbackCalled
        _m029 struct nt::work_queue_item_t*                 unsubscribe_work_item;                //{ +0x1048    } | .UnsubscribeWorkItem
                                                                                                
        SDK_MAGIC_PROPERTIES( "_ETW_SILODRIVERSTATE.$", 0x1220, true, 0xe06886f1a0b7423d );                                    
        SDK_DYNAMIC_SIZE( silodriverstate_t );                                                  
    };                                                                                          
};
#include "magic/silodriverstate_t.end.hpp"
