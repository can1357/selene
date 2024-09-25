#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwTypeIndex", dw_type_index, 0x0, 0x20, true, 0x95b469f9227457ab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwBufferIndex", dw_buffer_index, 0x20, 0x20, true, 0x11761ae7f087c79b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwDataOffset", dw_data_offset, 0x40, 0x20, true, 0x6bdd4bc9e1e59c2b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwDataSize", dw_data_size, 0x60, 0x20, true, 0x94ca87106bd3368c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwFirstMBaddress", dw_first_m_baddress, 0x80, 0x20, true, 0x1990ea4acf426222)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwNumMBsInBuffer", dw_num_m_bs_in_buffer, 0xa0, 0x20, true, 0xc37a4b512d101a56)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwWidth", dw_width, 0xc0, 0x20, true, 0x4576092c404b77f6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwHeight", dw_height, 0xe0, 0x20, true, 0xc1f0c385b28c1d90)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwStride", dw_stride, 0x100, 0x20, true, 0x9c08f6faa08393f6)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_BufferDescription.dwReservedBits", dw_reserved_bits, 0x120, 0x20, true, 0x62526eb2ced881c6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif