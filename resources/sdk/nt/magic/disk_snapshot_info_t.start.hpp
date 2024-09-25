#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_SNAPSHOT_INFO.Version", version, 0x0, 0x20, true, 0x8caadf394fe053a0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::disk_snapshot_state_t), "_DISK_SNAPSHOT_INFO.State", state, 0x20, 0x20, true, 0x95a028f417e2dcba)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DISK_SNAPSHOT_INFO.SnapshotSetId", snapshot_set_id, 0x40, 0x80, true, 0xeb76bbd469e76f70)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DISK_SNAPSHOT_INFO.SnapshotId", snapshot_id, 0xc0, 0x80, true, 0xcc09c98a030d2cc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DISK_SNAPSHOT_INFO.LunId", lun_id, 0x140, 0x80, true, 0xbfa75fb8f4ae6c8f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_SNAPSHOT_INFO.CreationTimeStamp", creation_time_stamp, 0x1c0, 0x40, true, 0xe37632947308f7d2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_SNAPSHOT_INFO.ImportCount", import_count, 0x200, 0x20, true, 0x6faebc0f3c8b0a51)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_SNAPSHOT_INFO.Flags", flags, 0x220, 0x20, true, 0x3f72b046552958e9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_SNAPSHOT_INFO.AdditionalDataSize", additional_data_size, 0x240, 0x20, true, 0x2b4cdde13567922)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DISK_SNAPSHOT_INFO.AdditionalData", additional_data, 0x260, 0x8, true, 0xdc864fbd16569875)
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
#endif