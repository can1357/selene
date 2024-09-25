#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHELPINFO.cbSize", cb_size, 0x0, 0x20, true, 0xebfd64e2d7915aac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPINFO.iContextType", i_context_type, 0x20, 0x20, true, 0xbdd933ab4a7da3ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPINFO.iCtrlId", i_ctrl_id, 0x40, 0x20, true, 0xa574ea1b8adf4ec2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagHELPINFO.hItemHandle", h_item_handle, 0x80, 0x40, true, 0xa00a73973d0f600e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagHELPINFO.dwContextId", dw_context_id, 0xc0, 0x40, true, 0x226bbabffe630dc0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagHELPINFO.MousePos", mouse_pos, 0x100, 0x40, true, 0x3228bfd3f53fa829)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif