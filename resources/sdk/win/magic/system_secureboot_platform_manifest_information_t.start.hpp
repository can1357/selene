#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECUREBOOT_PLATFORM_MANIFEST_INFORMATION.PlatformManifestSize", platform_manifest_size, 0x0, 0x20, true, 0xac9c77f9504df161)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SYSTEM_SECUREBOOT_PLATFORM_MANIFEST_INFORMATION.PlatformManifest", platform_manifest, 0x20, 0x8, true, 0x4a8364336d6e6999)
#else
#define _m00
#define _m01
#endif