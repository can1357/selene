#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "MSIX_TABLE_POINTER.BaseIndexRegister", base_index_register, 0x0, 0x3, true, 0x282ef8fb7227e9b, 3, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MSIX_TABLE_POINTER.TableOffset", table_offset, 0x0, 0x20, true, 0x5ab1b7a31b8b914f)
#else
#define _m00
#define _m01
#endif