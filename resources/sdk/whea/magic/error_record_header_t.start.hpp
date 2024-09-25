#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_HEADER.Signature", signature, 0x0, 0x20, true, 0xfb2ccabff3924b9e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::revision_t), "_WHEA_ERROR_RECORD_HEADER.Revision", revision, 0x20, 0x10, true, 0xf852dd40e395e945)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_HEADER.SignatureEnd", signature_end, 0x30, 0x20, true, 0xfef9b162fafb36ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ERROR_RECORD_HEADER.SectionCount", section_count, 0x50, 0x10, true, 0xc46f56f9e0f71542)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_severity_t), "_WHEA_ERROR_RECORD_HEADER.Severity", severity, 0x60, 0x20, true, 0xb225856159ecdd1a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::error_record_header_validbits_t), "_WHEA_ERROR_RECORD_HEADER.ValidBits", valid_bits, 0x80, 0x20, true, 0x56534e7834f7c964)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_HEADER.Length", length, 0xa0, 0x20, true, 0x7a3a11dc54cfedf2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::timestamp_t), "_WHEA_ERROR_RECORD_HEADER.Timestamp", timestamp, 0xc0, 0x40, true, 0x3e2f154436ea16c0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_RECORD_HEADER.PlatformId", platform_id, 0x100, 0x80, true, 0xa2e830393c8e6545)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_RECORD_HEADER.PartitionId", partition_id, 0x180, 0x80, true, 0xae10b9bf23311f68)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_RECORD_HEADER.CreatorId", creator_id, 0x200, 0x80, true, 0xd0db66163ecbeebc)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_RECORD_HEADER.NotifyType", notify_type, 0x280, 0x80, true, 0x23f5eb96f34211fa)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ERROR_RECORD_HEADER.RecordId", record_id, 0x300, 0x40, true, 0xe7422448ff05eb49)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::error_record_header_flags_t), "_WHEA_ERROR_RECORD_HEADER.Flags", flags, 0x340, 0x20, true, 0x1f399236795fe0cf)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::persistence_info_t), "_WHEA_ERROR_RECORD_HEADER.PersistenceInfo", persistence_info, 0x360, 0x40, true, 0x4533bf7cdf66591c)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_HEADER.OsBuildNumber", os_build_number, 0x3a0, 0x20, true, 0xceaa5497db8c590c)
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
#endif