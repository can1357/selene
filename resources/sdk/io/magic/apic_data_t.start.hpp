#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_APIC_DATA.PhysicalAddress", physical_address, 0x0, 0x40, true, 0x4050bd1668dea7cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_APIC_DATA.Identifier", identifier, 0x40, 0x20, true, 0xca00696e770c209b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::apic_registers_t*), "_IO_APIC_DATA.BaseAddress", base_address, 0x80, 0x40, true, 0xaec283a5ab2017a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_APIC_DATA.Version", version, 0xc0, 0x8, true, 0x4ae67651b1e49853)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_APIC_DATA.PinCount", pin_count, 0xc8, 0x8, true, 0xff350310db75c5c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_APIC_DATA.Initialized", initialized, 0xd0, 0x8, true, 0x3ba076be8ce264d4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_APIC_DATA.InitializedFirstLocalUnit", initialized_first_local_unit, 0xd8, 0x8, true, 0x72c22ddf9c554383)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_APIC_DATA.GsiBase", gsi_base, 0xe0, 0x20, true, 0x4601221ee36b6ccb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_APIC_DATA.CmciRegister", cmci_register, 0x100, 0x20, true, 0xd8fb54bcf3142703)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_APIC_DATA.IoUnitMissing", io_unit_missing, 0x140, 0x8, true, 0x61760921015d895b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_APIC_DATA.DeferredErrorRegister", deferred_error_register, 0x120, 0x20, true, 0xf8b925c572e3c9ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif