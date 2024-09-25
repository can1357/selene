#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::node_header_t), "_WNF_SCOPE_MAP.Header", header, 0x0, 0x20, true, 0x63bc029d55c1defe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::scope_instance_t*), "_WNF_SCOPE_MAP.SystemScopeInstance", system_scope_instance, 0x40, 0x40, true, 0xf3cc54a67d71157f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::scope_instance_t*), "_WNF_SCOPE_MAP.MachineScopeInstance", machine_scope_instance, 0x80, 0x40, true, 0x9b1adb9a0679abc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::scope_instance_t*), "_WNF_SCOPE_MAP.PhysicalMachineScopeInstance", physical_machine_scope_instance, 0xc0, 0x40, true, 0x1dc08c0aab918d0b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct wnf::scope_map_entry_t, 6>), "_WNF_SCOPE_MAP.ByDataScope", by_data_scope, 0x100, 0x80, true, 0xd9aa5f7485a8d1b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif