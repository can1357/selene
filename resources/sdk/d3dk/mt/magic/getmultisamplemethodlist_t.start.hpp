#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETMULTISAMPLEMETHODLIST.hAdapter", h_adapter, 0x0, 0x20, true, 0x211adb6cbecd4103)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETMULTISAMPLEMETHODLIST.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x822c1c5facbd1b71)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETMULTISAMPLEMETHODLIST.Width", width, 0x40, 0x20, true, 0x37f6f1e2c7041ccc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETMULTISAMPLEMETHODLIST.Height", height, 0x60, 0x20, true, 0x5372e9897e0bde98)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DKMT_GETMULTISAMPLEMETHODLIST.Format", format, 0x80, 0x20, true, 0x82621178672abf4a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multisamplemethod_t*), "_D3DKMT_GETMULTISAMPLEMETHODLIST.pMethodList", p_method_list, 0xc0, 0x40, true, 0xfa84b17c91de9e64)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETMULTISAMPLEMETHODLIST.MethodCount", method_count, 0x100, 0x20, true, 0x5c67143cdd1593dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif