#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_t*), "_NET_BUFFER_DATA.Next", next, 0x0, 0x40, true, 0xdf6452dc3af89d1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_NET_BUFFER_DATA.CurrentMdl", current_mdl, 0x40, 0x40, true, 0x61f9d91f9db4da3f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_DATA.CurrentMdlOffset", current_mdl_offset, 0x80, 0x20, true, 0x5b20be7695a5485d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_buffer_data_length_t), "_NET_BUFFER_DATA.NbDataLength", nb_data_length, 0xc0, 0x40, true, 0xb2cc97a3db63c89a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_NET_BUFFER_DATA.MdlChain", mdl_chain, 0x100, 0x40, true, 0x5da98481a9dd3e42)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_DATA.DataOffset", data_offset, 0x140, 0x20, true, 0xa7516498e454e514)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif