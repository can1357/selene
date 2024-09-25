#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUOTA_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x8b33d63dfc2821da)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUOTA_INFORMATION.SidLength", sid_length, 0x20, 0x20, true, 0xd9e6f23e137cb76b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUOTA_INFORMATION.ChangeTime", change_time, 0x40, 0x40, true, 0xddd47980f9783f88)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUOTA_INFORMATION.QuotaUsed", quota_used, 0x80, 0x40, true, 0x866986129db26c00)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUOTA_INFORMATION.QuotaThreshold", quota_threshold, 0xc0, 0x40, true, 0x3895d613a3cb81df)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUOTA_INFORMATION.QuotaLimit", quota_limit, 0x100, 0x40, true, 0x28e8e61fa76a670d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_t), "_FILE_QUOTA_INFORMATION.Sid", sid, 0x140, 0x60, true, 0x55540c58837da37d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif