#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CC_VOLUME_TELEMETRY.DeviceGuid", device_guid, 0x0, 0x0, false, 0xdda5ec9a52983df7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalDirtyPages", total_dirty_pages, 0x0, 0x0, false, 0x6ef90375d396e5c7)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.MaxDirtyPages", max_dirty_pages, 0x0, 0x0, false, 0x3e67987cfd7930c1)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalDirtyPageThreshold", total_dirty_page_threshold, 0x0, 0x0, false, 0x1ec98b577f6bc95d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TopDirtyPageThreshold", top_dirty_page_threshold, 0x0, 0x0, false, 0xa14af5c0b58e2e4e)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.BottomDirtyPageThreshold", bottom_dirty_page_threshold, 0x0, 0x0, false, 0x28406535d4608dcb)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.DirtyPageSamples", dirty_page_samples, 0x0, 0x0, false, 0xc3faef0654927ede)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalPagesQueuedToDisk", total_pages_queued_to_disk, 0x0, 0x0, false, 0x5757818c5de3679f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.MaxPagesQueuedToDisk", max_pages_queued_to_disk, 0x0, 0x0, false, 0xb3e966fe84e98a4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.PagesQueuedToDiskSamples", pages_queued_to_disk_samples, 0x0, 0x0, false, 0x189117d0d4740f99)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalLoggedPagesQueuedToDisk", total_logged_pages_queued_to_disk, 0x0, 0x0, false, 0xebe40d1e58e1de82)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.MaxLoggedPagesQueuedToDisk", max_logged_pages_queued_to_disk, 0x0, 0x0, false, 0x1947180a0e3844e4)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.LoggedPagesQueuedToDiskSamples", logged_pages_queued_to_disk_samples, 0x0, 0x0, false, 0x218d6c8e43731ff3)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.ReadTotalBytes", read_total_bytes, 0x0, 0x0, false, 0x97aa01b214af2ab7)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.ReadPagedInTotalBytes", read_paged_in_total_bytes, 0x0, 0x0, false, 0x328fb0b0e85968be)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.ReadAheadTotalBytes", read_ahead_total_bytes, 0x0, 0x0, false, 0x7fd76678b511a7a5)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalSynchronousReadIoCount", total_synchronous_read_io_count, 0x0, 0x0, false, 0x3e75752154a86c10)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalSynchronousNonBlockingReadIoCount", total_synchronous_non_blocking_read_io_count, 0x0, 0x0, false, 0xcb88c8c607fe5f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalFailedSynchronousNonBlockingReadIoCount", total_failed_synchronous_non_blocking_read_io_count, 0x0, 0x0, false, 0x6951065a98224316)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalWrites", total_writes, 0x0, 0x0, false, 0x21cf361f640a097a)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalHardThrottleWrites", total_hard_throttle_writes, 0x0, 0x0, false, 0x84c5f05ef270a4e0)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalSoftThrottleWrites", total_soft_throttle_writes, 0x0, 0x0, false, 0x71859f3c7d3c2bd9)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalLazyWriterCalls", total_lazy_writer_calls, 0x0, 0x0, false, 0x7f3e240c79d55552)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalLazyWriterLatency", total_lazy_writer_latency, 0x0, 0x0, false, 0xc2d1e25714f9e4e4)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalLazyWriterPagesFlushed", total_lazy_writer_pages_flushed, 0x0, 0x0, false, 0x86b19aeca1f3bfd5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalLazyWriterAvgPagesPerSecond", total_lazy_writer_avg_pages_per_second, 0x0, 0x0, false, 0x87954fec64c20669)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.SynchronousReadIoMaxLatency", synchronous_read_io_max_latency, 0x0, 0x0, false, 0xdc2964e8b0b404d6)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.SynchronousReadIoNonBlockingMaxLatency", synchronous_read_io_non_blocking_max_latency, 0x0, 0x0, false, 0x19bb5dd7c719210d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.SynchronousReadIoCounts", synchronous_read_io_counts, 0x0, 0x0, false, 0x20c0b0a509215985)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.SynchronousReadTotalLatency", synchronous_read_total_latency, 0x0, 0x0, false, 0x6d90605b14cff116)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.SynchronousReadNonBlockingIoCounts", synchronous_read_non_blocking_io_counts, 0x0, 0x0, false, 0x71f170bfaba63574)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.SynchronousReadNonBlockingTotalLatency", synchronous_read_non_blocking_total_latency, 0x0, 0x0, false, 0x6c7ce52a8866a995)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalSynchronousWriteIoCount", total_synchronous_write_io_count, 0x0, 0x0, false, 0x3c8034b5332060b1)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalSynchronousNonBlockingWriteIoCount", total_synchronous_non_blocking_write_io_count, 0x0, 0x0, false, 0x13520de50b27f05b)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalFailedSynchronousNonBlockingWriteIoCount", total_failed_synchronous_non_blocking_write_io_count, 0x0, 0x0, false, 0x91ce33bd96a89c3e)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.SynchronousWriteIoMaxLatency", synchronous_write_io_max_latency, 0x0, 0x0, false, 0x7e4da0c83080890d)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.SynchronousWriteIoNonBlockingMaxLatency", synchronous_write_io_non_blocking_max_latency, 0x0, 0x0, false, 0xe4bbb0f32e22c807)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.SynchronousWriteIoCounts", synchronous_write_io_counts, 0x0, 0x0, false, 0xb47312bb19319b18)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.SynchronousWriteTotalLatency", synchronous_write_total_latency, 0x0, 0x0, false, 0x5886a2e43a118583)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.SynchronousWriteNonBlockingIoCounts", synchronous_write_non_blocking_io_counts, 0x0, 0x0, false, 0xd73a6bed587f8499)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.SynchronousWriteNonBlockingTotalLatency", synchronous_write_non_blocking_total_latency, 0x0, 0x0, false, 0x2f5edd4b7008d35e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.TotalAsynchronousReadIoCount", total_asynchronous_read_io_count, 0x0, 0x0, false, 0x192d4d1e683e9f18)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.AsynchronousReadIoMaxLatency", asynchronous_read_io_max_latency, 0x0, 0x0, false, 0x18bb85275dfad515)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.AsynchronousReadIoCounts", asynchronous_read_io_counts, 0x0, 0x0, false, 0xea103ce2c48f292b)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.AsynchronousReadTotalLatency", asynchronous_read_total_latency, 0x0, 0x0, false, 0xe50ff13827376ee1)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalDirtyPages", cumulative_total_dirty_pages, 0x0, 0x0, false, 0xe7601872ef249b0f)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeMaxDirtyPages", cumulative_max_dirty_pages, 0x0, 0x0, false, 0xaf83f4970ba1bded)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeDirtyPageThreshold", cumulative_dirty_page_threshold, 0x0, 0x0, false, 0x785032e03a2f7a7c)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTopDirtyPageThreshold", cumulative_top_dirty_page_threshold, 0x0, 0x0, false, 0x5d8b28484f90fc40)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeBottomDirtyPageThreshold", cumulative_bottom_dirty_page_threshold, 0x0, 0x0, false, 0xa61fc81f1aa627f3)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeDirtyPageSamples", cumulative_dirty_page_samples, 0x0, 0x0, false, 0xc594e6ce2bd2b302)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalPagesQueuedToDisk", cumulative_total_pages_queued_to_disk, 0x0, 0x0, false, 0xb368f231e4bee739)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeMaxPagesQueuedToDisk", cumulative_max_pages_queued_to_disk, 0x0, 0x0, false, 0x1d82c04a68de3630)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativePagesQueuedToDiskSamples", cumulative_pages_queued_to_disk_samples, 0x0, 0x0, false, 0x672957c0038e3647)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalLoggedPagesQueuedToDisk", cumulative_total_logged_pages_queued_to_disk, 0x0, 0x0, false, 0xab7ee25f75549ea3)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeMaxLoggedPagesQueuedToDisk", cumulative_max_logged_pages_queued_to_disk, 0x0, 0x0, false, 0xba76ad3b524ee9a8)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeLoggedPagesQueuedToDiskSamples", cumulative_logged_pages_queued_to_disk_samples, 0x0, 0x0, false, 0x8444958e3d19006c)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeReadTotalBytes", cumulative_read_total_bytes, 0x0, 0x0, false, 0x958b4c2e7b9a608b)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeReadPagedInTotalBytes", cumulative_read_paged_in_total_bytes, 0x0, 0x0, false, 0xe5f16846f2dccb79)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeReadAheadTotalBytes", cumulative_read_ahead_total_bytes, 0x0, 0x0, false, 0x96b2ed51d7d0e5b1)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalSynchronousReadIoCount", cumulative_total_synchronous_read_io_count, 0x0, 0x0, false, 0x4f1672d4fcf11bd0)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalSynchronousNonBlockingReadIoCount", cumulative_total_synchronous_non_blocking_read_io_count, 0x0, 0x0, false, 0x18734b1ec2434ef8)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalFailedSynchronousNonBlockingReadIoCount", cumulative_total_failed_synchronous_non_blocking_read_io_count, 0x0, 0x0, false, 0x100dd1b2f4960698)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalWrites", cumulative_total_writes, 0x0, 0x0, false, 0x2f4c411111cb376c)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalHardThrottleWrites", cumulative_total_hard_throttle_writes, 0x0, 0x0, false, 0xcf8a55036f3054f)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalSoftThrottleWrites", cumulative_total_soft_throttle_writes, 0x0, 0x0, false, 0x9fe6654c76358c85)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeLazyWriterCalls", cumulative_lazy_writer_calls, 0x0, 0x0, false, 0xf7d9772b9e5833b7)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeLazyWriterLatency", cumulative_lazy_writer_latency, 0x0, 0x0, false, 0x85bbcc5c4365d9c9)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeLazyWriterPagesFlushed", cumulative_lazy_writer_pages_flushed, 0x0, 0x0, false, 0x4a0f81f9d6fd97f2)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeLazyWriterAvgPagesPerSecond", cumulative_lazy_writer_avg_pages_per_second, 0x0, 0x0, false, 0x8398fb6348b97897)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousReadIoMaxLatency", cumulative_synchronous_read_io_max_latency, 0x0, 0x0, false, 0x5d51f03a87fafd7a)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousReadIoNonBlockingMaxLatency", cumulative_synchronous_read_io_non_blocking_max_latency, 0x0, 0x0, false, 0xba05c2b6159ae233)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousReadIoCounts", cumulative_synchronous_read_io_counts, 0x0, 0x0, false, 0x8c56b5f57f746a5f)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousReadTotalLatency", cumulative_synchronous_read_total_latency, 0x0, 0x0, false, 0x4796eba32844f6f)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousReadNonBlockingIoCounts", cumulative_synchronous_read_non_blocking_io_counts, 0x0, 0x0, false, 0x3abb62e2418f333a)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousReadNonBlockingTotalLatency", cumulative_synchronous_read_non_blocking_total_latency, 0x0, 0x0, false, 0x4acb07db899eeb3b)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalSynchronousWriteIoCount", cumulative_total_synchronous_write_io_count, 0x0, 0x0, false, 0x522da6d807ad6192)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalSynchronousNonBlockingWriteIoCount", cumulative_total_synchronous_non_blocking_write_io_count, 0x0, 0x0, false, 0x17dcb6e0e834afb1)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalFailedSynchronousNonBlockingWriteIoCount", cumulative_total_failed_synchronous_non_blocking_write_io_count, 0x0, 0x0, false, 0x5bd750cc6615d0ff)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousWriteIoMaxLatency", cumulative_synchronous_write_io_max_latency, 0x0, 0x0, false, 0xb4a58356530521c3)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousWriteIoNonBlockingMaxLatency", cumulative_synchronous_write_io_non_blocking_max_latency, 0x0, 0x0, false, 0xa4ace47d893d9639)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousWriteIoCounts", cumulative_synchronous_write_io_counts, 0x0, 0x0, false, 0xa0fba2d22f3965b9)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousWriteTotalLatency", cumulative_synchronous_write_total_latency, 0x0, 0x0, false, 0x92aa5b0f2d1509a4)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousWriteNonBlockingIoCounts", cumulative_synchronous_write_non_blocking_io_counts, 0x0, 0x0, false, 0x4cbf63c4ce5b53cb)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeSynchronousWriteNonBlockingTotalLatency", cumulative_synchronous_write_non_blocking_total_latency, 0x0, 0x0, false, 0xd2ebd65ab05873d4)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeTotalAsynchronousReadIoCount", cumulative_total_asynchronous_read_io_count, 0x0, 0x0, false, 0x335b4d23976529f7)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_VOLUME_TELEMETRY.CumulativeAsynchronousReadIoMaxLatency", cumulative_asynchronous_read_io_max_latency, 0x0, 0x0, false, 0x3237022a8b55f6d3)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeAsynchronousReadIoCounts", cumulative_asynchronous_read_io_counts, 0x0, 0x0, false, 0xf1a7479583e2bc25)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 12>), "_CC_VOLUME_TELEMETRY.CumulativeAsynchronousReadTotalLatency", cumulative_asynchronous_read_total_latency, 0x0, 0x0, false, 0xb63b65a4da31576)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#endif