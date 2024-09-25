#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FIRMWARE_RAMDISK_INFORMATION.Version", version, 0x0, 0x0, false, 0x7970b092174305aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_FIRMWARE_RAMDISK_INFORMATION.BlockSize", block_size, 0x0, 0x0, false, 0x7ed1d1a634d8b862)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FIRMWARE_RAMDISK_INFORMATION.BaseAddress", base_address, 0x0, 0x0, false, 0xab05d3abdaef48f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_FIRMWARE_RAMDISK_INFORMATION.Size", size, 0x0, 0x0, false, 0x28b40c828aac9c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif