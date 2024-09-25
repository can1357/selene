#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT.Version", version, 0x0, 0x20, true, 0x5891de1c183be1d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT.Size", size, 0x20, 0x20, true, 0xb66842b79a1ce842)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT.FStateCount", f_state_count, 0x40, 0x20, true, 0xec36e0b867f38f45)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT.DeepestWakeableFState", deepest_wakeable_f_state, 0x60, 0x20, true, 0x21e98c4e397d6860)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_STOR_POFX_COMPONENT.Id", id, 0x80, 0x80, true, 0x9f32d9d037e2d82a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_pofx_component_idle_state_t, 1>), "_STOR_POFX_COMPONENT.FStates", f_states, 0x100, 0x0, true, 0xe01fcef76bc05f87)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif