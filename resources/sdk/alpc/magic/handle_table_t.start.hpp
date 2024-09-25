#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::handle_entry_t*), "_ALPC_HANDLE_TABLE.Handles", handles, 0x0, 0x40, true, 0x66a6478793669523)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_ALPC_HANDLE_TABLE.TotalHandles", total_handles, 0x40, 0x20, true, 0x873225f0cb1cef0d, 0, uint32_t,uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_HANDLE_TABLE.Flags", flags, 0x60, 0x20, true, 0xa7bc0dc8bd41a878)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_HANDLE_TABLE.Lock", lock, 0x80, 0x40, true, 0x89cdb15ac540b06e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif