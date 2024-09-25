#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/volume_telemetry_t.start.hpp"
namespace cc
{
    // [struct _CC_VOLUME_TELEMETRY]
    // => Windows 11
    //
    struct volume_telemetry_t                                                                          
    {                                                                                                  
        // Windows 11                                                                                  
        //                                                                                             
        _m000 struct nt::guid_t        device_guid;                                                      //{ +0x0000    } | .DeviceGuid
        _m001 uint64_t                 total_dirty_pages;                                                //{ +0x0010    } | .TotalDirtyPages
        _m002 uint64_t                 max_dirty_pages;                                                  //{ +0x0018    } | .MaxDirtyPages
        _m003 uint64_t                 total_dirty_page_threshold;                                       //{ +0x0020    } | .TotalDirtyPageThreshold
        _m004 uint64_t                 top_dirty_page_threshold;                                         //{ +0x0028    } | .TopDirtyPageThreshold
        _m005 uint64_t                 bottom_dirty_page_threshold;                                      //{ +0x0030    } | .BottomDirtyPageThreshold
        _m006 uint64_t                 dirty_page_samples;                                               //{ +0x0038    } | .DirtyPageSamples
        _m007 uint64_t                 total_pages_queued_to_disk;                                       //{ +0x0040    } | .TotalPagesQueuedToDisk
        _m008 uint64_t                 max_pages_queued_to_disk;                                         //{ +0x0048    } | .MaxPagesQueuedToDisk
        _m009 uint64_t                 pages_queued_to_disk_samples;                                     //{ +0x0050    } | .PagesQueuedToDiskSamples
        _m010 uint64_t                 total_logged_pages_queued_to_disk;                                //{ +0x0058    } | .TotalLoggedPagesQueuedToDisk
        _m011 uint64_t                 max_logged_pages_queued_to_disk;                                  //{ +0x0060    } | .MaxLoggedPagesQueuedToDisk
        _m012 uint64_t                 logged_pages_queued_to_disk_samples;                              //{ +0x0068    } | .LoggedPagesQueuedToDiskSamples
        _m013 uint64_t                 read_total_bytes;                                                 //{ +0x0070    } | .ReadTotalBytes
        _m014 uint64_t                 read_paged_in_total_bytes;                                        //{ +0x0078    } | .ReadPagedInTotalBytes
        _m015 uint64_t                 read_ahead_total_bytes;                                           //{ +0x0080    } | .ReadAheadTotalBytes
        _m016 uint64_t                 total_synchronous_read_io_count;                                  //{ +0x0088    } | .TotalSynchronousReadIoCount
        _m017 uint64_t                 total_synchronous_non_blocking_read_io_count;                     //{ +0x0090    } | .TotalSynchronousNonBlockingReadIoCount
        _m018 uint64_t                 total_failed_synchronous_non_blocking_read_io_count;              //{ +0x0098    } | .TotalFailedSynchronousNonBlockingReadIoCount
        _m019 uint64_t                 total_writes;                                                     //{ +0x00a0    } | .TotalWrites
        _m020 uint64_t                 total_hard_throttle_writes;                                       //{ +0x00a8    } | .TotalHardThrottleWrites
        _m021 uint64_t                 total_soft_throttle_writes;                                       //{ +0x00b0    } | .TotalSoftThrottleWrites
        _m022 uint64_t                 total_lazy_writer_calls;                                          //{ +0x00b8    } | .TotalLazyWriterCalls
        _m023 uint64_t                 total_lazy_writer_latency;                                        //{ +0x00c0    } | .TotalLazyWriterLatency
        _m024 uint64_t                 total_lazy_writer_pages_flushed;                                  //{ +0x00c8    } | .TotalLazyWriterPagesFlushed
        _m025 uint64_t                 total_lazy_writer_avg_pages_per_second;                           //{ +0x00d0    } | .TotalLazyWriterAvgPagesPerSecond
        _m026 uint64_t                 synchronous_read_io_max_latency;                                  //{ +0x00d8    } | .SynchronousReadIoMaxLatency
        _m027 uint64_t                 synchronous_read_io_non_blocking_max_latency;                     //{ +0x00e0    } | .SynchronousReadIoNonBlockingMaxLatency
        _m028 sdk::array<uint64_t, 12> synchronous_read_io_counts;                                       //{ +0x00e8    } | .SynchronousReadIoCounts
        _m029 sdk::array<uint64_t, 12> synchronous_read_total_latency;                                   //{ +0x0148    } | .SynchronousReadTotalLatency
        _m030 sdk::array<uint64_t, 12> synchronous_read_non_blocking_io_counts;                          //{ +0x01a8    } | .SynchronousReadNonBlockingIoCounts
        _m031 sdk::array<uint64_t, 12> synchronous_read_non_blocking_total_latency;                      //{ +0x0208    } | .SynchronousReadNonBlockingTotalLatency
        _m032 uint64_t                 total_synchronous_write_io_count;                                 //{ +0x0268    } | .TotalSynchronousWriteIoCount
        _m033 uint64_t                 total_synchronous_non_blocking_write_io_count;                    //{ +0x0270    } | .TotalSynchronousNonBlockingWriteIoCount
        _m034 uint64_t                 total_failed_synchronous_non_blocking_write_io_count;             //{ +0x0278    } | .TotalFailedSynchronousNonBlockingWriteIoCount
        _m035 uint64_t                 synchronous_write_io_max_latency;                                 //{ +0x0280    } | .SynchronousWriteIoMaxLatency
        _m036 uint64_t                 synchronous_write_io_non_blocking_max_latency;                    //{ +0x0288    } | .SynchronousWriteIoNonBlockingMaxLatency
        _m037 sdk::array<uint64_t, 12> synchronous_write_io_counts;                                      //{ +0x0290    } | .SynchronousWriteIoCounts
        _m038 sdk::array<uint64_t, 12> synchronous_write_total_latency;                                  //{ +0x02f0    } | .SynchronousWriteTotalLatency
        _m039 sdk::array<uint64_t, 12> synchronous_write_non_blocking_io_counts;                         //{ +0x0350    } | .SynchronousWriteNonBlockingIoCounts
        _m040 sdk::array<uint64_t, 12> synchronous_write_non_blocking_total_latency;                     //{ +0x03b0    } | .SynchronousWriteNonBlockingTotalLatency
        _m041 uint64_t                 total_asynchronous_read_io_count;                                 //{ +0x0410    } | .TotalAsynchronousReadIoCount
        _m042 uint64_t                 asynchronous_read_io_max_latency;                                 //{ +0x0418    } | .AsynchronousReadIoMaxLatency
        _m043 sdk::array<uint64_t, 12> asynchronous_read_io_counts;                                      //{ +0x0420    } | .AsynchronousReadIoCounts
        _m044 sdk::array<uint64_t, 12> asynchronous_read_total_latency;                                  //{ +0x0480    } | .AsynchronousReadTotalLatency
        _m045 uint64_t                 cumulative_total_dirty_pages;                                     //{ +0x04e0    } | .CumulativeTotalDirtyPages
        _m046 uint64_t                 cumulative_max_dirty_pages;                                       //{ +0x04e8    } | .CumulativeMaxDirtyPages
        _m047 uint64_t                 cumulative_dirty_page_threshold;                                  //{ +0x04f0    } | .CumulativeDirtyPageThreshold
        _m048 uint64_t                 cumulative_top_dirty_page_threshold;                              //{ +0x04f8    } | .CumulativeTopDirtyPageThreshold
        _m049 uint64_t                 cumulative_bottom_dirty_page_threshold;                           //{ +0x0500    } | .CumulativeBottomDirtyPageThreshold
        _m050 uint64_t                 cumulative_dirty_page_samples;                                    //{ +0x0508    } | .CumulativeDirtyPageSamples
        _m051 uint64_t                 cumulative_total_pages_queued_to_disk;                            //{ +0x0510    } | .CumulativeTotalPagesQueuedToDisk
        _m052 uint64_t                 cumulative_max_pages_queued_to_disk;                              //{ +0x0518    } | .CumulativeMaxPagesQueuedToDisk
        _m053 uint64_t                 cumulative_pages_queued_to_disk_samples;                          //{ +0x0520    } | .CumulativePagesQueuedToDiskSamples
        _m054 uint64_t                 cumulative_total_logged_pages_queued_to_disk;                     //{ +0x0528    } | .CumulativeTotalLoggedPagesQueuedToDisk
        _m055 uint64_t                 cumulative_max_logged_pages_queued_to_disk;                       //{ +0x0530    } | .CumulativeMaxLoggedPagesQueuedToDisk
        _m056 uint64_t                 cumulative_logged_pages_queued_to_disk_samples;                   //{ +0x0538    } | .CumulativeLoggedPagesQueuedToDiskSamples
        _m057 uint64_t                 cumulative_read_total_bytes;                                      //{ +0x0540    } | .CumulativeReadTotalBytes
        _m058 uint64_t                 cumulative_read_paged_in_total_bytes;                             //{ +0x0548    } | .CumulativeReadPagedInTotalBytes
        _m059 uint64_t                 cumulative_read_ahead_total_bytes;                                //{ +0x0550    } | .CumulativeReadAheadTotalBytes
        _m060 uint64_t                 cumulative_total_synchronous_read_io_count;                       //{ +0x0558    } | .CumulativeTotalSynchronousReadIoCount
        _m061 uint64_t                 cumulative_total_synchronous_non_blocking_read_io_count;          //{ +0x0560    } | .CumulativeTotalSynchronousNonBlockingReadIoCount
        _m062 uint64_t                 cumulative_total_failed_synchronous_non_blocking_read_io_count;   //{ +0x0568    } | .CumulativeTotalFailedSynchronousNonBlockingReadIoCount
        _m063 uint64_t                 cumulative_total_writes;                                          //{ +0x0570    } | .CumulativeTotalWrites
        _m064 uint64_t                 cumulative_total_hard_throttle_writes;                            //{ +0x0578    } | .CumulativeTotalHardThrottleWrites
        _m065 uint64_t                 cumulative_total_soft_throttle_writes;                            //{ +0x0580    } | .CumulativeTotalSoftThrottleWrites
        _m066 uint64_t                 cumulative_lazy_writer_calls;                                     //{ +0x0588    } | .CumulativeLazyWriterCalls
        _m067 uint64_t                 cumulative_lazy_writer_latency;                                   //{ +0x0590    } | .CumulativeLazyWriterLatency
        _m068 uint64_t                 cumulative_lazy_writer_pages_flushed;                             //{ +0x0598    } | .CumulativeLazyWriterPagesFlushed
        _m069 uint64_t                 cumulative_lazy_writer_avg_pages_per_second;                      //{ +0x05a0    } | .CumulativeLazyWriterAvgPagesPerSecond
        _m070 uint64_t                 cumulative_synchronous_read_io_max_latency;                       //{ +0x05a8    } | .CumulativeSynchronousReadIoMaxLatency
        _m071 uint64_t                 cumulative_synchronous_read_io_non_blocking_max_latency;          //{ +0x05b0    } | .CumulativeSynchronousReadIoNonBlockingMaxLatency
        _m072 sdk::array<uint64_t, 12> cumulative_synchronous_read_io_counts;                            //{ +0x05b8    } | .CumulativeSynchronousReadIoCounts
        _m073 sdk::array<uint64_t, 12> cumulative_synchronous_read_total_latency;                        //{ +0x0618    } | .CumulativeSynchronousReadTotalLatency
        _m074 sdk::array<uint64_t, 12> cumulative_synchronous_read_non_blocking_io_counts;               //{ +0x0678    } | .CumulativeSynchronousReadNonBlockingIoCounts
        _m075 sdk::array<uint64_t, 12> cumulative_synchronous_read_non_blocking_total_latency;           //{ +0x06d8    } | .CumulativeSynchronousReadNonBlockingTotalLatency
        _m076 uint64_t                 cumulative_total_synchronous_write_io_count;                      //{ +0x0738    } | .CumulativeTotalSynchronousWriteIoCount
        _m077 uint64_t                 cumulative_total_synchronous_non_blocking_write_io_count;         //{ +0x0740    } | .CumulativeTotalSynchronousNonBlockingWriteIoCount
        _m078 uint64_t                 cumulative_total_failed_synchronous_non_blocking_write_io_count;  //{ +0x0748    } | .CumulativeTotalFailedSynchronousNonBlockingWriteIoCount
        _m079 uint64_t                 cumulative_synchronous_write_io_max_latency;                      //{ +0x0750    } | .CumulativeSynchronousWriteIoMaxLatency
        _m080 uint64_t                 cumulative_synchronous_write_io_non_blocking_max_latency;         //{ +0x0758    } | .CumulativeSynchronousWriteIoNonBlockingMaxLatency
        _m081 sdk::array<uint64_t, 12> cumulative_synchronous_write_io_counts;                           //{ +0x0760    } | .CumulativeSynchronousWriteIoCounts
        _m082 sdk::array<uint64_t, 12> cumulative_synchronous_write_total_latency;                       //{ +0x07c0    } | .CumulativeSynchronousWriteTotalLatency
        _m083 sdk::array<uint64_t, 12> cumulative_synchronous_write_non_blocking_io_counts;              //{ +0x0820    } | .CumulativeSynchronousWriteNonBlockingIoCounts
        _m084 sdk::array<uint64_t, 12> cumulative_synchronous_write_non_blocking_total_latency;          //{ +0x0880    } | .CumulativeSynchronousWriteNonBlockingTotalLatency
        _m085 uint64_t                 cumulative_total_asynchronous_read_io_count;                      //{ +0x08e0    } | .CumulativeTotalAsynchronousReadIoCount
        _m086 uint64_t                 cumulative_asynchronous_read_io_max_latency;                      //{ +0x08e8    } | .CumulativeAsynchronousReadIoMaxLatency
        _m087 sdk::array<uint64_t, 12> cumulative_asynchronous_read_io_counts;                           //{ +0x08f0    } | .CumulativeAsynchronousReadIoCounts
        _m088 sdk::array<uint64_t, 12> cumulative_asynchronous_read_total_latency;                       //{ +0x0950    } | .CumulativeAsynchronousReadTotalLatency
                                                                                                       
        SDK_MAGIC_PROPERTIES( "_CC_VOLUME_TELEMETRY.$", 0x0, false, 0x8cd7d87557b0e557 );                                                                
        SDK_FIXED_SIZE( volume_telemetry_t, 0x9b0 );                                                                
    };                                                                                                 
};
#include "magic/volume_telemetry_t.end.hpp"
SDK_VERIFY( struct cc::volume_telemetry_t, 0x9b0 );
