#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORVERTICALBLANKEVENT2.hAdapter", h_adapter, 0x0, 0x20, true, 0x740d9a3cd355afd3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORVERTICALBLANKEVENT2.hDevice", h_device, 0x20, 0x20, true, 0x708a32ec868f7ab7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORVERTICALBLANKEVENT2.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xb3aacdfcb9b22ab2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORVERTICALBLANKEVENT2.NumObjects", num_objects, 0x60, 0x20, true, 0xa08021394f0bd41f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_D3DKMT_WAITFORVERTICALBLANKEVENT2.ObjectHandleArray", object_handle_array, 0x80, 0x0, true, 0x5c0ece4d7f2c7b9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif