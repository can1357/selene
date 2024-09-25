#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPI_MODULEID.Length", length, 0x0, 0x10, true, 0xc38cb601cec5105b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum ndis::npi_moduleid_type_t), "_NPI_MODULEID.Type", type, 0x20, 0x20, true, 0xcaf61cc722443169)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NPI_MODULEID.Guid", guid, 0x40, 0x80, true, 0xed6555668c8d5ca1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_NPI_MODULEID.IfLuid", if_luid, 0x40, 0x40, true, 0x8261c7a71dc4ab8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif