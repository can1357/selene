#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t*), "_FS_FILTER_PARAMETERS.AcquireForModifiedPageWriter.EndingOffset", ending_offset, 0x0, 0x40, true, 0xd77cad46ba62d3cb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t**), "_FS_FILTER_PARAMETERS.AcquireForModifiedPageWriter.ResourceToRelease", resource_to_release, 0x40, 0x40, true, 0xb33953cb5852fef7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_acquire_for_modified_page_writer_t), "_FS_FILTER_PARAMETERS.AcquireForModifiedPageWriter", acquire_for_modified_page_writer, 0x0, 0x80, true, 0x85a78ba7ca225b6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_FS_FILTER_PARAMETERS.ReleaseForModifiedPageWriter.ResourceToRelease", resource_to_release, 0x0, 0x40, true, 0xdd8ee8b3e882fd25)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_release_for_modified_page_writer_t), "_FS_FILTER_PARAMETERS.ReleaseForModifiedPageWriter", release_for_modified_page_writer, 0x0, 0x40, true, 0x3ce3e1cc0d1e2b7d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum fs::filter_section_sync_type_t), "_FS_FILTER_PARAMETERS.AcquireForSectionSynchronization.SyncType", sync_type, 0x0, 0x20, true, 0x39444a5556a92143)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_PARAMETERS.AcquireForSectionSynchronization.PageProtection", page_protection, 0x20, 0x20, true, 0x25d168ac1b9a9f23)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct fs::filter_section_sync_output_t*), "_FS_FILTER_PARAMETERS.AcquireForSectionSynchronization.OutputInformation", output_information, 0x40, 0x40, true, 0x6cf0b1f1b8a8bbcb)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_PARAMETERS.AcquireForSectionSynchronization.Flags", flags, 0x80, 0x20, true, 0x83ffc4ab34768c6c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_PARAMETERS.AcquireForSectionSynchronization.AllocationAttributes", allocation_attributes, 0xa0, 0x20, true, 0x83e92f5f6902f549)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_acquire_for_section_synchronization_t), "_FS_FILTER_PARAMETERS.AcquireForSectionSynchronization", acquire_for_section_synchronization, 0x0, 0xc0, true, 0x9f6dc112fb1d5349)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FS_FILTER_PARAMETERS.Others.Argument1", argument1, 0x0, 0x40, true, 0x5b54673a32612c75)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FS_FILTER_PARAMETERS.Others.Argument2", argument2, 0x40, 0x40, true, 0x2c2d0f166f7cae7a)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FS_FILTER_PARAMETERS.Others.Argument3", argument3, 0x80, 0x40, true, 0xb9f1fe900318784e)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FS_FILTER_PARAMETERS.Others.Argument4", argument4, 0xc0, 0x40, true, 0x7d8d7738eb62f1f0)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FS_FILTER_PARAMETERS.Others.Argument5", argument5, 0x100, 0x40, true, 0x6b0d20ae51ca7f66)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_others_t), "_FS_FILTER_PARAMETERS.Others", others, 0x0, 0x40, true, 0xc27c50bf6c40a19a)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_FS_FILTER_PARAMETERS.QueryOpen.Irp", irp, 0x0, 0x40, true, 0x7404a3df9a1b2c90)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FS_FILTER_PARAMETERS.QueryOpen.FileInformation", file_information, 0x40, 0x40, true, 0xf23eb0b8e59c12d4)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_FS_FILTER_PARAMETERS.QueryOpen.Length", length, 0x80, 0x40, true, 0xceaed13e2178ef2)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_FS_FILTER_PARAMETERS.QueryOpen.FileInformationClass", file_information_class, 0xc0, 0x20, true, 0x51bfe4a9df3de1fe)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_FS_FILTER_PARAMETERS.QueryOpen.CompletionStatus", completion_status, 0xe0, 0x20, true, 0x97cfb622d9847a1a)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u20_query_open_t), "_FS_FILTER_PARAMETERS.QueryOpen", query_open, 0x0, 0x0, true, 0x42bbaf033372fa36)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fs::filter_stream_fo_notification_type_t), "_FS_FILTER_PARAMETERS.NotifyStreamFileObject.NotificationType", notification_type, 0x0, 0x0, false, 0xc9e19be3423af183)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FS_FILTER_PARAMETERS.NotifyStreamFileObject.SafeToRecurse", safe_to_recurse, 0x0, 0x0, false, 0x8b1fdf04c4c814bf)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u24_notify_stream_file_object_t), "_FS_FILTER_PARAMETERS.NotifyStreamFileObject", notify_stream_file_object, 0x0, 0x80, true, 0xac993a5c6936a205)
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
#endif