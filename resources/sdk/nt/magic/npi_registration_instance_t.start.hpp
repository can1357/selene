#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPI_REGISTRATION_INSTANCE.Version", version, 0x0, 0x10, true, 0x6d97dc2bf4529e70)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPI_REGISTRATION_INSTANCE.Size", size, 0x10, 0x10, true, 0xd3748dc8654cd751)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_NPI_REGISTRATION_INSTANCE.NpiId", npi_id, 0x40, 0x40, true, 0xc58b6c4b25ac12ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct ndis::npi_moduleid_t*), "_NPI_REGISTRATION_INSTANCE.ModuleId", module_id, 0x80, 0x40, true, 0x4edff113ac05c1f4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NPI_REGISTRATION_INSTANCE.Number", number, 0xc0, 0x20, true, 0x14736c10f1e14815)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_NPI_REGISTRATION_INSTANCE.NpiSpecificCharacteristics", npi_specific_characteristics, 0x100, 0x40, true, 0x24829f32f51d2105)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif