#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IOP_MC_BUFFER_ENTRY.Type", type, 0x0, 0x0, false, 0xad938c9f31f71d7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOP_MC_BUFFER_ENTRY.Size", size, 0x0, 0x0, false, 0x8b908bd6863e9518)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IOP_MC_BUFFER_ENTRY.ReferenceCount", reference_count, 0x0, 0x0, false, 0xdf846b1f5eace6e3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum iop::mc_buffer_entry_flags_t), "_IOP_MC_BUFFER_ENTRY.Flags", flags, 0x0, 0x0, false, 0x55fdc09748e53a14)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOP_MC_BUFFER_ENTRY.GlobalDataLink", global_data_link, 0x0, 0x0, false, 0xc614ef5a7715bb02)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOP_MC_BUFFER_ENTRY.Address", address, 0x0, 0x0, false, 0xe3eef4f154e657f2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOP_MC_BUFFER_ENTRY.Length", length, 0x0, 0x0, false, 0x6334b0f525c6306e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_IOP_MC_BUFFER_ENTRY.AccessMode", access_mode, 0x0, 0x0, false, 0xd2758fd6c83bc1d4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IOP_MC_BUFFER_ENTRY.MdlRef", mdl_ref, 0x0, 0x0, false, 0xd9e09465cce93125)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_IOP_MC_BUFFER_ENTRY.Mdl", mdl, 0x0, 0x0, false, 0xfec0a1a655cc94ec)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_IOP_MC_BUFFER_ENTRY.MdlRundownEvent", mdl_rundown_event, 0x0, 0x0, false, 0x27f1792f03e37385)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_IOP_MC_BUFFER_ENTRY.PfnArray", pfn_array, 0x0, 0x0, false, 0xd57c1d6fb3782ba9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct iop::mc_be_page_node_t, 1>), "_IOP_MC_BUFFER_ENTRY.PageNodes", page_nodes, 0x0, 0x0, false, 0xde3eebc4c29f31da)
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
#define _m10
#define _m11
#define _m12
#endif