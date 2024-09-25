#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CBaseInterfaceDataMarshalingStream._cRefs", c_refs, 0x40, 0x20, true, 0x9eca5a3389d75ccd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CBaseInterfaceDataMarshalingStream._lOffset", l_offset, 0x80, 0x20, true, 0x416aeebb1143ba8c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CBaseInterfaceDataMarshalingStream._cbDataSize", cb_data_size, 0xa0, 0x20, true, 0x4aedf4e8f210801b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CBaseInterfaceDataMarshalingStream._cbBufferSize", cb_buffer_size, 0xc0, 0x20, true, 0x335cf2e9194aa0de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::m_interface_pointer_t*), "CBaseInterfaceDataMarshalingStream._pMInterfacePointer", p_m_interface_pointer, 0x100, 0x40, true, 0x8ab2194189497b44)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CBaseInterfaceDataMarshalingStream._fFree", f_free, 0x140, 0x20, true, 0x8bdb4f8f1bb73ac7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif