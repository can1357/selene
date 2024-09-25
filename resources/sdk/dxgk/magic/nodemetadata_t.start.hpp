#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_engine_type_t), "_DXGK_NODEMETADATA.EngineType", engine_type, 0x0, 0x20, true, 0xa733b04e5fd1b5ce)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_DXGK_NODEMETADATA.FriendlyName", friendly_name, 0x20, 0x0, true, 0x4cabfa0fb7a20040)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::nodemetadata_flags_t), "_DXGK_NODEMETADATA.Flags", flags, 0x220, 0x20, true, 0x15d3c75f0183bb46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_NODEMETADATA.GpuMmuSupported", gpu_mmu_supported, 0x240, 0x8, true, 0x565fcc7903983983)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_NODEMETADATA.IoMmuSupported", io_mmu_supported, 0x248, 0x8, true, 0x6faeac59dce09f80)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif