#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "DEBUG_MEMORY_REQUIREMENTS.Start", start, 0x0, 0x40, true, 0x1f9601e1d5f49e3c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "DEBUG_MEMORY_REQUIREMENTS.MaxEnd", max_end, 0x40, 0x40, true, 0x2b9407e3b170217)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DEBUG_MEMORY_REQUIREMENTS.VirtualAddress", virtual_address, 0x80, 0x40, true, 0x5382bdac4090e1c7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DEBUG_MEMORY_REQUIREMENTS.Length", length, 0xc0, 0x20, true, 0x3199af38f9fcf4e3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "DEBUG_MEMORY_REQUIREMENTS.Cached", cached, 0xe0, 0x8, true, 0x9ab8b268612a6b9e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "DEBUG_MEMORY_REQUIREMENTS.Aligned", aligned, 0xe8, 0x8, true, 0x8ea10c00edd3cabe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif