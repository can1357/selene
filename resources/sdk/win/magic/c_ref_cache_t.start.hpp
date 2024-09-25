#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRefCache._cRefs", c_refs, 0x0, 0x20, true, 0x35660d7f195dc590)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRefCache._cStrongItfs", c_strong_itfs, 0x20, 0x20, true, 0x6389498ee938df24)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRefCache._cWeakItfs", c_weak_itfs, 0x40, 0x20, true, 0x7d8df73a8f96c9f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRefCache._cTableStrong", c_table_strong, 0x60, 0x20, true, 0x90f40847e49e29e3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRefCache._cIRCs", c_ir_cs, 0x80, 0x20, true, 0xdbd14b4e7d752dd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::irc_entry_t*), "CRefCache._pIRCList", p_irc_list, 0xc0, 0x40, true, 0xfd0bf0b22e3fbb30)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::soid_registration_t), "CRefCache._soidReg", soid_reg, 0x100, 0xc0, true, 0xb6b6906be83d2b1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif