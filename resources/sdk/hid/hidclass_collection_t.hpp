#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "collection_information_t.hpp"
#include "hidclass_collection_type_t.hpp"

namespace hidp { struct preparsed_data_t; }
namespace nt   { struct irp_t;            }

#include "magic/hidclass_collection_t.start.hpp"
namespace hid
{
    // [struct _HIDCLASS_COLLECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hidclass_collection_t                                                         
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                               
        _m000 uint32_t                             collection_number;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CollectionNumber
        _m001 uint32_t                             collection_index;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CollectionIndex
        _m002 nt::list_entry_t                     file_extension_list;                    //{ +0x0010    +0x0010    +0x0018    +0x0010    } | .FileExtensionList
        _m003 uint64_t                             file_extension_list_spin_lock;          //{ +0x0020    +0x0020    +0x0028    +0x0020    } | .FileExtensionListSpinLock
        _m004 uint32_t                             poll_interval_msec;                     //{ +0x0028    +0x003c    +0x0050    +0x003c    } | .PollInterval_msec
        _m005 struct nt::ktimer_t                  polled_device_timer;                    //{ +0x0030    +0x0040    +0x0058    +0x0040    } | .polledDeviceTimer
        _m006 struct nt::kdpc_t                    polled_device_timer_dpc;                //{ +0x0070    +0x0080    +0x0098    +0x0080    } | .polledDeviceTimerDPC
        _m007 nt::list_entry_t                     polled_device_read_queue;               //{ +0x00b0    +0x00c0    +0x00d8    +0x00c0    } | .polledDeviceReadQueue
        _m008 uint64_t                             polled_device_read_queue_spin_lock;     //{ +0x00c0    +0x00d0    +0x00e8    +0x00d0    } | .polledDeviceReadQueueSpinLock
        _m009 uint8_t*                             saved_polled_report_buf;                //{ +0x00c8    +0x00d8    +0x00f0    +0x00d8    } | .savedPolledReportBuf
        _m010 uint32_t                             saved_polled_report_len;                //{ +0x00d0    +0x00e0    +0x00f8    +0x00e0    } | .savedPolledReportLen
        _m011 uint8_t                              polled_data_is_stale;                   //{ +0x00d4    +0x00e4    +0x00fc    +0x00e4    } | .polledDataIsStale
        _m012 nt::unicode_view                     symbolic_link_name;                     //{ +0x00d8    +0x00e8    +0x0100    +0x00e8    } | .SymbolicLinkName
        _m013 nt::unicode_view                     symbolic_link_name_system_control;      //{ +0x00e8    +0x00f8    +0x0110    +0x00f8    } | .SymbolicLinkName_SystemControl
        _m014 struct hid::collection_information_t hid_collection_info;                    //{ +0x00f8    +0x0108    +0x0120    +0x0108    } | .hidCollectionInfo
        _m015 struct hidp::preparsed_data_t*       phid_descriptor;                        //{ +0x0108    +0x0118    +0x0130    +0x0118    } | .phidDescriptor
        _m016 uint8_t*                             cooked_interrupt_report_buf;            //{ +0x0110    +0x0120    +0x0138    +0x0120    } | .cookedInterruptReportBuf
        _m017 struct nt::irp_t*                    power_event_irp;                        //{ +0x0118    +0x0128    +0x0140    +0x0128    } | .powerEventIrp
        _m018 uint64_t                             power_event_spin_lock;                  //{ +0x0120    +0x0130    +0x0148    +0x0130    } | .powerEventSpinLock
        _m019 uint32_t                             secure_read_mode;                       //{ +0x0128    +0x0138    +0x0150    +0x0138    } | .secureReadMode
        _m020 uint64_t                             secure_read_lock;                       //{ +0x0130    +0x0140    +0x0158    +0x0140    } | .secureReadLock
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                               
        _m021 uint16_t                             usage_page;                             //{ +0x0008    +0x0008    +0x0008    } | .UsagePage
        _m022 uint16_t                             usage;                                  //{ +0x000a    +0x000a    +0x000a    } | .Usage
        _m023 uint32_t                             num_pending_reads;                      //{ +0x000c    +0x0010    +0x000c    } | .NumPendingReads
        _m024 nt::list_entry_t                     unread_report_list;                     //{ +0x0028    +0x0030    +0x0028    } | .UnreadReportList
        _m025 uint32_t                             current_unread_report_list_queue_size;  //{ +0x0038    +0x0040    +0x0038    } | .CurrentUnreadReportListQueueSize
        _m026 uint32_t                             open_count;                             //{ +0x0148    +0x0160    +0x0148    } | .OpenCount
        _m027 int32_t                              opens_for_read;                         //{ +0x014c    +0x0164    +0x014c    } | .OpensForRead
        _m028 int64_t                              last_read_report_time;                  //{ +0x0150    +0x0168    +0x0150    } | .LastReadReportTime
        _m029 int64_t                              last_int_report_time;                   //{ +0x0150    +0x0168    +0x0150    } | .LastIntReportTime
        _m030 int64_t                              last_read_report_info_trace_time;       //{ +0x0158    +0x0170    +0x0158    } | .LastReadReportInfoTraceTime
        _m031 uint64_t                             num_read_reports;                       //{ +0x0160    +0x0178    +0x0160    } | .NumReadReports
        _m032 uint64_t                             accum_int_reports;                      //{ +0x0160    +0x0178    +0x0160    } | .AccumIntReports
        _m033 uint64_t                             num_read_reports_since_start;           //{ +0x0168    +0x0180    +0x0168    } | .NumReadReportsSinceStart
        _m034 uint64_t                             num_read_reports_since_presence;        //{ +0x0170    +0x0188    +0x0170    } | .NumReadReportsSincePresence
        _m035 uint64_t                             num_read_reports_since_d0;              //{ +0x0178    +0x0190    +0x0178    } | .NumReadReportsSinceD0
        _m036 uint64_t                             num_read_reports_since_open_for_read;   //{ +0x0180    +0x0198    +0x0180    } | .NumReadReportsSinceOpenForRead
        _m037 uint64_t                             num_read_reports_since_capture_state;   //{ +0x0188    +0x01a0    +0x0188    } | .NumReadReportsSinceCaptureState
                                                                                         
        // Windows 11                                                                    
        //                                                                               
        _m038 enum hid::hidclass_collection_type_t collection_type;                        //{ +0x000c    } | .CollectionType
        _m039 int64_t                              last_unread_report_queued_time;         //{ +0x0048    } | .LastUnreadReportQueuedTime
                                                                                         
        // Windows 10 v1607                                                              
        //                                                                               
        _m040 uint32_t                             num_pending_reads_;                     //{ +0x0008    } | .numPendingReads
                                                                                         
        SDK_MAGIC_PROPERTIES( "_HIDCLASS_COLLECTION.$", 0x190, true, 0xe93445699f794c21 );                                      
        SDK_DYNAMIC_SIZE( hidclass_collection_t );                                       
    };                                                                                   
};
#include "magic/hidclass_collection_t.end.hpp"
