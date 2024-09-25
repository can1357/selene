#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::timeline_bitmap_t, 14>), "_PROCESS_ENERGY_VALUES_EXTENSION.Timelines", timelines, 0x0, 0x80, true, 0x746409b5484f0c9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.CpuTimeline", cpu_timeline, 0x0, 0x40, true, 0xee0c2d55f8eed5e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.DiskTimeline", disk_timeline, 0x40, 0x40, true, 0x2f27b270b4546364)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.NetworkTimeline", network_timeline, 0x80, 0x40, true, 0xa7bd30f98148ab3d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.MBBTimeline", mbb_timeline, 0xc0, 0x40, true, 0x1d5e8f35d71a893d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.ForegroundTimeline", foreground_timeline, 0x100, 0x40, true, 0x700ce999af3a9c47)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.DesktopVisibleTimeline", desktop_visible_timeline, 0x140, 0x40, true, 0xfa1ec175760d0826)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.CompositionRenderedTimeline", composition_rendered_timeline, 0x180, 0x40, true, 0x2161288cce24560b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.CompositionDirtyGeneratedTimeline", composition_dirty_generated_timeline, 0x1c0, 0x40, true, 0x3bcef6480cb01d70)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.CompositionDirtyPropagatedTimeline", composition_dirty_propagated_timeline, 0x200, 0x40, true, 0xcde84fcdbac6a2d4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.InputTimeline", input_timeline, 0x240, 0x40, true, 0x7ed271a5afe4a0bd)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.AudioInTimeline", audio_in_timeline, 0x280, 0x40, true, 0x6d5b0c82a08beed)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.AudioOutTimeline", audio_out_timeline, 0x2c0, 0x40, true, 0x8e13bd08fea36515)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.DisplayRequiredTimeline", display_required_timeline, 0x300, 0x40, true, 0x7c3a523e392be054)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::timeline_bitmap_t), "_PROCESS_ENERGY_VALUES_EXTENSION.KeyboardInputTimeline", keyboard_input_timeline, 0x340, 0x40, true, 0x2cebcb964eaa4956)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::energy_state_duration_t, 5>), "_PROCESS_ENERGY_VALUES_EXTENSION.Durations", durations, 0x380, 0x40, true, 0x9afcc7c1bb1f6714)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::energy_state_duration_t), "_PROCESS_ENERGY_VALUES_EXTENSION.InputDuration", input_duration, 0x380, 0x40, true, 0xf5729525f7b73655)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::energy_state_duration_t), "_PROCESS_ENERGY_VALUES_EXTENSION.AudioInDuration", audio_in_duration, 0x3c0, 0x40, true, 0xeaf2b73bf24a61b7)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::energy_state_duration_t), "_PROCESS_ENERGY_VALUES_EXTENSION.AudioOutDuration", audio_out_duration, 0x400, 0x40, true, 0xfb6bc6b46a9c3308)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::energy_state_duration_t), "_PROCESS_ENERGY_VALUES_EXTENSION.DisplayRequiredDuration", display_required_duration, 0x440, 0x40, true, 0xdecf643f319a465c)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::energy_state_duration_t), "_PROCESS_ENERGY_VALUES_EXTENSION.PSMBackgroundDuration", psm_background_duration, 0x480, 0x40, true, 0x926077a9d7a37b46)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_ENERGY_VALUES_EXTENSION.KeyboardInput", keyboard_input, 0x4c0, 0x20, true, 0x3aae5552381e81e8)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_ENERGY_VALUES_EXTENSION.MouseInput", mouse_input, 0x4e0, 0x20, true, 0xf88bfef84a7c398f)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif