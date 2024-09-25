#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOB_RATE_CONTROL_HEADER.RateControlQuotaReference", rate_control_quota_reference, 0x0, 0x40, true, 0x54d0985fb63d4904)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_JOB_RATE_CONTROL_HEADER.OverQuotaHistory", over_quota_history, 0x40, 0x80, true, 0xb9c4aaad5ff55666)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_JOB_RATE_CONTROL_HEADER.BitMapBuffer", bit_map_buffer, 0xc0, 0x40, true, 0x994c5805b82c8b35)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOB_RATE_CONTROL_HEADER.BitMapBufferSize", bit_map_buffer_size, 0x100, 0x40, true, 0x5efd45158edccbc6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif