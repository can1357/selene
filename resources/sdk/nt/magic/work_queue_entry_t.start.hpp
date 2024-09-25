#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WORK_QUEUE_ENTRY.WorkQueueLinks", work_queue_links, 0x0, 0x80, true, 0x152381a78b9a7742)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WORK_QUEUE_ENTRY.Parameters.Read.FileObject", file_object, 0x0, 0x40, true, 0x1029b01e1559cc56)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WORK_QUEUE_ENTRY.Parameters.Read.DiskIoAttribution", disk_io_attribution, 0x40, 0x40, true, 0x7f0e0f9fdd1b4891)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_read_t), "_WORK_QUEUE_ENTRY.Parameters.Read", read, 0x0, 0x80, true, 0x6af2dac61e8cf100)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_t*), "_WORK_QUEUE_ENTRY.Parameters.Write.SharedCacheMap", shared_cache_map, 0x0, 0x40, true, 0x59d3b13b9640ecb9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_write_t), "_WORK_QUEUE_ENTRY.Parameters.Write", write, 0x0, 0x40, true, 0x7a2761ee12b5ff1a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_WORK_QUEUE_ENTRY.Parameters.Event.Event", event, 0x0, 0x40, true, 0x8cca6565d8c8488e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_event_t), "_WORK_QUEUE_ENTRY.Parameters.Event", event, 0x0, 0x40, true, 0xc062ded0a86725b7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORK_QUEUE_ENTRY.Parameters.Notification.Reason", reason, 0x0, 0x20, true, 0xad51c684ea7acf89)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_notification_t), "_WORK_QUEUE_ENTRY.Parameters.Notification", notification, 0x0, 0x20, true, 0xc5f6dd579979e60d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_t*), "_WORK_QUEUE_ENTRY.Parameters.LowPriWrite.SharedCacheMap", shared_cache_map, 0x0, 0x40, true, 0x58e8b6baf56d4e71)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t*), "_WORK_QUEUE_ENTRY.Parameters.LowPriWrite.IoStatus", io_status, 0x40, 0x40, true, 0xe51ea3e0f9ca7015)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_WORK_QUEUE_ENTRY.Parameters.LowPriWrite.CallerWaitEvent", caller_wait_event, 0x80, 0xc0, true, 0x96f22b7e55170d16)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORK_QUEUE_ENTRY.Parameters.LowPriWrite.IsLowPriWriteBehind", is_low_pri_write_behind, 0x140, 0x8, true, 0x8922e6bb90d3ff2a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_low_pri_write_t), "_WORK_QUEUE_ENTRY.Parameters.LowPriWrite", low_pri_write, 0x0, 0x80, true, 0x9292f68d64cbe4e1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.SharedCacheMap", shared_cache_map, 0x0, 0x40, true, 0x4deb0d962bbfe6cf)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.FileOffset", file_offset, 0x40, 0x40, true, 0x8a664597ee6759d6)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.FileObject", file_object, 0x80, 0x40, true, 0x964ed6ac0394410b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.Length", length, 0xc0, 0x20, true, 0x535f247bb1af7263)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.PrefetchList", prefetch_list, 0x100, 0x40, true, 0x5dd9c7660c76d38d)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.PrefetchPagePriority", prefetch_page_priority, 0x140, 0x20, true, 0xb8c57780c9842c24)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.Mdl", mdl, 0x180, 0x40, true, 0xc42c356be590e84f)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.IoStatusBlock", io_status_block, 0x1c0, 0x40, true, 0x91bf60c65724f54e)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::async_read_context_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.CallbackContext", callback_context, 0x200, 0x40, true, 0xc529003bb55fac52)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.OriginatingProcess", originating_process, 0x240, 0x40, true, 0xe79af7080c3cf207)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.IoIssuerThread", io_issuer_thread, 0x280, 0x40, true, 0x79c95b1d96b2ed37)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.DiskIoAttribution", disk_io_attribution, 0x2c0, 0x40, true, 0x33c069439164ccad)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.RequestorMode", requestor_mode, 0x300, 0x8, true, 0xe385a54c5c112521)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.NestingLevel", nesting_level, 0x320, 0x20, true, 0x28d3931e31f63095)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.StartTime", start_time, 0x0, 0x0, false, 0x579f75a6e03f04c2)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u24_async_read_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncRead", async_read, 0x0, 0x40, true, 0x575b4b0f1b207c3)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::flush_packet_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncWriteBehind.FlushPacket", flush_packet, 0x0, 0x0, false, 0x3bc265b8439125ea)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_t*), "_WORK_QUEUE_ENTRY.Parameters.AsyncWriteBehind.SharedCacheMap", shared_cache_map, 0x0, 0x0, false, 0x78f6e1cb79036a50)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncWriteBehind.FlushEvent", flush_event, 0x0, 0x0, false, 0xb2334ea998beaf1e)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncWriteBehind.IoStatus", io_status, 0x0, 0x0, false, 0x81a3fccbf1a394a2)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncWriteBehind.DoWriteBehindPostProcessing", do_write_behind_post_processing, 0x0, 0x0, false, 0x9e3986c3cfbc3ef8)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u28_async_write_behind_t), "_WORK_QUEUE_ENTRY.Parameters.AsyncWriteBehind", async_write_behind, 0x0, 0x0, false, 0xbb74ececd6973554)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WORK_QUEUE_ENTRY.Parameters", parameters, 0x80, 0x40, true, 0x3787fd5ccc416dbc)
#define _m38 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_WORK_QUEUE_ENTRY.Function", function, 0x3c0, 0x8, true, 0xd43ef2705b190dc, 0, uint8_t,uint32_t)
#define _m39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::partition_t*), "_WORK_QUEUE_ENTRY.Partition", partition, 0x400, 0x40, true, 0xebe98e9d3ef6c09)
#define _m40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::private_volume_cachemap_t*), "_WORK_QUEUE_ENTRY.PrivateVolumeCacheMap", private_volume_cache_map, 0x0, 0x0, false, 0x53a641ac7701d41e)
#define _m41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::numa_node_t*), "_WORK_QUEUE_ENTRY.NumaNode", numa_node, 0x0, 0x0, false, 0x3de9216ef7233c66)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#endif