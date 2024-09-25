#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_INT10_INTERFACE.Size", size, 0x0, 0x10, true, 0x84aa1d7dc0db61ec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_INT10_INTERFACE.Version", version, 0x10, 0x10, true, 0xe36fa7e58403f7f3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_PORT_INT10_INTERFACE.Context", context, 0x40, 0x40, true, 0xe7dc222ebcf8e810)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_INT10_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x72ea634d86e3f40a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_INT10_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xb943c1ea1968aad1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pint10_allocate_buffer_t ), "_VIDEO_PORT_INT10_INTERFACE.Int10AllocateBuffer", int10_allocate_buffer, 0x100, 0x40, true, 0x43763657e360ff27)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pint10_free_buffer_t ), "_VIDEO_PORT_INT10_INTERFACE.Int10FreeBuffer", int10_free_buffer, 0x140, 0x40, true, 0xd935e91a9f7f7882)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t, uint16_t, void*, uint32_t)>*), "_VIDEO_PORT_INT10_INTERFACE.Int10ReadMemory", int10_read_memory, 0x180, 0x40, true, 0xac23af94e9fec043)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t, uint16_t, void*, uint32_t)>*), "_VIDEO_PORT_INT10_INTERFACE.Int10WriteMemory", int10_write_memory, 0x1c0, 0x40, true, 0x44c4ba140d1ca00f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pint10_call_bios_t ), "_VIDEO_PORT_INT10_INTERFACE.Int10CallBios", int10_call_bios, 0x200, 0x40, true, 0xa972737c5fa4232e)
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
#endif