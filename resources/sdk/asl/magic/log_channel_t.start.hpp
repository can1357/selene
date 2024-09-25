#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 64>), "_ASL_LOG_CHANNEL.Name", name, 0x0, 0x0, true, 0xe5bc9653aebb56f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_ASL_LOG_CHANNEL.Data", data, 0x200, 0x40, true, 0x34809c21cfc96709)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_ASL_LOG_CHANNEL.DataSize", data_size, 0x240, 0x20, true, 0x63877b40b51bdd2e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASL_LOG_CHANNEL.Quota", quota, 0x260, 0x20, true, 0xaae72420362c9801)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASL_LOG_CHANNEL.Flags", flags, 0x280, 0x20, true, 0xf7df165f9f38c83)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASL_LOG_CHANNEL.Level", level, 0x2a0, 0x20, true, 0xb77a289b8a5d31a9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ASL_LOG_CHANNEL.Fence", fence, 0x2c0, 0x20, true, 0x2a4270a3ee9dd543)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif