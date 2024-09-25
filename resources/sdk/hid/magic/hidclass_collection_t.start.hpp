#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.CollectionNumber", collection_number, 0x0, 0x20, true, 0xfdd3ec1167a532e2)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.CollectionIndex", collection_index, 0x20, 0x20, true, 0xb5af8f5a7990116d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HIDCLASS_COLLECTION.FileExtensionList", file_extension_list, 0x80, 0x80, true, 0xc29c42e04c6ca8bd)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.FileExtensionListSpinLock", file_extension_list_spin_lock, 0x100, 0x40, true, 0x72746a208c53faea)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.PollInterval_msec", poll_interval_msec, 0x1e0, 0x20, true, 0xecad8f908e9ac71b)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_HIDCLASS_COLLECTION.polledDeviceTimer", polled_device_timer, 0x200, 0x0, true, 0xc46ab6a30f9ee69b)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_HIDCLASS_COLLECTION.polledDeviceTimerDPC", polled_device_timer_dpc, 0x400, 0x0, true, 0xebbd5be7c295ea41)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HIDCLASS_COLLECTION.polledDeviceReadQueue", polled_device_read_queue, 0x600, 0x80, true, 0x95c80b87d2dbbe04)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.polledDeviceReadQueueSpinLock", polled_device_read_queue_spin_lock, 0x680, 0x40, true, 0x5b542d9d1ed0c6a4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_HIDCLASS_COLLECTION.savedPolledReportBuf", saved_polled_report_buf, 0x6c0, 0x40, true, 0xd0db59d21893bfee)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.savedPolledReportLen", saved_polled_report_len, 0x700, 0x20, true, 0xe1bf3467e0498b16)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIDCLASS_COLLECTION.polledDataIsStale", polled_data_is_stale, 0x720, 0x8, true, 0x155d743063e7230b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_HIDCLASS_COLLECTION.SymbolicLinkName", symbolic_link_name, 0x740, 0x80, true, 0x10f12315e2dfd19f)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_HIDCLASS_COLLECTION.SymbolicLinkName_SystemControl", symbolic_link_name_system_control, 0x7c0, 0x80, true, 0xb3b8f2180ae284d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::collection_information_t), "_HIDCLASS_COLLECTION.hidCollectionInfo", hid_collection_info, 0x840, 0x60, true, 0xa9f0a01bc06b7164)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hidp::preparsed_data_t*), "_HIDCLASS_COLLECTION.phidDescriptor", phid_descriptor, 0x8c0, 0x40, true, 0x965575dc61526def)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_HIDCLASS_COLLECTION.cookedInterruptReportBuf", cooked_interrupt_report_buf, 0x900, 0x40, true, 0x94fd01e317d99891)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_HIDCLASS_COLLECTION.powerEventIrp", power_event_irp, 0x940, 0x40, true, 0x447f50e8dd9bdfec)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.powerEventSpinLock", power_event_spin_lock, 0x980, 0x40, true, 0x685d0d67410d8e9c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.secureReadMode", secure_read_mode, 0x9c0, 0x20, true, 0x490dcd4a60679876)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.secureReadLock", secure_read_lock, 0xa00, 0x40, true, 0x28810316d57641dd)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDCLASS_COLLECTION.UsagePage", usage_page, 0x40, 0x10, true, 0x2f19bc65678a8990)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HIDCLASS_COLLECTION.Usage", usage, 0x50, 0x10, true, 0xd383999d7e2b6dee)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.NumPendingReads", num_pending_reads, 0x60, 0x20, true, 0x795c775c311afc63)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HIDCLASS_COLLECTION.UnreadReportList", unread_report_list, 0x140, 0x80, true, 0x28b24e8e7912f52f)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.CurrentUnreadReportListQueueSize", current_unread_report_list_queue_size, 0x1c0, 0x20, true, 0x489002ec24e3cb9d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.OpenCount", open_count, 0xa40, 0x20, true, 0x767c375601e57b69)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HIDCLASS_COLLECTION.OpensForRead", opens_for_read, 0xa60, 0x20, true, 0xe1d665a75ff5f5eb)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HIDCLASS_COLLECTION.LastReadReportTime", last_read_report_time, 0xa80, 0x40, true, 0xd200fffd8802b3e3)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HIDCLASS_COLLECTION.LastIntReportTime", last_int_report_time, 0xa80, 0x40, true, 0xc1828f6674ecbf53)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HIDCLASS_COLLECTION.LastReadReportInfoTraceTime", last_read_report_info_trace_time, 0xac0, 0x40, true, 0x7a861a9b3a72a563)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.NumReadReports", num_read_reports, 0xb00, 0x40, true, 0x54111b94b6be76a9)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.AccumIntReports", accum_int_reports, 0xb00, 0x40, true, 0xa896abb42e1f5d98)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.NumReadReportsSinceStart", num_read_reports_since_start, 0xb40, 0x40, true, 0x718874a3b33c83b)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.NumReadReportsSincePresence", num_read_reports_since_presence, 0xb80, 0x40, true, 0x822ffb21d2cef577)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.NumReadReportsSinceD0", num_read_reports_since_d0, 0xbc0, 0x40, true, 0xfd0c826d44957cd0)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.NumReadReportsSinceOpenForRead", num_read_reports_since_open_for_read, 0xc00, 0x40, true, 0xaa41bd7c986bd6d4)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIDCLASS_COLLECTION.NumReadReportsSinceCaptureState", num_read_reports_since_capture_state, 0xc40, 0x40, true, 0x8807bedcc78d50ef)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::hidclass_collection_type_t), "_HIDCLASS_COLLECTION.CollectionType", collection_type, 0x0, 0x0, false, 0x38c5dd994fd45152)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HIDCLASS_COLLECTION.LastUnreadReportQueuedTime", last_unread_report_queued_time, 0x0, 0x0, false, 0xe0968e9384edcbb0)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_COLLECTION.numPendingReads", num_pending_reads_, 0x0, 0x0, false, 0xc9f169695927a7fd)
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
#endif