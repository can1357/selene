#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FACS.Signature", signature, 0x0, 0x20, true, 0x7a2bfe61a5dfcf2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FACS.Length", length, 0x20, 0x20, true, 0xb66e7351def37f1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FACS.HardwareSignature", hardware_signature, 0x40, 0x20, true, 0x3eba6eb35b81e4f9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FACS.pFirmwareWakingVector", p_firmware_waking_vector, 0x60, 0x20, true, 0xa2f6d6c3b01b247b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FACS.GlobalLock", global_lock, 0x80, 0x20, true, 0x5851108e2cc367ba)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FACS.Flags", flags, 0xa0, 0x20, true, 0x7919a064e1ff54a0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FACS.x_FirmwareWakingVector", x_firmware_waking_vector, 0xc0, 0x40, true, 0xde26f2f6f0a1df38)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FACS.version", version, 0x100, 0x8, true, 0x630d2bdbf154e768)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif