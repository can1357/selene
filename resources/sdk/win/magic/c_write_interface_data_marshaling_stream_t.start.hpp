#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CWriteInterfaceDataMarshalingStream._cRefs", c_refs, 0x40, 0x20, true, 0x52c0b4a906e2938)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CWriteInterfaceDataMarshalingStream._lOffset", l_offset, 0x80, 0x20, true, 0x5a790260e678d357)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CWriteInterfaceDataMarshalingStream._cbDataSize", cb_data_size, 0xa0, 0x20, true, 0x1d51942f8b68e937)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CWriteInterfaceDataMarshalingStream._cbBufferSize", cb_buffer_size, 0xc0, 0x20, true, 0x7388909c46f2ce45)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t*), "CWriteInterfaceDataMarshalingStream._pMInterfacePointer", p_m_interface_pointer, 0x100, 0x40, true, 0x3a1ed4c0bd3c0b30)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CWriteInterfaceDataMarshalingStream._fFree", f_free, 0x140, 0x20, true, 0xdd08ebe5e37c765e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif