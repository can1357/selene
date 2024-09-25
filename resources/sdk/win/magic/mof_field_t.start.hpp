#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MOF_FIELD.DataPtr", data_ptr, 0x0, 0x40, true, 0xfe8d25ef2e02e9fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MOF_FIELD.Length", length, 0x40, 0x20, true, 0x7f27b226d6207ae5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MOF_FIELD.DataType", data_type, 0x60, 0x20, true, 0x575a677c11001df0)
#else
#define _m00
#define _m01
#define _m02
#endif