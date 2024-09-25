#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::dmmescapetype_t), "_D3DKMT_DMM_ESCAPE.Type", type, 0x0, 0x20, true, 0x4f5bc4dffa01a26e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_DMM_ESCAPE.ProvidedBufferSize", provided_buffer_size, 0x40, 0x40, true, 0x47dc74bb0ec2f456)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_DMM_ESCAPE.MinRequiredBufferSize", min_required_buffer_size, 0x80, 0x40, true, 0x96d0cdfc56d60ef1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_D3DKMT_DMM_ESCAPE.Data", data, 0xc0, 0x8, true, 0xc44eb4c044b04b01)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif