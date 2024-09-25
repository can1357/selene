#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_QUERYREGISTRY_FLAGS.TranslatePath", translate_path, 0x0, 0x1, true, 0x68fd3de8b2272713, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_QUERYREGISTRY_FLAGS.MutableValue", mutable_value, 0x1, 0x1, true, 0xca0d1c59481e34fd, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_QUERYREGISTRY_FLAGS.Value", value, 0x0, 0x20, true, 0x9f7d8e6fdb014a0d)
#else
#define _m00
#define _m01
#define _m02
#endif