#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCRUB_DATA_OUTPUT.Size", size, 0x0, 0x20, true, 0x90d75b7a3959b30e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCRUB_DATA_OUTPUT.Flags", flags, 0x20, 0x20, true, 0x637205c399de8424)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCRUB_DATA_OUTPUT.Status", status, 0x40, 0x20, true, 0x50507d15591f2383)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.ErrorFileOffset", error_file_offset, 0x80, 0x40, true, 0x89f0db7125272933)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.ErrorLength", error_length, 0xc0, 0x40, true, 0xed69dc3b1b6a2a90)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.NumberOfBytesRepaired", number_of_bytes_repaired, 0x100, 0x40, true, 0xbba2ccde50bb81b9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.NumberOfBytesFailed", number_of_bytes_failed, 0x140, 0x40, true, 0xc498cebec3949129)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.InternalFileReference", internal_file_reference, 0x180, 0x40, true, 0xc7cb0838f14257b2)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCRUB_DATA_OUTPUT.ResumeContextLength", resume_context_length, 0x1c0, 0x10, true, 0x68f54ffacbeb2e6a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCRUB_DATA_OUTPUT.ParityExtentDataOffset", parity_extent_data_offset, 0x1d0, 0x10, true, 0xf9f434e067f62b76)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 816>), "_SCRUB_DATA_OUTPUT.ResumeContext", resume_context, 0x400, 0x80, true, 0x332a46bfbe898fd2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.NumberOfMetadataBytesProcessed", number_of_metadata_bytes_processed, 0x300, 0x40, true, 0x4fc514c86b326fd)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.NumberOfDataBytesProcessed", number_of_data_bytes_processed, 0x340, 0x40, true, 0xe21a57a4a1de7491)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.TotalNumberOfMetadataBytesInUse", total_number_of_metadata_bytes_in_use, 0x380, 0x40, true, 0xbfe77cabca20c249)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.TotalNumberOfDataBytesInUse", total_number_of_data_bytes_in_use, 0x3c0, 0x40, true, 0xe57c804928844b45)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.DataBytesSkippedDueToNoAllocation", data_bytes_skipped_due_to_no_allocation, 0x0, 0x0, false, 0xe50e622122c9758d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.DataBytesSkippedDueToInvalidRun", data_bytes_skipped_due_to_invalid_run, 0x0, 0x0, false, 0x2a4381fbc1a656b8)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.DataBytesSkippedDueToIntegrityStream", data_bytes_skipped_due_to_integrity_stream, 0x0, 0x0, false, 0xd0cb75af95d9568e)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.DataBytesSkippedDueToRegionBeingClean", data_bytes_skipped_due_to_region_being_clean, 0x0, 0x0, false, 0x3ab381e32ef6d4b2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.DataBytesSkippedDueToLockConflict", data_bytes_skipped_due_to_lock_conflict, 0x0, 0x0, false, 0x21382caa1b3e0ee9)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.DataBytesSkippedDueToNoScrubDataFlag", data_bytes_skipped_due_to_no_scrub_data_flag, 0x0, 0x0, false, 0x6b91a8c365c8660c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.DataBytesSkippedDueToNoScrubNonIntegrityStreamFlag", data_bytes_skipped_due_to_no_scrub_non_integrity_stream_flag, 0x0, 0x0, false, 0x246158cc499ad572)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCRUB_DATA_OUTPUT.DataBytesScrubbed", data_bytes_scrubbed, 0x0, 0x0, false, 0xd41d9ad636128c5c)
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
#endif