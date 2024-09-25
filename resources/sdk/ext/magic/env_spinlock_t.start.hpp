#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EXT_ENV_SPINLOCK.ListEntry", list_entry, 0x0, 0x0, false, 0x71ca82c0f7cf1c02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXT_ENV_SPINLOCK.Lock", lock, 0x0, 0x0, false, 0xbc01bfad4d04ee4a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXT_ENV_SPINLOCK.OldIrql", old_irql, 0x0, 0x0, false, 0x9c9b619fa1456f86)
#else
#define _m00
#define _m01
#define _m02
#endif