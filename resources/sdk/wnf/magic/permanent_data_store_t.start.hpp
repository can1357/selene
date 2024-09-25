#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::node_header_t), "_WNF_PERMANENT_DATA_STORE.Header", header, 0x0, 0x0, false, 0xdf5e8943ffd6c287)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_PERMANENT_DATA_STORE.Lock", lock, 0x0, 0x0, false, 0xd88cb85cdacab5ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WNF_PERMANENT_DATA_STORE.Handle", handle, 0x0, 0x0, false, 0xc311f594c3d9f78a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_PERMANENT_DATA_STORE.Links", links, 0x0, 0x0, false, 0x64e7948205e4fc89)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wnf::data_scope_t), "_WNF_PERMANENT_DATA_STORE.DataScopeType", data_scope_type, 0x0, 0x0, false, 0xf6603d8478ee5fc7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_PERMANENT_DATA_STORE.ScopeInstanceIdSize", scope_instance_id_size, 0x0, 0x0, false, 0x3bf1fbb92190dc53)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif