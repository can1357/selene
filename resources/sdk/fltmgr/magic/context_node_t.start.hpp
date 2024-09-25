#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::tx_context_extension_t*), "_CONTEXT_NODE.TxCtxExtension", tx_ctx_extension, 0x0, 0x40, true, 0x96a4372126c45732)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::section_context_extension_t*), "_CONTEXT_NODE.SectionCtxExtension", section_ctx_extension, 0x0, 0x40, true, 0xfd5bc922b98200b3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CONTEXT_NODE.Data", data, 0x0, 0x40, true, 0xfc142db71b3e3a56)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::allocate_context_header_t*), "_CONTEXT_NODE.RegInfo", reg_info, 0x40, 0x40, true, 0x2af4cf9bb571b624)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_volume_t*), "_CONTEXT_NODE.AttachedObject.Volume", volume, 0x0, 0x40, true, 0x68ee6207e77a2ee8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_CONTEXT_NODE.AttachedObject.Instance", instance, 0x0, 0x40, true, 0xbcb1fb435af5894c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::stream_list_ctrl_t*), "_CONTEXT_NODE.AttachedObject.StreamList", stream_list, 0x0, 0x40, true, 0xbfb6be94bde28726)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::file_list_ctrl_t*), "_CONTEXT_NODE.AttachedObject.FileList", file_list, 0x0, 0x40, true, 0xa35ecda483a5a06b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CONTEXT_NODE.AttachedObject.Pointer", pointer, 0x0, 0x40, true, 0x861d4f1d1474b7aa)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CONTEXT_NODE.AttachedObject.Data", data, 0x0, 0x40, true, 0xc7988a988e72e92b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_attached_object_t), "_CONTEXT_NODE.AttachedObject", attached_object, 0x80, 0x40, true, 0xb7425fcc17f89638)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::tree_node_t), "_CONTEXT_NODE.TreeLink", tree_link, 0xc0, 0xc0, true, 0xa557c50a56b9c94e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_workitem_t), "_CONTEXT_NODE.FltWork", flt_work, 0xc0, 0x40, true, 0x95807b688cc21588)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CONTEXT_NODE.UseCount", use_count, 0x280, 0x20, true, 0xb72809fc6d128643)
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
#define _m13
#endif