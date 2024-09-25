#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPStatusInput.rApp", r_app, 0x0, 0x80, true, 0x82ec867ea3db5680)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPStatusInput.guidStatusRequestID", guid_status_request_id, 0x80, 0x80, true, 0x6eba8bc5d52c66e6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusInput.dwSequence", dw_sequence, 0x100, 0x20, true, 0x17c58e9a8ca30840)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusInput.cbSizeData", cb_size_data, 0x120, 0x20, true, 0xe61aa155e019053e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4056>), "_DXVA_COPPStatusInput.StatusData", status_data, 0x140, 0xc0, true, 0xcedda1d89538f8fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif