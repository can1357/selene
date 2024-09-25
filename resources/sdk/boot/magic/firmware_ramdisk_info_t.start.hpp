#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_FIRMWARE_RAMDISK_INFO.Version", version, 0x0, 0x0, false, 0x3a5468ebea9efb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_FIRMWARE_RAMDISK_INFO.BlockSize", block_size, 0x0, 0x0, false, 0x91ef0c2a87002a25)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BOOT_FIRMWARE_RAMDISK_INFO.BaseAddress", base_address, 0x0, 0x0, false, 0x7ff4253b84ff0f19)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BOOT_FIRMWARE_RAMDISK_INFO.Size", size, 0x0, 0x0, false, 0x5301f896448cdec5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif