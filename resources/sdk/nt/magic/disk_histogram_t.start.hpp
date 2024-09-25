#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_HISTOGRAM.DiskSize", disk_size, 0x0, 0x40, true, 0x83599973bcfd6e86)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_HISTOGRAM.Start", start, 0x40, 0x40, true, 0xd07d45ca987eece0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_HISTOGRAM.End", end, 0x80, 0x40, true, 0xb123dd0d6be231d3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_HISTOGRAM.Average", average, 0xc0, 0x40, true, 0x48acae99e27a91fe)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_HISTOGRAM.AverageRead", average_read, 0x100, 0x40, true, 0x4e55da95a272658b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_HISTOGRAM.AverageWrite", average_write, 0x140, 0x40, true, 0x837d4f60c25ae5a9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_HISTOGRAM.Granularity", granularity, 0x180, 0x20, true, 0xf58cfb70ea69a4ec)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_HISTOGRAM.Size", size, 0x1a0, 0x20, true, 0x7d86cb0be379c395)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_HISTOGRAM.ReadCount", read_count, 0x1c0, 0x20, true, 0xd2c5aa2bba75a74f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_HISTOGRAM.WriteCount", write_count, 0x1e0, 0x20, true, 0x8a50384d41c1ac0a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::histogram_bucket_t*), "_DISK_HISTOGRAM.Histogram", histogram, 0x200, 0x40, true, 0x333510fd4343517e)
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
#endif