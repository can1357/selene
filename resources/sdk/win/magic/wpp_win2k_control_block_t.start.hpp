#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WPP_WIN2K_CONTROL_BLOCK.Logger", logger, 0x0, 0x40, true, 0x3d30341cd1961bbc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WPP_WIN2K_CONTROL_BLOCK.Flags", flags, 0x40, 0x20, true, 0x5e72518d93069083)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WPP_WIN2K_CONTROL_BLOCK.Level", level, 0x60, 0x20, true, 0xb6b598b8acfeacb2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WPP_WIN2K_CONTROL_BLOCK.ControlGuid", control_guid, 0x80, 0x40, true, 0x93bc10f9cb4fa481)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif