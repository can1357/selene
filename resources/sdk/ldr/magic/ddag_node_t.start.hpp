#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LDR_DDAG_NODE.Modules", modules, 0x0, 0x80, true, 0x353e5f0d2877b96c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::service_tag_record_t*), "_LDR_DDAG_NODE.ServiceTagList", service_tag_list, 0x80, 0x40, true, 0x34ba21256049d854)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DDAG_NODE.LoadCount", load_count, 0xc0, 0x20, true, 0xa3cced9c67f0993c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DDAG_NODE.LoadWhileUnloadingCount", load_while_unloading_count, 0xe0, 0x20, true, 0x802e1722ec71f0d1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DDAG_NODE.LowestLink", lowest_link, 0x100, 0x20, true, 0x965069f2d10f72a7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldrp::cslist_t), "_LDR_DDAG_NODE.Dependencies", dependencies, 0x140, 0x40, true, 0x40ca4ab8fd19f53b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldrp::cslist_t), "_LDR_DDAG_NODE.IncomingDependencies", incoming_dependencies, 0x180, 0x40, true, 0x5db6b7ac9377e1cb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum ldr::ddag_state_t), "_LDR_DDAG_NODE.State", state, 0x1c0, 0x20, true, 0xec4d75533a67f6a8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_LDR_DDAG_NODE.CondenseLink", condense_link, 0x200, 0x40, true, 0x756afc861d9bac01)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DDAG_NODE.PreorderNumber", preorder_number, 0x240, 0x20, true, 0x696226c667aa23a1)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_LDR_DDAG_NODE.RemovalLink", removal_link, 0x140, 0x40, true, 0xb3a5d8d1b7b27c11)
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
#endif