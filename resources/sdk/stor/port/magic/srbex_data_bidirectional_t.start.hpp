#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::srbexdatatype_t), "_SRBEX_DATA_BIDIRECTIONAL.Type", type, 0x0, 0x20, true, 0x5b0f1dd423ef205c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRBEX_DATA_BIDIRECTIONAL.Length", length, 0x20, 0x20, true, 0x10b58ee1f8cd7bf1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRBEX_DATA_BIDIRECTIONAL.DataInTransferLength", data_in_transfer_length, 0x40, 0x20, true, 0x97f085239dc31c39)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SRBEX_DATA_BIDIRECTIONAL.DataInBuffer", data_in_buffer, 0x80, 0x40, true, 0xf0782696403aed98)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif