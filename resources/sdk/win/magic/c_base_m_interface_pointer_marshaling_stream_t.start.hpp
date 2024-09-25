#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CBaseMInterfacePointerMarshalingStream._cRefs", c_refs, 0x40, 0x20, true, 0x62826a0d66b751c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CBaseMInterfacePointerMarshalingStream._lOffset", l_offset, 0x80, 0x20, true, 0xa801bbc0bcc4ce0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CBaseMInterfacePointerMarshalingStream._cbDataSize", cb_data_size, 0xa0, 0x20, true, 0x2243ad1a1156e9ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CBaseMInterfacePointerMarshalingStream._cbBufferSize", cb_buffer_size, 0xc0, 0x20, true, 0x16c35abbf57f8db9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t*), "CBaseMInterfacePointerMarshalingStream._pMInterfacePointer", p_m_interface_pointer, 0x100, 0x40, true, 0x865f39c894ac18db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CBaseMInterfacePointerMarshalingStream._fFree", f_free, 0x140, 0x20, true, 0x8b1bda248df47bd9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif