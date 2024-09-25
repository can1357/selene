#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::lookaside_list_ex_t), "_PPL_LOOKASIDE_LIST.List", list, 0x0, 0x0, true, 0x80ff19f1623828aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::lookaside_list_ex_t*), "_PPL_LOOKASIDE_LIST.BackendList", backend_list, 0x300, 0x40, true, 0xe0b263917cad5cc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPL_LOOKASIDE_LIST.Lock", lock, 0x340, 0x40, true, 0xf30970e6b62a0649)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPL_LOOKASIDE_LIST.Initialized", initialized, 0x380, 0x8, true, 0xe3107c74b6c2ebd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif